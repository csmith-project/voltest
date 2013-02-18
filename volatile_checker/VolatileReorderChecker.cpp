#include "VolatileReorderChecker.h"

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Analysis/CallGraph.h"

#include "CheckerManager.h"

using namespace clang;
using namespace llvm;

static const char *DescriptionMsg =
"Check if there is at most one volatile access between two sequence pointers. \
Return 0 upon success. \n"; 

static RegisterChecker<VolatileReorderChecker>
         C("volatile-reorder", DescriptionMsg);

typedef llvm::SmallVector<const Expr *, 5> ExprVector;

class VolatileAccessCollector : public 
  RecursiveASTVisitor<VolatileAccessCollector> {

public:
  VolatileAccessCollector(VolatileReorderChecker *Instance,
                          const FunctionDecl *FD)
    : ConsumerInstance(Instance),
      CurrFD(FD),
      IsFromMemberExpr(false),
      IsFromAddrTaken(false)
  { }

  ~VolatileAccessCollector() { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

  bool VisitMemberExpr(MemberExpr *ME);

  bool VisitUnaryOperator(UnaryOperator *UO);

  bool VisitRecordDecl(RecordDecl *RD);

  bool VisitExplicitCastExpr(ExplicitCastExpr *CE);

private:
  VolatileReorderChecker *ConsumerInstance;

  const FunctionDecl *CurrFD; 

  bool IsFromMemberExpr;

  bool IsFromAddrTaken;
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
      IsFromMemberExpr(false),
      IsFromAddrTaken(false)
  { }

  ~ExpressionVolatileAccessVisitor() { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

  bool VisitMemberExpr(MemberExpr *ME);

  bool VisitExplicitCastExpr(ExplicitCastExpr *CE);

  bool VisitCallExpr(CallExpr *CE);

  bool VisitBinaryOperator(BinaryOperator *BO);

  bool VisitUnaryOperator(UnaryOperator *UO);

  bool hasMultipleVolAccesses() { return (NumVolAccesses > 1); }

  int getNumVolAccesses() { return NumVolAccesses; }

  void getVolAccesses(ExprVector &Accesses);

  void addOneVolAccess(const Expr *E);

private:
  bool hasVol(const QualType &QT);

  VolatileReorderChecker *ConsumerInstance;

  ExprVector VolAccesses;

  int NumVolAccesses;

  bool IsFromMemberExpr;

  bool IsFromAddrTaken;
};

void ExpressionVolatileAccessVisitor::getVolAccesses(ExprVector &Accesses)
{
  Accesses = VolAccesses;
}

bool ExpressionVolatileAccessVisitor::hasVol(const QualType &QT)
{
  if (ConsumerInstance->hasVolatileQual(QT)) {
    NumVolAccesses++;
    return true;
  }
  return false;
}

void ExpressionVolatileAccessVisitor::addOneVolAccess(const Expr *E)
{
  CheckerAssert(E && "Null Expr!");
  VolAccesses.push_back(E); 
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

  // only need to check the qualifiers on the type, don't recursively 
  // get into the nested type, e.g. struct fields
  if (IsFromAddrTaken) {
    IsFromAddrTaken = false;
    if (VD->getType().isVolatileQualified())
        addOneVolAccess(DRE);
    return !hasMultipleVolAccesses();
  }
  
  if (hasVol(VD->getType())) {
    addOneVolAccess(DRE);
  }
  return !hasMultipleVolAccesses();
}

bool ExpressionVolatileAccessVisitor::VisitMemberExpr(MemberExpr *ME)
{
  if (IsFromMemberExpr)
    return true;

  const FieldDecl *D = dyn_cast<FieldDecl>(ME->getMemberDecl());
  if (!D)
    return true;

  IsFromMemberExpr = true;
  if (hasVol(D->getType()))
    addOneVolAccess(ME);

  return !hasMultipleVolAccesses();
}

bool ExpressionVolatileAccessVisitor::VisitExplicitCastExpr(ExplicitCastExpr *CE)
{
  if (hasVol(CE->getTypeAsWritten()))
    addOneVolAccess(CE);

  return !hasMultipleVolAccesses();
}

bool ExpressionVolatileAccessVisitor::VisitCallExpr(CallExpr *CE)
{
  ExpressionVolatileAccessVisitor V(ConsumerInstance);
  for (CallExpr::arg_iterator I = CE->arg_begin(), E = CE->arg_end();
       I != E; ++I) {
    V.TraverseStmt(*I);
    if (V.hasMultipleVolAccesses()) {
      NumVolAccesses = V.getNumVolAccesses(); 
      V.getVolAccesses(VolAccesses);
      return false;
    }
  }

  // handle cases like:
  // volatile int g;
  // int foo(int p) {
  //  return g;
  // }
  // void bar(void) { foo(foo(1)); }
  // in this case, foo(foo(1)) only have one volatile accesses between two sequence points 
  for (int I = V.getNumVolAccesses(); I > 0; --I) {
    NumVolAccesses--;
  }

  const FunctionDecl *FD = CE->getDirectCallee();
  // FIXME: not precise, for example, not considering function pointers
  // conservatively increase NumVolAccesses...
  if (!FD || ConsumerInstance->FuncsWithVols.count(FD->getCanonicalDecl())) {
    NumVolAccesses++;
    if (hasMultipleVolAccesses()) {
      // when VolAccesses.size() >= NumVolAccesses, 
      // we are on the way back from recursive call when dealing with foo(foo(1))
      // so skip it
      if (static_cast<int>(VolAccesses.size()) < NumVolAccesses)
        addOneVolAccess(CE);
      return false;
    }
    addOneVolAccess(CE);
  }
  return true;
}

bool ExpressionVolatileAccessVisitor::VisitBinaryOperator(BinaryOperator *BO)
{
  BinaryOperator::Opcode Op = BO->getOpcode();
  if ((Op == BO_Comma) ||
      (Op == BO_LAnd) || 
      (Op == BO_LOr)) {
    Expr *E = BO->getLHS();
    ExpressionVolatileAccessVisitor V(ConsumerInstance);
    V.TraverseStmt(E);
    if (V.hasMultipleVolAccesses()) {
      NumVolAccesses = V.getNumVolAccesses(); 
      V.getVolAccesses(VolAccesses);
    }
    return false;
  }
  return true;
}

bool ExpressionVolatileAccessVisitor::VisitUnaryOperator(UnaryOperator *UO)
{
  UnaryOperator::Opcode Op = UO->getOpcode();
  if (Op == UO_AddrOf)
    IsFromAddrTaken = true;

  if ((Op == UO_AddrOf) || (Op == UO_Deref)) {
    Expr *E = UO->getSubExpr();
    ExpressionVolatileAccessVisitor V(ConsumerInstance);
    V.TraverseStmt(E);
    if (V.hasMultipleVolAccesses()) {
      NumVolAccesses = V.getNumVolAccesses(); 
      V.getVolAccesses(VolAccesses);
      return false;
    }
    // dont' count cases like
    // volatile int * volatile p; int foo() { return *p; }
    // as 2 volatile accesses;
    if (V.getNumVolAccesses() != 0)
      return true;

    if (hasVol(UO->getType()))
      addOneVolAccess(UO);
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
  if (IsFromAddrTaken) {
    IsFromAddrTaken = false;
    return true;
  }

  IsFromMemberExpr = false;
  const VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
  if (!VD)
    return true;
  return ConsumerInstance->handleOneQualType(CurrFD, DRE, VD->getType());
}

bool VolatileAccessCollector::VisitMemberExpr(MemberExpr *ME)
{
  if (IsFromMemberExpr) {
    if (ME->getType().isVolatileQualified()) {
      CheckerAssert(CurrFD && "NULL CurrFD!");
      ConsumerInstance->FuncsWithVols.insert(CurrFD);
      ConsumerInstance->addOneVolExprStr(CurrFD, ME);
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
  return ConsumerInstance->handleOneQualType(CurrFD, ME, D->getType());
}

bool VolatileAccessCollector::VisitUnaryOperator(UnaryOperator *UO)
{
  UnaryOperator::Opcode Op = UO->getOpcode();
  if (Op == UO_Deref) {
    return ConsumerInstance->handleOneQualType(CurrFD, UO, UO->getType());
  }
  if (Op != UO_AddrOf)
    return true;

  Expr *E = UO->getSubExpr()->IgnoreParenCasts();

  IsFromAddrTaken = true;
  if (E->getType().isVolatileQualified()) {
    CheckerAssert(CurrFD && "NULL CurrFD!");
    ConsumerInstance->FuncsWithVols.insert(CurrFD);
    ConsumerInstance->addOneVolExprStr(CurrFD, E);
    return false;
  }
  return true;
}

bool VolatileAccessCollector::VisitExplicitCastExpr(ExplicitCastExpr *CE)
{
  return ConsumerInstance->handleOneQualType(CurrFD, CE,
           CE->getTypeAsWritten());
}

bool VolatileAccessVisitor::VisitExpr(Expr *E)
{
  if (dyn_cast<InitListExpr>(E)) {
    return true;
  }

  ExpressionVolatileAccessVisitor V(ConsumerInstance);
  V.TraverseStmt(E);
  if (V.hasMultipleVolAccesses()) {
    MultipleVolAccesses = true;
    ConsumerInstance->OffensiveExpr = E;
    V.getVolAccesses(ConsumerInstance->VolAccesses);
    CheckerAssert((V.getNumVolAccesses() == 
                     static_cast<int>(ConsumerInstance->VolAccesses.size())) &&
                  "Unmatched Vol Accesses!");
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
  if (!Success) {
    CheckerAssert((VolAccesses.size() > 1) && 
                  "size of VolAccesses must be greater than 1!");
    CheckerAssert(OffensiveExpr && "Invalid OffensiveExpr!");
    CheckMsg = "Offensive Expr is at line ";

    std::string ES;
    getExprLineNumStr(OffensiveExpr, ES);
    CheckMsg += ES;
    CheckMsg += ": ";
    getExprString(OffensiveExpr, ES);
    CheckMsg += ES;
    CheckMsg += "\n  multiple volatile accesses:\n";
    
    for (ExprVector::iterator I = VolAccesses.begin(), E = VolAccesses.end();
         I != E; ++I) {
      getExprString(*I, ES);
      CheckMsg += "  ";
      CheckMsg += ES;
      CheckMsg += "\n";
    }
  }

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
    const FunctionDecl *CanonicalFD = FD->getCanonicalDecl();
    FuncsWithVols.insert(CanonicalFD);
    FuncVol[CanonicalFD] = "callee(s) has volatile accesses";
  }

  return (VolFunc || hasVolAccess);
}

void VolatileReorderChecker::updateFuncsWithVols(const CallGraph &CG)
{
  const CallGraphNode *Root = CG.getRoot();
  visitCallGraphNode(Root);
}

void VolatileReorderChecker::addOneVolExprStr(const FunctionDecl *CurrFD,
                                              const Expr *E)
{
  std::string VolStr("");
  std::string ES;
  getExprString(E, ES);
  VolStr += ES;
  VolStr += " at line ";
  getExprLineNumStr(E, ES);
  VolStr += ES;
  FuncVol[CurrFD] = VolStr;
}

bool VolatileReorderChecker::handleOneQualType(const FunctionDecl *CurrFD,
                                               const Expr *E,
                                               const QualType &QT)
{
  CheckerAssert(CurrFD && "NULL CurrFD!");
  if (hasVolatileQual(QT)) {
    FuncsWithVols.insert(CurrFD);
    addOneVolExprStr(CurrFD, E);
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
#if 0
  if (Ty->isPointerType()) {
    return hasVolatileQual(Ty->getPointeeType());
  }
#endif
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
  llvm::outs() << "Functions that have volatile accesses: \n";
  for (FunctionSet::iterator I = FuncsWithVols.begin(), E = FuncsWithVols.end();
       I != E; ++I) {
    llvm::outs() << "  " << (*I)->getNameAsString() << " : ";
    llvm::outs() << "volatile access to " << FuncVol[(*I)] << "\n";
  }
  llvm::outs() << "\n";
}

VolatileReorderChecker::~VolatileReorderChecker()
{

}

