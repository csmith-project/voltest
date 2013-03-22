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

  ConsumerInstance->handleOneVarDecl(VD);
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

  if (DumpAllVars)
    dumpAddrsToFile(AllNonVolAddrs, AllVarsOutFile);

  if (OutFile == "")
    dumpAddresses(AllVolAddrs, llvm::outs());
  else
    dumpAddrsToFile(AllVolAddrs, OutFile);
}

void VolatileAddressChecker::dumpAddrsToFile(const std::vector<std::string> &Addrs,
                                             const std::string &FN)
{
  std::string Err;
  llvm::raw_fd_ostream *Out =
    new llvm::raw_fd_ostream(FN.c_str(), Err);
  CheckerAssert(Err.empty() && "Cannot open output file!");
  dumpAddresses(Addrs, *Out);
  delete Out;
}
                                             
void VolatileAddressChecker::dumpAddresses(const std::vector<std::string> &Addrs,
                                           llvm::raw_ostream &OS)
{
  for (std::vector<std::string>::const_iterator I = Addrs.begin(), 
       E = Addrs.end(); I != E; ++I) {
    OS << (*I);
  }
}

bool VolatileAddressChecker::addOneAddress(bool IsVol,
                                           const std::string &Name,
                                           uint64_t Offset,
                                           uint64_t Sz,
                                           const std::string &PtrStr)
{
  CheckerAssert((UnionLevelCount >= 0) && "Invalid UnionLevelCount!");

  std::stringstream SS;
  SS << Name << "; ";
  SS << Offset << "; ";
  SS << Sz << "; ";
  SS << PtrStr << "\n";
  if (DumpAllVars) 
    AllNonVolAddrs.push_back(SS.str());
  // TODO: omit volatile unions for now 
  if (UnionLevelCount > 0)
    return true;

  if (IsVol) {
    AllVolAddrs.push_back(SS.str());
    return true;
  }
  return false;
}

void VolatileAddressChecker::addOneVolatileAddress(const std::string &Name,
                                                   uint64_t Offset,
                                                   uint64_t Sz,
                                                   const std::string &PtrStr)
{
  // TODO: omit volatile unions for now
  if (UnionLevelCount > 0)
    return;

  std::stringstream SS;
  SS << Name << "; ";
  SS << Offset << "; ";
  SS << Sz << "; ";
  SS << PtrStr << "\n";
  AllVolAddrs.push_back(SS.str());
}

void VolatileAddressChecker::handleOneUnion(const std::string &Prefix,
                                            uint64_t Offset,
                                            const RecordDecl *RD)
{
  if (!RD->getDefinition())
    return;

  const ASTRecordLayout &Info = Context->getASTRecordLayout(RD);
  unsigned Count = Info.getFieldCount(); (void)Count;
  uint64_t MaxSz = 0;
  const FieldDecl *MaxFD = NULL;

  for (RecordDecl::field_iterator I = RD->field_begin(), E = RD->field_end();
       I != E; ++I) {
    const FieldDecl *FD = (*I);
    uint64_t FieldSz;
    if (FD->isBitField())
      FieldSz = FD->getBitWidthValue(*Context);
    else 
      FieldSz = Context->getTypeSize(FD->getType());
    
    if (FieldSz > MaxSz) {
      MaxSz = FieldSz;
      MaxFD = FD;
    }
  }
  if (!MaxFD || !MaxSz)
    return;
  
  QualType QT = MaxFD->getType();
  // TODO: skip volatile for now;
  if (QT.isVolatileQualified())
    return;

  if (MaxFD->isBitField()) {
    addOneAddress(QT.isVolatileQualified(),
                  Prefix + MaxFD->getNameAsString(),
                  Offset,
                  MaxSz,
                  "non-pointer");
  }
  else {
    UnionLevelCount++;
    handleOneDeclaratorDecl(Prefix,
                            Offset,
                            MaxFD);
    UnionLevelCount--;
    CheckerAssert((UnionLevelCount >= 0) && "Bad UnionLevelCount");
  }
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
      uint64_t Field_Sz = FD->getBitWidthValue(*Context);
      // omit zero-sz bitfield
      if (!Field_Sz)
        continue;

      QualType QT = FD->getType();
      addOneAddress(QT.isVolatileQualified(),
                    Prefix + FD->getNameAsString(),
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

  if (addOneAddress(QT.isVolatileQualified(),
                    Prefix + DD->getNameAsString(),
                    Offset,
                    Context->getTypeSize(QT),
                    getPointerStr(QT))) {
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
  if (!VD->isThisDeclarationADefinition())
    return;

  const VarDecl *CanonicalVD = VD->getCanonicalDecl();
  if (VisitedVars.count(CanonicalVD))
    return;
  VisitedVars.insert(CanonicalVD);

  if ((AccessOnceVarMode == ACC_VARS_NONE) &&
      AccessOnceVars.count(CanonicalVD))
    return;
  if ((AccessOnceVarMode == ACC_VARS_ONLY) &&
      !AccessOnceVars.count(CanonicalVD))
    return;

  if (AccessOnceVars.count(CanonicalVD)) {
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
  llvm::outs() << "  --all-vars-output=<filename>\n";
  llvm::outs() << "    specifies where to output the addresses/offsets of all vars\n";
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
  else if (!ArgName.compare("all-vars-output")) {
    return setAllVarsOutput(ArgValue);
  }
  else {
    return false;
  }
}

VolatileAddressChecker::~VolatileAddressChecker()
{

}

