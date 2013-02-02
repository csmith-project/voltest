#include <string>
#include <sstream>
#include <cstdlib>

#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Path.h"
#include "CheckerManager.h"

static CheckerManager *CheckerMgr;

static void PrintHelpMessage()
{
  llvm::outs() << "\n";
  llvm::outs() << "Usage: \n";
  llvm::outs() << "  volatile_checker ";
  llvm::outs() << "--checker=<name> ";
  llvm::outs() << "<source_filename>\n\n";

  llvm::outs() << "volatile_checker options:\n";

  llvm::outs() << "  --help: ";
  llvm::outs() << "print this message\n";

  llvm::outs() << "  --checkers: ";
  llvm::outs() << "print the names of all available checkers\n";

  llvm::outs() << "  --verbose-checkers: ";
  llvm::outs() << "print verbose description messages for all checkers\n";
  llvm::outs() << "\n";

  CheckerMgr->printCheckerOptions();
  llvm::outs() << "\n";
}

static void DieOnBadCmdArg(const std::string &ArgStr)
{
  llvm::errs() << "Error: Bad command line option `" << ArgStr << "`\n";
  llvm::errs() << "\n";
  PrintHelpMessage();
  CheckerManager::Finalize();
  exit(-1);
}

static void Die(const std::string &Message)
{
  llvm::errs() << "Error: " << Message << "\n";
  CheckerManager::Finalize();
  exit(-1);
}

static bool HandleOneArgValue(const std::string &ArgValueStr, size_t SepPos)
{
  if ((SepPos < 1) || (SepPos >= ArgValueStr.length())) {
      DieOnBadCmdArg("--" + ArgValueStr);
  }

  std::string ArgName, ArgValue;

  ArgName = ArgValueStr.substr(0, SepPos);
  ArgValue = ArgValueStr.substr(SepPos+1);

  if (!ArgName.compare("checker")) {
    if (CheckerMgr->setChecker(ArgValue))
      Die("Invalid checker[" + ArgValue + "]");
    return true;
  }
  else {
    return false;
  }
}

static bool HandleOneNonValueArg(const std::string &ArgStr)
{
  if (!ArgStr.compare("help")) {
    PrintHelpMessage();
    exit(0);
  }
  else if (!ArgStr.compare("checkers")) {
    CheckerMgr->printCheckerNames();
    exit(0);
  }
  else if (!ArgStr.compare("verbose-checkers")) {
    CheckerMgr->printCheckers();
    exit(0);
  }
  else {
    return false;
  }
}

static bool HandleOneArg(const char *Arg)
{
  std::string ArgStr(Arg);

  if (!ArgStr.compare(0, 2, "--")) {
    std::string SubArgStr = ArgStr.substr(2);
    if (!SubArgStr.length())
      DieOnBadCmdArg(ArgStr);

    size_t found;
    found = SubArgStr.find('=');
    if (found != std::string::npos)
      return HandleOneArgValue(SubArgStr, found);
    else
      return HandleOneNonValueArg(SubArgStr);
  }
  else {
    CheckerMgr->setSrcFileName(ArgStr);
    return true;
  }
}

llvm::sys::Path GetExecutablePath(const char *Argv0) {
  void *MainAddr = (void*) (intptr_t) GetExecutablePath;
  return llvm::sys::Path::GetMainExecutable(Argv0, MainAddr);
}

int main(int argc, char **argv)
{
  CheckerMgr = CheckerManager::GetInstance();
  llvm::SmallVector<std::string, 5> UnresolvedArgs;

  for (int i = 1; i < argc; i++) {
    if (!HandleOneArg(argv[i]))
      UnresolvedArgs.push_back(argv[i]);
  }

  for (llvm::SmallVector<std::string, 5>::iterator I = UnresolvedArgs.begin(),
       E = UnresolvedArgs.end(); I != E; ++I) {
    if (!CheckerMgr->handleCheckerCmdOpt(*I))
      DieOnBadCmdArg(*I);
  }

  std::string ErrorMsg;
  if (!CheckerMgr->verify(ErrorMsg))
    Die(ErrorMsg);

  llvm::SmallVector<const char *, 5> Args;
  Args.push_back(argv[0]);
  Args.push_back(CheckerMgr->getSrcFileName().c_str());
  Args.push_back("-fsyntax-only");
  llvm::sys::Path Path = GetExecutablePath(argv[0]);
  if (!CheckerMgr->initializeCompilerInstance(Args, Path.str(), ErrorMsg))
    Die(ErrorMsg);

  int RV = CheckerMgr->doChecking(ErrorMsg);
  if (RV) {
    llvm::errs() << "Error: " << ErrorMsg << "\n";
  }
  else {
    llvm::outs() << "Succeeded\n";
  }
  CheckerManager::Finalize();
  return RV;
}

