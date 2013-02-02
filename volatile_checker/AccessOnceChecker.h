#ifndef ACCESS_ONCE_CHECKER_H
#define ACCESS_ONCE_CHECKER_H

#include <string>
#include "llvm/ADT/StringRef.h"
#include "Checker.h"

namespace clang {
  class ASTContext;
  class DeclRefExpr;
}

class AccessOnceVisitor;

class AccessOnceChecker : public Checker {
friend class AccessOnceVisitor;

public:

  AccessOnceChecker(const char *CheckerName, const char *Desc)
    : Checker(CheckerName, Desc),
      TheAccessOnceName("ACCESS_ONCE")
  { }

  ~AccessOnceChecker();

private:

  virtual void Initialize(clang::ASTContext &context);

  virtual void HandleTranslationUnit(clang::ASTContext &Ctx);

  virtual void printCmdOpts();

  virtual bool handleValueCmdOpt(const std::string &ValueStr,
                                 size_t SepPos);

  void setAccessOnceVars(const std::string &VarsStr);

  bool checkVarAccess(clang::DeclRefExpr *DRE);

  StringSet VarNames;

  llvm::StringRef TheAccessOnceName;

  // Unimplemented
  AccessOnceChecker();

  AccessOnceChecker(const AccessOnceChecker &);

  void operator=(const AccessOnceChecker &);
};

#endif // ACCESS_ONCE_CHECKER_H

