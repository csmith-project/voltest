#ifndef VOLATILE_REORDER_CHECKER_H
#define VOLATILE_REORDER_CHECKER_H

#include <string>
#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/SmallPtrSet.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/DenseMap.h"
#include "Checker.h"

namespace clang {
  class ASTContext;
  class DeclGroupRef;
  class FunctionDecl;
  class QualType;
  class RecordDecl;
  class CallGraph;
  class CallGraphNode;
}

class VolatileAccessCollector;
class VolatileAccessVisitor;
class ExpressionVolatileAccessVisitor;

class VolatileReorderChecker : public Checker {
friend class VolatileAccessCollector;
friend class VolatileAccessVisitor;
friend class ExpressionVolatileAccessVisitor;

public:

  VolatileReorderChecker(const char *CheckerName, const char *Desc)
    : Checker(CheckerName, Desc),
      OffensiveExpr(NULL)
  { }

  ~VolatileReorderChecker();

private:

  typedef llvm::SmallPtrSet<const clang::FunctionDecl *, 10> FunctionSet;

  typedef llvm::SmallPtrSet<const clang::RecordDecl *, 10> RecordDeclSet;

  typedef llvm::DenseMap<const clang::FunctionDecl *, std::string> FunctionVolatileMap;

  typedef llvm::SmallVector<const clang::Expr *, 5> ExprVector;

  virtual void Initialize(clang::ASTContext &context);

  virtual void HandleTranslationUnit(clang::ASTContext &Ctx);

  virtual bool HandleTopLevelDecl(clang::DeclGroupRef D);

  void printAllFuncsWithVols();

  bool handleOneQualType(const clang::FunctionDecl *CurrFD,
                         const clang::Expr *E,
                         const clang::QualType &QT);

  bool hasVolatileQual(const clang::QualType &QT);

  void updateFuncsWithVols(const clang::CallGraph &CG);

  void addOneVolExprStr(const clang::FunctionDecl *CurrFD, 
                        const clang::Expr *E);

  bool visitCallGraphNode(const clang::CallGraphNode *Node);

  FunctionVolatileMap FuncVol;

  ExprVector VolAccesses;

  FunctionSet FuncsWithVols;

  // record decls that have volatile fields (including sub-struct-field
  // with volatiles, recursively)
  RecordDeclSet RecordsWithVols;

  RecordDeclSet VisitedRecords;

  const clang::Expr *OffensiveExpr;

  // Unimplemented
  VolatileReorderChecker();

  VolatileReorderChecker(const VolatileReorderChecker &);

  void operator=(const VolatileReorderChecker &);
};

#endif // VOLATILE_REORDER_CHECKER_H

