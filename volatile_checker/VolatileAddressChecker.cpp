#include "VolatileAddressChecker.h"

#include <sstream>
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/Lex/Lexer.h"
#include "clang/AST/RecordLayout.h"

#include "CheckerManager.h"

using namespace clang;
using namespace llvm;

static const char *DescriptionMsg =
"output the offset and size of each volatile var, \
including struct fields\n"; 

static RegisterChecker<VolatileAddressChecker>
         C("volatile-address", DescriptionMsg);

class AccessOnceVarCollectionVisitor : public 
  RecursiveASTVisitor<AccessOnceVarCollectionVisitor> {

public:
  explicit AccessOnceVarCollectionVisitor(VolatileAddressChecker *Instance)
    : ConsumerInstance(Instance)
  { }

  bool VisitDeclRefExpr(DeclRefExpr *DRE);

private:
  VolatileAddressChecker *ConsumerInstance;
};

bool AccessOnceVarCollectionVisitor::VisitDeclRefExpr(DeclRefExpr *DRE)
{
  ConsumerInstance->handleOneDeclRefExpr(DRE);
  return true;
}

class VolatileAddressVisitor : public 
  RecursiveASTVisitor<VolatileAddressVisitor> {

public:
  explicit VolatileAddressVisitor(VolatileAddressChecker *Instance)
    : ConsumerInstance(Instance)
  { }

  bool VisitVarDecl(VarDecl *VD);

private:
  VolatileAddressChecker *ConsumerInstance;
};

bool VolatileAddressVisitor::VisitVarDecl(VarDecl *VD)
{
  if (VD->hasLocalStorage())
    return true;

  ConsumerInstance->handleOneVarDecl(VD->getCanonicalDecl());
  return true;
}
 
void VolatileAddressChecker::Initialize(ASTContext &context) 
{
  Checker::Initialize(context);
}

void VolatileAddressChecker::HandleTranslationUnit(ASTContext &Ctx)
{
  if (AccessOnceVarMode != ACC_VARS_NONE) {
    AccessOnceVarCollectionVisitor V(this);
    V.TraverseDecl(Ctx.getTranslationUnitDecl());
  }

  VolatileAddressVisitor Visitor(this);
  Visitor.TraverseDecl(Ctx.getTranslationUnitDecl());

  Ctx.getDiagnostics().setSuppressAllDiagnostics(false);

  if (Ctx.getDiagnostics().hasErrorOccurred() ||
      Ctx.getDiagnostics().hasFatalErrorOccurred()) {
    CheckerAssert(0 && "Fatal error during checing!");
  }

  if (OutFile == "") {
    dumpAddresses(llvm::outs());
  }
  else {
    std::string Err;
    llvm::raw_fd_ostream *Out =
      new llvm::raw_fd_ostream(OutFile.c_str(), Err);
    CheckerAssert(Err.empty() && "Cannot open output file!");
    dumpAddresses(*Out);
    delete Out;
  }
}

void VolatileAddressChecker::dumpAddresses(llvm::raw_ostream &OS)
{
  for (std::vector<std::string>::iterator I = AllAddrs.begin(), 
       E = AllAddrs.end(); I != E; ++I) {
    OS << (*I);
  }
}

void VolatileAddressChecker::addOneVolatileAddress(const std::string &Name,
                                                   uint64_t Offset,
                                                   uint64_t Sz,
                                                   const std::string &PtrStr)
{
  std::stringstream SS;
  SS << Name << "; ";
  SS << Offset << "; ";
  SS << Sz << "; ";
  SS << PtrStr << "\n";
  AllAddrs.push_back(SS.str());
}

void VolatileAddressChecker::handleOneUnion(const std::string &Prefix,
                                            uint64_t Offset,
                                            const RecordDecl *RD)
{
  // TODO
}

void VolatileAddressChecker::handleOneStructure(const std::string &Prefix,
                                                uint64_t Offset,
                                                const RecordDecl *RD)
{
  if (!RD->getDefinition())
    return;

  const ASTRecordLayout &Info = Context->getASTRecordLayout(RD);
  unsigned Count = Info.getFieldCount(); (void)Count;

  for (RecordDecl::field_iterator I = RD->field_begin(), E = RD->field_end();
       I != E; ++I) {
    const FieldDecl *FD = (*I);
    unsigned Idx = FD->getFieldIndex();
    CheckerAssert((Idx < Count) && "Invalid Field Index!");
    uint64_t Field_Off = Offset + Info.getFieldOffset(Idx);

    if (FD->isBitField()) {
      QualType QT = FD->getType();
      if (!QT.isVolatileQualified())
        continue;
      uint64_t Field_Sz = FD->getBitWidthValue(*Context);
      // omit zero-sz bitfield
      if (!Field_Sz)
        continue;
      addOneVolatileAddress(Prefix + FD->getNameAsString(),
                            Field_Off,
                            Field_Sz,
                            "non-pointer");
    }
    else {
      handleOneDeclaratorDecl(Prefix,
                              Field_Off,
                              FD);
    }
  }
}

void VolatileAddressChecker::handleOneArray(const std::string &Prefix,
                                            uint64_t Offset,
                                            const ArrayType *AT)
{
  // currently only handle ConstanceArrayType
  const ConstantArrayType *T = dyn_cast<ConstantArrayType>(AT);
  if (!T)
    return;

  const Type *ElemTy = Context->getBaseElementType(T).getTypePtr();
  const RecordType *ST = ElemTy->getAsStructureType();
  const RecordType *UT = ElemTy->getAsUnionType();
  if (!ST && !UT)
    return;

  uint64_t Count = Context->getConstantArrayElementCount(T);
  for (uint64_t I = 0; I < Count; ++I) {
    uint64_t Elem_Off = Offset + I * Context->getTypeSize(ElemTy);
    std::stringstream SS;
    SS << I;
    if (ST) {
      handleOneStructure("(" + Prefix + SS.str() + ").", 
                         Elem_Off, ST->getDecl());
    }
    else {
      handleOneUnion("(" + Prefix + SS.str() + ").", Elem_Off, UT->getDecl());
    }
  }
}

void VolatileAddressChecker::handleOneDeclaratorDecl(const std::string &Prefix,
                                               uint64_t Offset, 
                                               const DeclaratorDecl *DD)
{
  QualType QT = DD->getType();

  if (QT.isVolatileQualified()) {
    addOneVolatileAddress(Prefix + DD->getNameAsString(),
                          Offset,
                          Context->getTypeSize(QT),
                          getPointerStr(QT));
    return;
  }

  const Type *Ty = QT.getTypePtr();
  if (const RecordType *RT = Ty->getAsStructureType()) {
    const RecordDecl *RD = RT->getDecl();
    handleOneStructure(Prefix + DD->getNameAsString() + ".", Offset, RD);
    return;
  }

  if (const RecordType *RT = Ty->getAsUnionType()) {
    const RecordDecl *RD = RT->getDecl();
    handleOneUnion(Prefix + DD->getNameAsString() + ".", Offset, RD);
    return;
  }

  if (const ArrayType *AT = Context->getAsArrayType(QT)) {
    handleOneArray(Prefix + DD->getNameAsString() + "+", Offset, AT);
  }
}

void VolatileAddressChecker::handleOneVarDecl(const VarDecl *VD)
{
  if (VisitedVars.count(VD))
    return;
  VisitedVars.insert(VD);

  if ((AccessOnceVarMode == ACC_VARS_NONE) &&
      AccessOnceVars.count(VD))
    return;
  if ((AccessOnceVarMode == ACC_VARS_ONLY) &&
      !AccessOnceVars.count(VD))
    return;

  if (AccessOnceVars.count(VD)) {
    QualType QT = VD->getType();
    addOneVolatileAddress(VD->getNameAsString(),
                          0,
                          Context->getTypeSize(QT),
                          getPointerStr(QT));
    return;
  }

  handleOneDeclaratorDecl("", 0, VD);
}

std::string VolatileAddressChecker::getPointerStr(const QualType &QT)
{
  const Type *Ty;
  if (const ArrayType *AT = Context->getAsArrayType(QT))
    Ty = Context->getBaseElementType(AT).getTypePtr();
  else
    Ty = QT.getTypePtr();

  if (Ty->isPointerType())
    return "pointer";
  else
    return "non-pointer"; 
}

void VolatileAddressChecker::handleOneDeclRefExpr(const DeclRefExpr *DRE)
{
  const VarDecl *VD = dyn_cast<VarDecl>(DRE->getDecl());
  if (!VD)
    return;

  SourceLocation Loc = DRE->getLocation();
  // access is outside a macro
  if (!Loc.isMacroID())
    return;

  StringRef M = 
    Lexer::getImmediateMacroName(Loc, 
                                 Context->getSourceManager(),
                                 Context->getLangOpts());

  if (M == "ACCESS_ONCE") {
    const VarDecl *CanonicalVD = VD->getCanonicalDecl();
    AccessOnceVars.insert(CanonicalVD);
  }
}

void VolatileAddressChecker::printCmdOpts()
{
  llvm::outs() << "option[s] supported in checker[" << Name << "]:\n";
  llvm::outs() << "  --handle-access-once-vars=[all|none|only]\n";
  llvm::outs() << "  where\n";
  llvm::outs() << "    all: output volatile vars and vars accessed through ";
  llvm::outs() <<           "ACCESS_ONCE macro [default]\n";
  llvm::outs() << "    none: exclude vars accessed through ACCESS_ONCE\n";
  llvm::outs() << "    only: only output the addresses of vars accessed ";
  llvm::outs() <<           "through ACCESS_ONCE macro\n";
  llvm::outs() << "  --address-output=<filename>\n";
  llvm::outs() << "    specifies where to output the result [default:stdout]\n";
}

bool VolatileAddressChecker::setAccessOnceVarMode(const std::string &ModeStr)
{
  if (ModeStr == "all") 
    AccessOnceVarMode = ACC_VARS_ALL;
  else if (ModeStr == "none")
    AccessOnceVarMode = ACC_VARS_NONE;
  else if (ModeStr == "only")
    AccessOnceVarMode = ACC_VARS_ONLY;
  else
    return false;

  return true;
}

bool VolatileAddressChecker::setOutput(const std::string &OutFile)
{
  this->OutFile = OutFile;
  return true;
}

bool VolatileAddressChecker::handleValueCmdOpt(const std::string &ArgStr,
                                               size_t SepPos)
{
  if ((SepPos < 1) || (SepPos >= ArgStr.length()))
    return false;

  std::string ArgName, ArgValue;

  ArgName = ArgStr.substr(0, SepPos);
  ArgValue = ArgStr.substr(SepPos+1);

  if (!ArgName.compare("handle-access-once-vars")) {
    return setAccessOnceVarMode(ArgValue);
  }
  else if (!ArgName.compare("address-output")) {
    return setOutput(ArgValue);
  }
  else {
    return false;
  }
}

VolatileAddressChecker::~VolatileAddressChecker()
{

}

