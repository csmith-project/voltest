#ifndef ACCESS_ONCE_CHECKER_H
#define ACCESS_ONCE_CHECKER_H

#include "Checker.h"

namespace clang {
  class ASTContext;
}

class AccessOnceVisitor;

class AccessOnceChecker : public Checker {
friend class AccessOnceVisitor;

public:

  AccessOnceChecker(const char *CheckerName, const char *Desc)
    : Checker(CheckerName, Desc),
      Visitor(NULL)
  { }

  ~AccessOnceChecker();

private:

  virtual void Initialize(clang::ASTContext &context);

  virtual void HandleTranslationUnit(clang::ASTContext &Ctx);

  AccessOnceVisitor *Visitor;

  // Unimplemented
  AccessOnceChecker();

  AccessOnceChecker(const AccessOnceChecker &);

  void operator=(const AccessOnceChecker &);
};

#endif // ACCESS_ONCE_CHECKER_H

