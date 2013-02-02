#include "VolatileReorderChecker.h"

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Lex/Lexer.h"

#include "CheckerManager.h"

using namespace clang;
using namespace llvm;

static const char *DescriptionMsg =
"\n"; 

static RegisterChecker<VolatileReorderChecker>
         C("volatile-reorder", DescriptionMsg);

class VolatileReorderVisitor : public 
  RecursiveASTVisitor<VolatileReorderVisitor> {

public:
  explicit VolatileReorderVisitor(VolatileReorderChecker *Instance)
    : ConsumerInstance(Instance)
  { }

private:
  VolatileReorderChecker *ConsumerInstance;
};

void VolatileReorderChecker::Initialize(ASTContext &context) 
{
  Checker::Initialize(context);
  Visitor = new VolatileReorderVisitor(this);
}

void VolatileReorderChecker::HandleTranslationUnit(ASTContext &Ctx)
{
  Visitor->TraverseDecl(Ctx.getTranslationUnitDecl());

  Ctx.getDiagnostics().setSuppressAllDiagnostics(false);

  if (Ctx.getDiagnostics().hasErrorOccurred() ||
      Ctx.getDiagnostics().hasFatalErrorOccurred()) {
    CheckerAssert(0 && "Fatal error during checing!");
  }
}

VolatileReorderChecker::~VolatileReorderChecker()
{
  if (Visitor)
    delete Visitor;
}

