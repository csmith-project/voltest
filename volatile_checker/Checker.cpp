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

Checker::~Checker()
{
  // Nothing to do
}

