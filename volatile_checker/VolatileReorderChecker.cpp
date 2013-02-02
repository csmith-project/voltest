#include "VolatileReorderChecker.h"

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"

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
      CurrFD(FD)
  { }

  ~VolatileAccessCollector() { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

  bool VisitMemberExpr(MemberExpr *ME);

private:
  VolatileReorderChecker *ConsumerInstance;

  const FunctionDecl *CurrFD; 
};

bool VolatileAccessCollector::VisitDeclRefExpr(DeclRefExpr *DRE)
{
  // TODO: need to handle g.f1, where g is visited here,
  // separate two cases, f1 is volatile or not
  const VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
  if (!VD)
    return true;
  return ConsumerInstance->handleOneQualType(CurrFD, VD->getType());
}

bool VolatileAccessCollector::VisitMemberExpr(MemberExpr *ME)
{
  const FieldDecl *D = dyn_cast<FieldDecl>(ME->getMemberDecl());
  if (!D)
    return true;

  return ConsumerInstance->handleOneQualType(CurrFD, D->getType());
}

class VolatileAccessVisitor : public 
  RecursiveASTVisitor<VolatileAccessVisitor> {

public:
  explicit VolatileAccessVisitor(VolatileReorderChecker *Instance)
    : ConsumerInstance(Instance)
  { }

  ~VolatileAccessVisitor() { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

private:
  VolatileReorderChecker *ConsumerInstance;
};

bool VolatileAccessVisitor::VisitDeclRefExpr(DeclRefExpr *DRE)
{
  return true;
}

void VolatileReorderChecker::Initialize(ASTContext &context) 
{
  Checker::Initialize(context);
}

bool VolatileReorderChecker::HandleTopLevelDecl(DeclGroupRef D)
{
  for (DeclGroupRef::iterator I = D.begin(), E = D.end(); I != E; ++I) {
    FunctionDecl *FD = dyn_cast<FunctionDecl>(*I);
    if (!FD)
      continue;
    if (!FD->isThisDeclarationADefinition())
      continue;
    const FunctionDecl *CanonicalFD = FD->getCanonicalDecl();
    VolatileAccessCollector Collector(this, CanonicalFD);
    Collector.TraverseDecl(FD);
  }
  return true;
}

void VolatileReorderChecker::HandleTranslationUnit(ASTContext &Ctx)
{
  printAllFuncsWithVols();

  VolatileAccessVisitor AccessVisitor(this);
  AccessVisitor.TraverseDecl(Ctx.getTranslationUnitDecl());

  Ctx.getDiagnostics().setSuppressAllDiagnostics(false);

  if (Ctx.getDiagnostics().hasErrorOccurred() ||
      Ctx.getDiagnostics().hasFatalErrorOccurred()) {
    CheckerAssert(0 && "Fatal error during checing!");
  }
}

bool VolatileReorderChecker::handleOneQualType(const FunctionDecl *CurrFD,
                                               const QualType &QT)
{
  if (hasVolatileQual(QT)) {
    FuncsWithVols.insert(CurrFD);
    return false;
  }
  return true;
}

bool VolatileReorderChecker::hasVolatileQual(const QualType &QT)
{
  Qualifiers Quals = QT.getQualifiers();

  if (Quals.hasVolatile()) {
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
    // TODO
    const RecordType *RT = Ty->getAs<RecordType>();
    CheckerAssert(RT && "NULL RecordType!");
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

