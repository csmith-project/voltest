#include "CheckerManager.h"

#include <sstream>

#include "clang/Basic/Diagnostic.h"
#include "clang/Basic/TargetInfo.h"
#include "clang/Lex/Preprocessor.h"
#include "clang/Frontend/CompilerInstance.h"
#include "clang/Parse/ParseAST.h"
#include "clang/Serialization/ASTReader.h"
#include "clang/Frontend/TextDiagnosticPrinter.h"
#include "clang/Driver/Compilation.h"
#include "clang/Driver/Driver.h"
#include "clang/Driver/Tool.h"

#include "llvm/Config/config.h"

#include "Checker.h"

using namespace clang::driver;
using namespace clang;

CheckerManager* CheckerManager::Instance;

std::map<std::string, Checker *> *
CheckerManager::CheckersMapPtr;

CheckerManager *CheckerManager::GetInstance()
{
  if (CheckerManager::Instance)
    return CheckerManager::Instance;

  CheckerManager::Instance = new CheckerManager();
  CheckerAssert(CheckerManager::Instance && "NULL Instance");
  CheckerAssert(CheckerManager::CheckersMapPtr && "NULL CheckersMapPtr");
  
  CheckerManager::Instance->CheckersMap = 
    *CheckerManager::CheckersMapPtr;
  return CheckerManager::Instance;
}

bool CheckerManager::isCXXLangOpt()
{
  CheckerAssert(CheckerManager::Instance && "Invalid Instance!");
  CheckerAssert(CheckerManager::Instance->ClangInstance && 
                "Invalid ClangInstance!");
  return (CheckerManager::Instance->ClangInstance->getLangOpts()
          .CPlusPlus);
}

bool CheckerManager::isCLangOpt()
{
  CheckerAssert(CheckerManager::Instance && "Invalid Instance!");
  CheckerAssert(CheckerManager::Instance->ClangInstance && 
                "Invalid ClangInstance!");
  return (CheckerManager::Instance->ClangInstance->getLangOpts()
          .C99);
}

bool CheckerManager::initializeCompilerInstance(
       llvm::SmallVector<const char *, 5> &Args,
       const std::string &Path,
       std::string &ErrorMsg)
{
  // some code to construct CompilerInvocation instance was 
  // copied from clang/examples/clang-interpreter/main.cpp
  IntrusiveRefCntPtr<DiagnosticOptions> DiagOpts = new DiagnosticOptions();
  TextDiagnosticPrinter *DiagClient =
    new TextDiagnosticPrinter(llvm::errs(), &*DiagOpts);

  IntrusiveRefCntPtr<DiagnosticIDs> DiagID(new DiagnosticIDs());
  DiagnosticsEngine Diags(DiagID, &*DiagOpts, DiagClient);
  Driver TheDriver(Path, llvm::sys::getDefaultTargetTriple(),
                   "a.out", /*IsProduction=*/false, Diags);
  TheDriver.setTitle(Args[0]);

  OwningPtr<Compilation> Comp(TheDriver.BuildCompilation(Args));
  CheckerAssert(Comp && "NULL Compilation instance!");

  const driver::JobList &Jobs = Comp->getJobs();
  CheckerAssert((Jobs.size() == 1) && isa<driver::Command>(*Jobs.begin()) &&
                "Bad JobList!");

  const driver::Command *Cmd = cast<driver::Command>(*Jobs.begin());
  CheckerAssert((llvm::StringRef(Cmd->getCreator().getName()) == "clang") &&
                "Invalid Cmd!");

  const driver::ArgStringList &CCArgs = Cmd->getArguments();
  OwningPtr<CompilerInvocation> CI(new CompilerInvocation);
  CompilerInvocation::CreateFromArgs(*CI,
                                     const_cast<const char **>(CCArgs.data()),
                                     const_cast<const char **>(CCArgs.data()) +
                                       CCArgs.size(),
                                     Diags);

  ClangInstance = new CompilerInstance();
  ClangInstance->setInvocation(CI.take());

  // Create the compilers actual diagnostics engine.
  ClangInstance->createDiagnostics(int(CCArgs.size()),
                                   const_cast<char**>(CCArgs.data()));
  CheckerAssert(ClangInstance->hasDiagnostics() && 
                "failed to create Diagnostics!");
#if 0
  // Just backup some code to hard-code search paths to system headers.
  // TheDriver handles all of these.
  HeaderSearchOptions &HeaderOpts = ClangInstance->getHeaderSearchOpts();
  HeaderOpts.AddPath("/usr/local/include", frontend::System, /*IsUserSupplied=*/false,
                     /*IsFramework=*/false, /*IgnoreSysRoot=*/true, 
                     /*IsInternal=*/true, /*ImplicitExternC=*/false);
  HeaderOpts.AddPath("/usr/include/x86_64-linux-gnu", 
                     frontend::System, /*IsUserSupplied=*/false,
                     /*IsFramework=*/false, /*IgnoreSysRoot=*/true, 
                     /*IsInternal=*/true, /*ImplicitExternC=*/true);
  HeaderOpts.AddPath("/include", frontend::System, /*IsUserSupplied=*/false,
                     /*IsFramework=*/false, /*IgnoreSysRoot=*/true, 
                     /*IsInternal=*/true, /*ImplicitExternC=*/true);
  HeaderOpts.AddPath("/usr/include", frontend::System, /*IsUserSupplied=*/false,
                     /*IsFramework=*/false, /*IgnoreSysRoot=*/true, 
                     /*IsInternal=*/true, /*ImplicitExternC=*/true);
#endif

  TargetOptions &TargetOpts = ClangInstance->getTargetOpts();
  TargetOpts.Triple = LLVM_DEFAULT_TARGET_TRIPLE;
  TargetInfo *Target = 
    TargetInfo::CreateTargetInfo(ClangInstance->getDiagnostics(),
                                 TargetOpts);
  ClangInstance->setTarget(Target);
  ClangInstance->createFileManager();
  ClangInstance->createSourceManager(ClangInstance->getFileManager());
  ClangInstance->createPreprocessor();

  DiagnosticConsumer &DgClient = ClangInstance->getDiagnosticClient();
  DgClient.BeginSourceFile(ClangInstance->getLangOpts(),
                           &ClangInstance->getPreprocessor());
  ClangInstance->createASTContext();

  assert(CurrentCheckerImpl && "Bad checker instance!");
  ClangInstance->setASTConsumer(CurrentCheckerImpl);
  Preprocessor &PP = ClangInstance->getPreprocessor();
  PP.getBuiltinInfo().InitializeBuiltins(PP.getIdentifierTable(),
                                         PP.getLangOpts());

  InputKind IK = FrontendOptions::getInputKindForExtension(
        StringRef(SrcFileName).rsplit('.').second);
  if (!((IK == IK_C) || (IK == IK_PreprocessedC) || 
       (IK == IK_CXX) || (IK == IK_PreprocessedCXX))) {
    ErrorMsg = "Unsupported file type!";
    return false;
  }
  if (!ClangInstance->InitializeSourceManager(
        FrontendInputFile(SrcFileName, IK))) {
    ErrorMsg = "Cannot open source file!";
    return false;
  }
  return true;
}

#if 0
bool CheckerManager::initializeCompilerInstance(std::string &ErrorMsg)
{
  if (ClangInstance) {
    ErrorMsg = "CompilerInstance has been initialized!";
    return false;
  }

  ClangInstance = new CompilerInstance();
  assert(ClangInstance);
  
  ClangInstance->createDiagnostics(0, NULL);


  CompilerInvocation &Invocation = ClangInstance->getInvocation();
  InputKind IK = FrontendOptions::getInputKindForExtension(
        StringRef(SrcFileName).rsplit('.').second);
  if ((IK == IK_C) || (IK == IK_PreprocessedC)) {
    Invocation.setLangDefaults(ClangInstance->getLangOpts(), IK_C);
  }
  else if ((IK == IK_CXX) || (IK == IK_PreprocessedCXX)) {
    // ISSUE: it might cause some problems when building AST
    // for a function which has a non-declared callee, e.g., 
    // It results an empty AST for the caller. 
    Invocation.setLangDefaults(ClangInstance->getLangOpts(), IK_CXX);
  }
  else {
    ErrorMsg = "Unsupported file type!";
    return false;
  }

  TargetOptions &TargetOpts = ClangInstance->getTargetOpts();
  TargetOpts.Triple = LLVM_DEFAULT_TARGET_TRIPLE;
  TargetInfo *Target = 
    TargetInfo::CreateTargetInfo(ClangInstance->getDiagnostics(),
                                 TargetOpts);
  ClangInstance->setTarget(Target);

  ClangInstance->createFileManager();
  ClangInstance->createSourceManager(ClangInstance->getFileManager());
  ClangInstance->createPreprocessor();

  DiagnosticConsumer &DgClient = ClangInstance->getDiagnosticClient();
  DgClient.BeginSourceFile(ClangInstance->getLangOpts(),
                           &ClangInstance->getPreprocessor());
  ClangInstance->createASTContext();

  assert(CurrentCheckerImpl && "Bad checker instance!");
  ClangInstance->setASTConsumer(CurrentCheckerImpl);
  Preprocessor &PP = ClangInstance->getPreprocessor();
  PP.getBuiltinInfo().InitializeBuiltins(PP.getIdentifierTable(),
                                         PP.getLangOpts());

  if (!ClangInstance->InitializeSourceManager(
        FrontendInputFile(SrcFileName, IK))) {
    ErrorMsg = "Cannot open source file!";
    return false;
  }

  return true;
}
#endif

void CheckerManager::Finalize()
{
  CheckerAssert(CheckerManager::Instance);
  
  std::map<std::string, Checker *>::iterator I, E;
  for (I = Instance->CheckersMap.begin(), 
       E = Instance->CheckersMap.end();
       I != E; ++I) {
    // CurrentCheckerImpl will be freed by ClangInstance
    if ((*I).second != Instance->CurrentCheckerImpl)
      delete (*I).second;
  }
  if (Instance->CheckersMapPtr)
    delete Instance->CheckersMapPtr;

  delete Instance->ClangInstance;

  delete Instance;
  Instance = NULL;
}

int CheckerManager::doChecking()
{
  ClangInstance->createSema(TU_Complete, 0);
  ClangInstance->getDiagnostics().setSuppressAllDiagnostics(true);
#if 0
  ClangInstance->getDiagnostics().setSuppressAllDiagnostics(false);
  if (ClangInstance->getDiagnostics().hasErrorOccurred() ||
      ClangInstance->getDiagnostics().hasFatalErrorOccurred()) {
    CheckerAssert(0 && "Fatal error during checing!");
  }
#endif

  ParseAST(ClangInstance->getSema());
  ClangInstance->getDiagnosticClient().EndSourceFile();

  int RV = -1;
  if (CurrentCheckerImpl->transSuccess())
    RV = 0;
  return RV;
}

bool CheckerManager::verify(std::string &ErrorMsg)
{
  if (!CurrentCheckerImpl) {
    ErrorMsg = "Empty checker instance!";
    return false;
  }
  return true;
}

void CheckerManager::registerChecker(
       const char *CheckerName, 
       Checker *CheckerImpl)
{
  if (!CheckerManager::CheckersMapPtr) {
    CheckerManager::CheckersMapPtr = 
      new std::map<std::string, Checker *>();
  }

  assert((CheckerImpl != NULL) && "NULL Checker!");
  assert((CheckerManager::CheckersMapPtr->find(CheckerName) == 
          CheckerManager::CheckersMapPtr->end()) &&
         "Duplicated checker!");
  (*CheckerManager::CheckersMapPtr)[CheckerName] = CheckerImpl;
}

void CheckerManager::printCheckers()
{
  llvm::outs() << "Registered Checkers:\n";

  std::map<std::string, Checker *>::iterator I, E;
  for (I = CheckersMap.begin(), 
       E = CheckersMap.end();
       I != E; ++I) {
    llvm::outs() << "  [" << (*I).first << "]: "; 
    llvm::outs() << (*I).second->getDescription() << "\n";
  }
}

void CheckerManager::printCheckerNames()
{
  std::map<std::string, Checker *>::iterator I, E;
  for (I = CheckersMap.begin(), 
       E = CheckersMap.end();
       I != E; ++I) {
    llvm::outs() << (*I).first << "\n";
  }
}

CheckerManager::CheckerManager()
  : CurrentCheckerImpl(NULL),
    SrcFileName("")
{
  // Nothing to do
}

CheckerManager::~CheckerManager()
{
  // Nothing to do
}

