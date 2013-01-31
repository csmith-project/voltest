#ifndef CHECKER_H
#define CHECKER_H

#include <string>
#include "clang/AST/ASTConsumer.h"

#ifndef ENABLE_CHECKER_ASSERT
  #define CheckerAssert(x) {if (!(x)) exit(0);}
#else
  #define CheckerAssert(x) assert(x)
#endif

namespace clang {
  class ASTContext;
}

class Checker : public clang::ASTConsumer {

public:

  Checker(const char *CheckerName, const char *Desc)
    : Name(CheckerName),
      Success(true),
      Context(NULL),
      DescriptionString(Desc)
  {
    // Nothing to do
  }

  virtual ~Checker();

  bool transSuccess() {
    return Success;
  }

  std::string &getDescription() {
    return DescriptionString;
  }

protected:

  virtual void Initialize(clang::ASTContext &context);

  const std::string Name;

  bool Success;

  clang::ASTContext *Context;

  std::string DescriptionString;
};

#endif
