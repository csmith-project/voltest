#ifndef VOLATILE_REORDER_CHECKER_H
#define VOLATILE_REORDER_CHECKER_H

#include <string>
#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "Checker.h"

namespace clang {
  class ASTContext;
  class DeclGroupRef;
  class FunctionDecl;
  class QualType;
}

class VolatileAccessCollector;

class VolatileReorderChecker : public Checker {
friend class VolatileAccessCollector;

public:

  VolatileReorderChecker(const char *CheckerName, const char *Desc)
    : Checker(CheckerName, Desc)
  { }

  ~VolatileReorderChecker();

private:

  typedef llvm::SmallPtrSet<const clang::FunctionDecl *, 10> FunctionSet;

  virtual void Initialize(clang::ASTContext &context);

  virtual void HandleTranslationUnit(clang::ASTContext &Ctx);

  virtual bool HandleTopLevelDecl(clang::DeclGroupRef D);

  void printAllFuncsWithVols();

  bool handleOneQualType(const clang::FunctionDecl *CurrFD,
                         const clang::QualType &QT);

  bool hasVolatileQual(const clang::QualType &QT);

  FunctionSet FuncsWithVols;

  // Unimplemented
  VolatileReorderChecker();

  VolatileReorderChecker(const VolatileReorderChecker &);

  void operator=(const VolatileReorderChecker &);
};

#endif // VOLATILE_REORDER_CHECKER_H

