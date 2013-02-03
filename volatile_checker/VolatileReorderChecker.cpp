#include "VolatileReorderChecker.h"

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Analysis/CallGraph.h"

#include "CheckerManager.h"

using namespace clang;
using namespace llvm;

static const char *DescriptionMsg =
"\n"; 

static RegisterChecker<VolatileReorderChecker>
         C("volatile-reorder", DescriptionMsg);

class VolatileAccessCollector : public 
  RecursiveASTVisitor<VolatileAccessCollector> {

public:
  VolatileAccessCollector(VolatileReorderChecker *Instance,
                          const FunctionDecl *FD)
    : ConsumerInstance(Instance),
      CurrFD(FD),
      IsFromMemberExpr(false)
  { }

  ~VolatileAccessCollector() { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

  bool VisitMemberExpr(MemberExpr *ME);

  bool VisitRecordDecl(RecordDecl *RD);

  bool VisitExplicitCastExpr(ExplicitCastExpr *CE);

private:
  VolatileReorderChecker *ConsumerInstance;

  const FunctionDecl *CurrFD; 

  bool IsFromMemberExpr;
};

class VolatileAccessVisitor : public 
  RecursiveASTVisitor<VolatileAccessVisitor> {

public:
  explicit VolatileAccessVisitor(VolatileReorderChecker *Instance)
    : ConsumerInstance(Instance),
      MultipleVolAccesses(false)
  { }

  ~VolatileAccessVisitor() { }

  bool VisitExpr(Expr *E);

  bool hasMultipleVolAccesses() { return MultipleVolAccesses; }

private:
  VolatileReorderChecker *ConsumerInstance;

  bool MultipleVolAccesses;
};

class ExpressionVolatileAccessVisitor : public 
  RecursiveASTVisitor<ExpressionVolatileAccessVisitor> {

public:
  explicit ExpressionVolatileAccessVisitor(VolatileReorderChecker *Instance)
    : ConsumerInstance(Instance),
      NumVolAccesses(0),
      IsFromMemberExpr(false)
  { }

  ~ExpressionVolatileAccessVisitor() { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

  bool VisitMemberExpr(MemberExpr *ME);

  bool VisitExplicitCastExpr(ExplicitCastExpr *CE);

  bool VisitCallExpr(CallExpr *CE);

  bool hasMultipleVolAccesses() { return (NumVolAccesses > 1); }

private:
  bool handleOneQualType(const QualType &QT);

  VolatileReorderChecker *ConsumerInstance;

  unsigned NumVolAccesses;

  bool IsFromMemberExpr;
};

bool ExpressionVolatileAccessVisitor::handleOneQualType(const QualType &QT)
{
  if (ConsumerInstance->hasVolatileQual(QT)) {
    NumVolAccesses++;
  }
  return !hasMultipleVolAccesses();
}

bool ExpressionVolatileAccessVisitor::VisitDeclRefExpr(DeclRefExpr *DRE)
{
  if (IsFromMemberExpr) {
    IsFromMemberExpr = false;
    return true;
  }

  IsFromMemberExpr = false;
  const VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
  if (!VD)
    return true;
  return handleOneQualType(VD->getType());
}

bool ExpressionVolatileAccessVisitor::VisitMemberExpr(MemberExpr *ME)
{
  if (IsFromMemberExpr) {
    if (ME->getType().isVolatileQualified()) {
      NumVolAccesses++;
      return !hasMultipleVolAccesses();
    }
  }

  const FieldDecl *D = dyn_cast<FieldDecl>(ME->getMemberDecl());
  if (!D)
    return true;

  IsFromMemberExpr = true;
  return handleOneQualType(D->getType());
}

bool ExpressionVolatileAccessVisitor::VisitExplicitCastExpr(ExplicitCastExpr *CE)
{
  return handleOneQualType(CE->getTypeAsWritten());
}

bool ExpressionVolatileAccessVisitor::VisitCallExpr(CallExpr *CE)
{
  const FunctionDecl *FD = CE->getDirectCallee();
  // FIXME: not precise, for example, not considering function pointers
  // conservatively increase NumVolAccesses...
  if (!FD || ConsumerInstance->FuncsWithVols.count(FD->getCanonicalDecl())) {
    NumVolAccesses++;
  }
  return !hasMultipleVolAccesses();
}

bool VolatileAccessCollector::VisitRecordDecl(RecordDecl *RD)
{
  if (ConsumerInstance->VisitedRecords.count(
        dyn_cast<RecordDecl>(RD->getCanonicalDecl()))) {
    return true;
  }

  ConsumerInstance->VisitedRecords.insert(
    dyn_cast<RecordDecl>(RD->getCanonicalDecl()));

  for (RecordDecl::field_iterator I = RD->field_begin(), E = RD->field_end();
       I != E; ++I) {
    const FieldDecl *D = (*I);
    QualType QT = D->getType();
    if (QT.isVolatileQualified()) {
      ConsumerInstance->RecordsWithVols.insert(
        dyn_cast<RecordDecl>(RD->getCanonicalDecl()));
      return true;
    }
    
    const Type *Ty = QT.getTypePtr();
    if (Ty->isRecordType()) {
      const RecordType *RT = Ty->getAs<RecordType>();
      const RecordDecl *SubRD = RT->getDecl();
      CheckerAssert(SubRD && "NULL SubRD!");
  
      // handle nested struct definition
      if (!ConsumerInstance->VisitedRecords.count(
            dyn_cast<RecordDecl>(SubRD->getCanonicalDecl()))) {
        RecordDecl *SubDef = SubRD->getDefinition();
        if (!SubDef)
          continue;

        VolatileAccessCollector Collector(ConsumerInstance, NULL);
        Collector.TraverseDecl(SubDef);
      }

      if (ConsumerInstance->RecordsWithVols.count(
            dyn_cast<RecordDecl>(SubRD->getCanonicalDecl()))) {

        ConsumerInstance->RecordsWithVols.insert(
          dyn_cast<RecordDecl>(RD->getCanonicalDecl()));
        return true;
      }
    }
  }
  return true;
}

bool VolatileAccessCollector::VisitDeclRefExpr(DeclRefExpr *DRE)
{
  // After visiting a MemberExprExpr such as g.f1, RecursiveASTVisitor
  // will walk up to visit g. We don't want to do it, for example,
  // struct S { int f1, volatile int f1 };
  // handleOneQualType will treat g as volatile, but g.f1 is not.
  if (IsFromMemberExpr) {
    IsFromMemberExpr = false;
    return true;
  }

  IsFromMemberExpr = false;
  const VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
  if (!VD)
    return true;
  return ConsumerInstance->handleOneQualType(CurrFD, VD->getType());
}

bool VolatileAccessCollector::VisitMemberExpr(MemberExpr *ME)
{
  if (IsFromMemberExpr) {
    if (ME->getType().isVolatileQualified()) {
      CheckerAssert(CurrFD && "NULL CurrFD!");
      ConsumerInstance->FuncsWithVols.insert(CurrFD);
      return false;
    }
    else {
      return true;
    }
  }

  const FieldDecl *D = dyn_cast<FieldDecl>(ME->getMemberDecl());
  if (!D)
    return true;

  IsFromMemberExpr = true;
  return ConsumerInstance->handleOneQualType(CurrFD, D->getType());
}

bool VolatileAccessCollector::VisitExplicitCastExpr(ExplicitCastExpr *CE)
{
  return ConsumerInstance->handleOneQualType(CurrFD, 
           CE->getTypeAsWritten());
}

bool VolatileAccessVisitor::VisitExpr(Expr *E)
{
  if (BinaryOperator *BO = dyn_cast<BinaryOperator>(E)) {
    if (BO->getOpcode() == BO_Comma) {
      E = BO->getLHS();
    }
  }

  ExpressionVolatileAccessVisitor V(ConsumerInstance);
  V.TraverseStmt(E);
  if (V.hasMultipleVolAccesses()) {
    MultipleVolAccesses = true; 
    return false;
  }
  else {
    return true;
  }
}

void VolatileReorderChecker::Initialize(ASTContext &context) 
{
  Checker::Initialize(context);
}

bool VolatileReorderChecker::HandleTopLevelDecl(DeclGroupRef D)
{
  for (DeclGroupRef::iterator I = D.begin(), E = D.end(); I != E; ++I) {
    RecordDecl *RD = dyn_cast<RecordDecl>(*I);
    if (RD && RD->isThisDeclarationADefinition()) {
      VolatileAccessCollector Collector(this, NULL);
      Collector.TraverseDecl(RD);
      continue;
    }

    FunctionDecl *FD = dyn_cast<FunctionDecl>(*I);
    if (!FD || !FD->isThisDeclarationADefinition())
      continue;
    const FunctionDecl *CanonicalFD = FD->getCanonicalDecl();
    VolatileAccessCollector Collector(this, CanonicalFD);
    Collector.TraverseDecl(FD);
  }
  return true;
}

void VolatileReorderChecker::HandleTranslationUnit(ASTContext &Ctx)
{
  CallGraph CG;
  CG.TraverseDecl(Context->getTranslationUnitDecl());
  // Some functions do not access a volatile directly,
  // but they could do it via their callees. 
  // So need to update FuncsWithVols based on CallGraph
  updateFuncsWithVols(CG);
  printAllFuncsWithVols();

  VolatileAccessVisitor AccessVisitor(this);
  AccessVisitor.TraverseDecl(Ctx.getTranslationUnitDecl());
  Success = !AccessVisitor.hasMultipleVolAccesses();

  Ctx.getDiagnostics().setSuppressAllDiagnostics(false);

  if (Ctx.getDiagnostics().hasErrorOccurred() ||
      Ctx.getDiagnostics().hasFatalErrorOccurred()) {
    CheckerAssert(0 && "Fatal error during checing!");
  }
}

bool VolatileReorderChecker::visitCallGraphNode(const CallGraphNode *Node)
{
  bool VolFunc = false;
  const FunctionDecl *FD = NULL;

  CheckerAssert(Node && "NULL Node!");
  if (const Decl *D = Node->getDecl()) {
    FD = dyn_cast<FunctionDecl>(D);
    if (FD)
      VolFunc = FuncsWithVols.count(FD->getCanonicalDecl()) ? true : false;
  }

  bool hasVolAccess = false;
  for (CallGraphNode::const_iterator I = Node->begin(), E = Node->end();
       I != E; ++I) {
    hasVolAccess = visitCallGraphNode(*I) || hasVolAccess;
  }
  if (FD && hasVolAccess && !VolFunc) {
    FuncsWithVols.insert(FD->getCanonicalDecl());
  }

  return (VolFunc || hasVolAccess);
}

void VolatileReorderChecker::updateFuncsWithVols(const CallGraph &CG)
{
  const CallGraphNode *Root = CG.getRoot();
  visitCallGraphNode(Root);
}

bool VolatileReorderChecker::handleOneQualType(const FunctionDecl *CurrFD,
                                               const QualType &QT)
{
  CheckerAssert(CurrFD && "NULL CurrFD!");
  if (hasVolatileQual(QT)) {
    FuncsWithVols.insert(CurrFD);
    return false;
  }
  return true;
}

bool VolatileReorderChecker::hasVolatileQual(const QualType &QT)
{
  if (QT.isVolatileQualified()) {
    return true;
  }

  const Type *Ty = QT.getTypePtr();
  if (Ty->isPointerType()) {
    return hasVolatileQual(Ty->getPointeeType());
  }
  if (Ty->isArrayType()) {
    const ArrayType *ATy = Context->getAsArrayType(QT);
    return hasVolatileQual(ATy->getElementType());
  }
  if (Ty->isRecordType()) {
    const RecordType *RT = Ty->getAs<RecordType>();
    CheckerAssert(RT && "NULL RecordType!");
    const RecordDecl *RD = RT->getDecl();
    if (RecordsWithVols.count(dyn_cast<RecordDecl>(RD->getCanonicalDecl())))
      return true;
  }
  return false;
}

void VolatileReorderChecker::printAllFuncsWithVols()
{
  for (FunctionSet::iterator I = FuncsWithVols.begin(), E = FuncsWithVols.end();
       I != E; ++I) {
    llvm::outs() << (*I)->getNameAsString() << "\n";
  }
}

VolatileReorderChecker::~VolatileReorderChecker()
{

}

