#ifndef CHECKER_H
#define CHECKER_H

#include <string>
#include <set>
#include "clang/AST/ASTConsumer.h"
#include "clang/Rewrite/Core/Rewriter.h"

#ifndef ENABLE_CHECKER_ASSERT
  #define CheckerAssert(x) {if (!(x)) exit(0);}
#else
  #define CheckerAssert(x) assert(x)
#endif

namespace clang {
  class ASTContext;
  class Expr;
}

class Checker : public clang::ASTConsumer {

public:

  Checker(const char *CheckerName, const char *Desc)
    : Name(CheckerName),
      Success(true),
      CheckMsg(""),
      Context(NULL),
      DescriptionString(Desc)
  {
    // Nothing to do
  }

  virtual ~Checker();

  bool isSuccess(std::string &ErrorMsg) {
    ErrorMsg = CheckMsg;
    return Success;
  }

  std::string &getDescription() {
    return DescriptionString;
  }

  virtual void printCmdOpts() { }

  bool handleCmdOpt(const std::string &Arg);

protected:

  typedef std::set<std::string> StringSet;

  void getExprString(const clang::Expr *E, std::string &ES);

  void getExprLineNumStr(const clang::Expr *E, std::string &ES);

  virtual bool handleValueCmdOpt(const std::string &/*ArgStr*/,
                                 size_t /*SepPos*/) {
    return false;
  }

  virtual bool handleNonValueCmdOpt(const std::string &/*Arg*/) {
    return false;
  }

  void splitString(const std::string &Str, char Delim, 
                   StringSet &Elems);

  virtual void Initialize(clang::ASTContext &context);

  const std::string Name;

  bool Success;

  std::string CheckMsg;

  clang::ASTContext *Context;

  std::string DescriptionString;
  
  clang::Rewriter TheRewriter;
};

#endif
