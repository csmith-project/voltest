#include "Checker.h"

#include <sstream>

#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Basic/SourceManager.h"

using namespace clang;

void Checker::Initialize(ASTContext &context) 
{
  Context = &context;
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

Checker::~Checker()
{
  // Nothing to do
}

