#include <string>
#include <sstream>
#include <cstdlib>

#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Path.h"
#include "CheckerManager.h"

static CheckerManager *CheckerMgr;

std::string SrcFileName;

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
}

static void DieOnBadCmdArg(const std::string &ArgStr)
{
  llvm::outs() << "Error: Bad command line option `" << ArgStr << "`\n";
  llvm::outs() << "\n";
  PrintHelpMessage();
  CheckerManager::Finalize();
  exit(-1);
}

static void Die(const std::string &Message)
{
  llvm::outs() << "Error: " << Message << "\n";
  CheckerManager::Finalize();
  exit(-1);
}

static void HandleOneArgValue(const std::string &ArgValueStr, size_t SepPos)
{
  if ((SepPos < 1) || (SepPos >= ArgValueStr.length())) {
      DieOnBadCmdArg("--" + ArgValueStr);
  }

  std::string ArgName, ArgValue;

  ArgName = ArgValueStr.substr(0, SepPos);
  ArgValue = ArgValueStr.substr(SepPos+1);

  if (!ArgName.compare("checker")) {
    if (CheckerMgr->setChecker(ArgValue)) {
      Die("Invalid checker[" + ArgValue + "]");
    }
  }
  else {
    DieOnBadCmdArg("--" + ArgValueStr);
  }
}

static void HandleOneNoneValueArg(const std::string &ArgStr)
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
    DieOnBadCmdArg(ArgStr);
  }
}

static void HandleOneArg(const char *Arg)
{
  std::string ArgStr(Arg);

  if (!ArgStr.compare(0, 2, "--")) {
    std::string SubArgStr = ArgStr.substr(2);
    if (!SubArgStr.length())
      DieOnBadCmdArg(ArgStr);

    size_t found;
    found = SubArgStr.find('=');
    if (found != std::string::npos) {
      HandleOneArgValue(SubArgStr, found);
    }
    else {
      HandleOneNoneValueArg(SubArgStr);
    }
  }
  else {
    CheckerMgr->setSrcFileName(ArgStr);
    SrcFileName = ArgStr;
  }
}

llvm::sys::Path GetExecutablePath(const char *Argv0) {
  // This just needs to be some symbol in the binary; C++ doesn't
  // allow taking the address of ::main however.
  void *MainAddr = (void*) (intptr_t) GetExecutablePath;
  return llvm::sys::Path::GetMainExecutable(Argv0, MainAddr);
}

int main(int argc, char **argv)
{
  CheckerMgr = CheckerManager::GetInstance();
  for (int i = 1; i < argc; i++) {
    HandleOneArg(argv[i]);
  }

  std::string ErrorMsg;
  if (!CheckerMgr->verify(ErrorMsg))
    Die(ErrorMsg);

  llvm::SmallVector<const char *, 5> Args;
  Args.push_back(argv[0]);
  Args.push_back(SrcFileName.c_str());
  Args.push_back("-fsyntax-only");
  llvm::sys::Path Path = GetExecutablePath(argv[0]);
  if (!CheckerMgr->initializeCompilerInstance(Args, Path.str(), ErrorMsg))
    Die(ErrorMsg);

  int RV = CheckerMgr->doChecking();
  CheckerManager::Finalize();

  return RV;
}

