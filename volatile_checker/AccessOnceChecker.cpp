#include "AccessOnceChecker.h"

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"

#include "CheckerManager.h"

using namespace clang;
using namespace llvm;

static const char *DescriptionMsg =
"check the integrity of ACCESS_ONCE macro: \
check fails if any variable is accessed through both ACCESS_ONCE \
and regular way\n"; 

static RegisterChecker<AccessOnceChecker>
         C("access-once", DescriptionMsg);

class AccessOnceVisitor : public 
  RecursiveASTVisitor<AccessOnceVisitor> {

public:
  explicit AccessOnceVisitor(AccessOnceChecker *Instance)
    : ConsumerInstance(Instance)
  { }

private:
  AccessOnceChecker *ConsumerInstance;
};

void AccessOnceChecker::Initialize(ASTContext &context) 
{
  Checker::Initialize(context);
  Visitor = new AccessOnceVisitor(this);
}

void AccessOnceChecker::HandleTranslationUnit(ASTContext &Ctx)
{
  Visitor->TraverseDecl(Ctx.getTranslationUnitDecl());

  Ctx.getDiagnostics().setSuppressAllDiagnostics(false);

  if (Ctx.getDiagnostics().hasErrorOccurred() ||
      Ctx.getDiagnostics().hasFatalErrorOccurred()) {
    CheckerAssert(0 && "Fatal error during checing!");
  }
}

AccessOnceChecker::~AccessOnceChecker()
{
  if (Visitor)
    delete Visitor;
}

