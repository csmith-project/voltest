#ifndef CHECKER_MANAGER_H
#define CHECKER_MANAGER_H

#include <string>
#include <map>
#include <cassert>

#include "llvm/Support/raw_ostream.h"
#include "llvm/ADT/SmallVector.h"

class Checker;
namespace clang {
  class CompilerInstance;
  class LangOptions;
}

class CheckerManager {

public:

  static CheckerManager *GetInstance();

  static void Finalize();

  static void registerChecker(const char *CheckerName, 
                                     Checker *CheckerImpl);
  
  static bool isCXXLangOpt();

  static bool isCLangOpt();

  int doChecking();

  bool verify(std::string &ErrorMsg);

  int setChecker(const std::string &Checker) {
    if (CheckersMap.find(Checker.c_str()) == CheckersMap.end())
      return -1;
    CurrentCheckerImpl = CheckersMap[Checker.c_str()];
    return 0;
  }

  void setSrcFileName(const std::string &FileName) {
    assert(SrcFileName.empty() && "Could only process one file each time");
    SrcFileName = FileName;
  }

  bool initializeCompilerInstance(llvm::SmallVector<const char *, 5> &Args,
                                  const std::string &Path, 
                                  std::string &ErrorMsg);

  void printCheckers();

  void printCheckerNames();

private:
  
  CheckerManager();

  ~CheckerManager();

  static CheckerManager *Instance;

  static std::map<std::string, Checker *> *CheckersMapPtr;

  std::map<std::string, Checker *> CheckersMap;

  Checker *CurrentCheckerImpl;

  std::string SrcFileName;

  clang::CompilerInstance *ClangInstance;

  // Unimplemented
  CheckerManager(const CheckerManager &);

  void operator=(const CheckerManager&);

};

template<typename CheckerClass>
class RegisterChecker {

public:
  RegisterChecker(const char *CheckerName, const char *Desc) {
    Checker *CheckerImpl = new CheckerClass(CheckerName, Desc);
    assert(CheckerImpl && "Fail to create CheckerClass");
 
    CheckerManager::registerChecker(CheckerName, CheckerImpl);
  }

private:
  // Unimplemented
  RegisterChecker(const RegisterChecker &);

  void operator=(const RegisterChecker &);

};

#endif
