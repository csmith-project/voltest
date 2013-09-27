#include "Checker.h"

#include <sstream>

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Basic/SourceManager.h"
#include "llvm/Support/raw_ostream.h"

using namespace clang;

void Checker::Initialize(ASTContext &context) 
{
  Context = &context;
  TheRewriter.setSourceMgr(Context->getSourceManager(),
                           Context->getLangOpts());
}

bool Checker::handleCmdOpt(const std::string &Arg)
{
  if (Arg.compare(0, 2, "--"))
    return false;
    
  std::string SubArgStr = Arg.substr(2);
  if (!SubArgStr.length())
    return false;

  size_t found;
  found = SubArgStr.find('=');
  if (found != std::string::npos)
    return handleValueCmdOpt(SubArgStr, found);
  else
    return handleNonValueCmdOpt(SubArgStr);
}

void Checker::splitString(const std::string &Str, char Delim,
                          StringSet &Elems)
{
  std::stringstream SS(Str);
  std::string OneElem;
  while(std::getline(SS, OneElem, Delim)) {
    if (OneElem.empty())
      continue;
    Elems.insert(OneElem);
  }
}

void Checker::getExprLineNumStr(const Expr *E, std::string &ES)
{
  ES = "";
  SourceRange ExprRange = E->getSourceRange();
  CheckerAssert(ExprRange.isValid() && "Invalid ExprRange!");
  unsigned Ln = 
    Context->getSourceManager().getSpellingLineNumber(ExprRange.getBegin());
  llvm::raw_string_ostream SS(ES);
  SS << Ln;
}

void Checker::getExprString(const Expr *E, std::string &ES)
{
  SourceRange ExprRange = E->getSourceRange();
  int RangeSize = TheRewriter.getRangeSize(ExprRange);
  CheckerAssert((RangeSize != -1) && "Invalid Range Size!");

  SourceLocation StartLoc = ExprRange.getBegin();
  const char *StartBuf = 
    Context->getSourceManager().getCharacterData(StartLoc);

  ES.assign(StartBuf, RangeSize);

  const BinaryOperator *BinOp = dyn_cast<BinaryOperator>(E);

  // Keep the semantics of Comma operator
  if (BinOp && (BinOp->getOpcode() == BO_Comma))
    ES = "(" + ES + ")";
}

Checker::~Checker()
{
  // Nothing to do
}

