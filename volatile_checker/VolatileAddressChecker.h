#ifndef VOLATILE_ADDRESS_CHECKER_H
#define VOLATILE_ADDRESS_CHECKER_H

#include <string>
#include <vector>
#include "Checker.h"
#include "llvm/ADT/SmallPtrSet.h"

namespace clang {
  class ASTContext;
  class VarDecl;
  class DeclRefExpr;
  class Type;
  class DeclaratorDecl;
  class RecordDecl;
  class ArrayType;
  class QualType;
}

class VolatileAddressVisitor;
class AccessOnceVarCollectionVisitor;

class VolatileAddressChecker : public Checker {
friend class VolatileAddressVisitor;
friend class AccessOnceVarCollectionVisitor;

  typedef enum {
    ACC_VARS_ALL, /* including all access_once_vars and volatile vars */
    ACC_VARS_NONE, /* exclude all access_once_vars */
    ACC_VARS_ONLY, /* exclude all volatile vars */
  } ACC_VAR_MODE;

public:

  VolatileAddressChecker(const char *CheckerName, const char *Desc)
    : Checker(CheckerName, Desc),
      AccessOnceVarMode(ACC_VARS_ALL),
      OutFile(""),
      AllVarsOutFile(""),
      DumpAllVars(false),
      UnionLevelCount(0)
  { }

  ~VolatileAddressChecker();

private:

  typedef llvm::SmallPtrSet<const clang::VarDecl *, 10> VarSet;

  virtual void Initialize(clang::ASTContext &context);

  virtual void HandleTranslationUnit(clang::ASTContext &Ctx);

  virtual void printCmdOpts();

  virtual bool handleValueCmdOpt(const std::string &ValueStr,
                                 size_t SepPos);

  void handleOneVarDecl(const clang::VarDecl *VD);

  void handleOneDeclRefExpr(const clang::DeclRefExpr *DRE);

  void handleOneStructure(bool IsVol,
                          const std::string &Prefix,
                          uint64_t Offset,
                          const clang::RecordDecl *RD);

  void handleOneUnion(bool IsVol,
                      const std::string &Prefix,
                      uint64_t Offset,
                      const clang::RecordDecl *RD);

  void handleOneArray(bool IsVol,
                      const std::string &Prefix,
                      uint64_t Offset,
                      const clang::ArrayType *AT);

  void handleOneDeclaratorDecl(bool IsVol,
                               const std::string &Prefix,
                               uint64_t Offset,
                               const clang::DeclaratorDecl *DD);

  void addOneAddress(bool IsVol,
                     bool IsBitField,
                     const std::string &Name,
                     uint64_t Offset,
                     uint64_t Sz,
                     const std::string &PtrStr);

  void addOneVolatileAddress(const std::string &Name,
                             uint64_t Offset,
                             uint64_t Sz,
                             const std::string &PtrStr);

  void addOneNonVolatileAddress(const std::string &Name,
                                uint64_t Offset,
                                uint64_t Sz,
                                const std::string &PtrStr);

  std::string getPointerStr(const clang::QualType &QT);

  bool setAccessOnceVarMode(const std::string &ModeStr);

  bool setOutput(const std::string &OutFile);

  bool setAllVarsOutput(const std::string &OutFile) {
    AllVarsOutFile = OutFile;
    DumpAllVars = true;
    return true;
  }

  void dumpAddresses(const std::vector<std::string> &Addrs, 
                     llvm::raw_ostream &OS);

  void dumpAddrsToFile(const std::vector<std::string> &Addrs,
                       const std::string &FN);

  VarSet AccessOnceVars;

  VarSet VisitedVars;

  std::vector<std::string> AllVolAddrs;

  std::vector<std::string> AllNonVolAddrs;

  ACC_VAR_MODE AccessOnceVarMode;

  std::string OutFile;

  std::string AllVarsOutFile;

  bool DumpAllVars;

  int UnionLevelCount;

  // Unimplemented
  VolatileAddressChecker();

  VolatileAddressChecker(const VolatileAddressChecker &);

  void operator=(const VolatileAddressChecker &);
};

#endif // VOLATILE_ADDRESS_CHECKER_H

