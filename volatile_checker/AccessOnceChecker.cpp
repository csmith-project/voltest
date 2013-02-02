#include "AccessOnceChecker.h"

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Lex/Lexer.h"

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

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

private:
  AccessOnceChecker *ConsumerInstance;
};

bool AccessOnceVisitor::VisitDeclRefExpr(DeclRefExpr *DRE)
{
  return ConsumerInstance->checkVarAccess(DRE);
}
  
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

bool AccessOnceChecker::checkVarAccess(DeclRefExpr *DRE)
{
  const VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
  if (!VD)
    return true;
  const std::string VarName = VD->getNameAsString();
  if (!VarNames.count(VarName))
    return true;

  // Var is accessed outside of a macro
  SourceLocation Loc = DRE->getLocation();
  if (!Loc.isMacroID()) {
    CheckMsg = VarName + " is accessed outside ACCESS_ONCE macro";
    Success = false;
    return false;
  }

  StringRef M = 
    Lexer::getImmediateMacroName(Loc, 
                                 Context->getSourceManager(),
                                 Context->getLangOpts());

  // Var is accessed in another macro other than ACCESS_ONCE
  if (M != TheAccessOnceName) {
    CheckMsg = VarName + " is accessed in another macro other than ACCESS_ONCE";
    Success = false;
    return false;
  }
  return true;
}

void AccessOnceChecker::printCmdOpts()
{
  llvm::outs() << "option[s] supported in checker[" << Name << "]:\n";
  llvm::outs() << "  --access-once-vars=x,y,z   where x,y,z are vars to be";
  llvm::outs() << "checked\n";
}

void AccessOnceChecker::setAccessOnceVars(const std::string &VarsStr)
{
  splitString(VarsStr, ',', VarNames);
}

bool AccessOnceChecker::handleValueCmdOpt(const std::string &ArgStr,
                                          size_t SepPos)
{
  if ((SepPos < 1) || (SepPos >= ArgStr.length()))
    return false;

  std::string ArgName, ArgValue;

  ArgName = ArgStr.substr(0, SepPos);
  ArgValue = ArgStr.substr(SepPos+1);

  if (!ArgName.compare("access-once-vars")) {
    setAccessOnceVars(ArgValue);
    return true;
  }
  else {
    return false;
  }
}

AccessOnceChecker::~AccessOnceChecker()
{
  if (Visitor)
    delete Visitor;
}

