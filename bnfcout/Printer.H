#ifndef PRINTER_HEADER
#define PRINTER_HEADER

#include "Absyn.H"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Certain applications may improve performance by changing the buffer size */
#define BUFFER_INITIAL 2000
/* You may wish to change _L_PAREN or _R_PAREN */
#define _L_PAREN '('
#define _R_PAREN ')'

class PrintAbsyn : public Visitor
{
 protected:
  int _n_, _i_;
  /* The following are simple heuristics for rendering terminals */
  /* You may wish to change them */
  void render(Char c);
  void render(String s);
  void indent(void);
  void backup(void);
 public:
  PrintAbsyn(void);
  ~PrintAbsyn(void);
  char* print(Visitable* v);

  void visitCode(Code *p); /* abstract class */
  void visitMain(Main *p);
  void visitTLDeclaration(TLDeclaration *p); /* abstract class */
  void visitDImport(DImport *p);
  void visitDExpose(DExpose *p);
  void visitDeclaration(Declaration *p); /* abstract class */
  void visitDNamespace(DNamespace *p);
  void visitDDefaultFunction(DDefaultFunction *p);
  void visitDFunction(DFunction *p);
  void visitDOperator(DOperator *p);
  void visitDOperatorInfo(DOperatorInfo *p);
  void visitDTypeDecl(DTypeDecl *p);
  void visitDExtern(DExtern *p);
  void visitDIVariable(DIVariable *p);
  void visitDVariable(DVariable *p);
  void visitPrototype(Prototype *p); /* abstract class */
  void visitPFunction(PFunction *p);
  void visitOperatorName(OperatorName *p); /* abstract class */
  void visitONLnot(ONLnot *p);
  void visitONPreInc(ONPreInc *p);
  void visitONPreDec(ONPreDec *p);
  void visitONBnot(ONBnot *p);
  void visitONMul(ONMul *p);
  void visitONExp(ONExp *p);
  void visitONDiv(ONDiv *p);
  void visitONRDiv(ONRDiv *p);
  void visitONMod(ONMod *p);
  void visitONAdd(ONAdd *p);
  void visitONSub(ONSub *p);
  void visitONLSh(ONLSh *p);
  void visitONRSh(ONRSh *p);
  void visitONLT(ONLT *p);
  void visitONGT(ONGT *p);
  void visitONLE(ONLE *p);
  void visitONGE(ONGE *p);
  void visitONE(ONE *p);
  void visitONNE(ONNE *p);
  void visitONBand(ONBand *p);
  void visitONBor(ONBor *p);
  void visitONBxor(ONBxor *p);
  void visitONLand(ONLand *p);
  void visitONLor(ONLor *p);
  void visitONLxor(ONLxor *p);
  void visitONRight(ONRight *p);
  void visitONLeft(ONLeft *p);
  void visitOperatorTrait(OperatorTrait *p); /* abstract class */
  void visitOTIdentity(OTIdentity *p);
  void visitFunctionSpecifier(FunctionSpecifier *p); /* abstract class */
  void visitFSEntryPoint(FSEntryPoint *p);
  void visitFSPure(FSPure *p);
  void visitFSInline(FSInline *p);
  void visitFSAssociative(FSAssociative *p);
  void visitFSCommutative(FSCommutative *p);
  void visitFSAntiCommutative(FSAntiCommutative *p);
  void visitFSInverse(FSInverse *p);
  void visitFSSelfInverse(FSSelfInverse *p);
  void visitVariableSpecifier(VariableSpecifier *p); /* abstract class */
  void visitVSConst(VSConst *p);
  void visitTypeSpecifier(TypeSpecifier *p); /* abstract class */
  void visitTSAlign(TSAlign *p);
  void visitTSGeneric(TSGeneric *p);
  void visitGenericParam(GenericParam *p); /* abstract class */
  void visitTSGParam(TSGParam *p);
  void visitType(Type *p); /* abstract class */
  void visitTAddress(TAddress *p);
  void visitTByte(TByte *p);
  void visitTCustom(TCustom *p);
  void visitTFixedArray(TFixedArray *p);
  void visitTGenericArray(TGenericArray *p);
  void visitTStruct(TStruct *p);
  void visitStructMemberDeclaration(StructMemberDeclaration *p); /* abstract class */
  void visitSMDMemberDeclaration(SMDMemberDeclaration *p);
  void visitSMDAnonMemberDeclaration(SMDAnonMemberDeclaration *p);
  void visitParameterDeclaration(ParameterDeclaration *p); /* abstract class */
  void visitPDAutoParameter(PDAutoParameter *p);
  void visitPDTypedParameter(PDTypedParameter *p);
  void visitStatement(Statement *p); /* abstract class */
  void visitSReturn(SReturn *p);
  void visitSExpression(SExpression *p);
  void visitSScope(SScope *p);
  void visitSIf(SIf *p);
  void visitSIfElse(SIfElse *p);
  void visitSLoop(SLoop *p);
  void visitSWhile(SWhile *p);
  void visitSUntil(SUntil *p);
  void visitSFor(SFor *p);
  void visitSForEach(SForEach *p);
  void visitSForAll(SForAll *p);
  void visitSBreak(SBreak *p);
  void visitSContinue(SContinue *p);
  void visitSBreakpoint(SBreakpoint *p);
  void visitSIVariable(SIVariable *p);
  void visitSVariable(SVariable *p);
  void visitRValue(RValue *p); /* abstract class */
  void visitRVIdent(RVIdent *p);
  void visitRVQualified(RVQualified *p);
  void visitExpression(Expression *p); /* abstract class */
  void visitEDouble(EDouble *p);
  void visitEInteger(EInteger *p);
  void visitEString(EString *p);
  void visitEChar(EChar *p);
  void visitEPi(EPi *p);
  void visitERValue(ERValue *p);
  void visitEArray(EArray *p);
  void visitEList(EList *p);
  void visitEAComp(EAComp *p);
  void visitELComp(ELComp *p);
  void visitEIndex(EIndex *p);
  void visitESimpleCall(ESimpleCall *p);
  void visitECall(ECall *p);
  void visitEPostInc(EPostInc *p);
  void visitEPostDec(EPostDec *p);
  void visitEIntrinAddB(EIntrinAddB *p);
  void visitEIntrinSubB(EIntrinSubB *p);
  void visitEIntrinMulB(EIntrinMulB *p);
  void visitEIntrinUdivB(EIntrinUdivB *p);
  void visitEIntrinSdivB(EIntrinSdivB *p);
  void visitEIntrinUremB(EIntrinUremB *p);
  void visitEIntrinSremB(EIntrinSremB *p);
  void visitEIntrinAndB(EIntrinAndB *p);
  void visitEIntrinOrB(EIntrinOrB *p);
  void visitEIntrinXorB(EIntrinXorB *p);
  void visitEIntrinShlB(EIntrinShlB *p);
  void visitEIntrinLshrB(EIntrinLshrB *p);
  void visitEIntrinAshrB(EIntrinAshrB *p);
  void visitEIntrinNotB(EIntrinNotB *p);
  void visitEIntrinNegB(EIntrinNegB *p);
  void visitEIntrinCEqB(EIntrinCEqB *p);
  void visitEIntrinCNeB(EIntrinCNeB *p);
  void visitEIntrinCLtB(EIntrinCLtB *p);
  void visitEIntrinCGtB(EIntrinCGtB *p);
  void visitEIntrinCLeB(EIntrinCLeB *p);
  void visitEIntrinCGeB(EIntrinCGeB *p);
  void visitEIntrinAdd2B(EIntrinAdd2B *p);
  void visitEIntrinSub2B(EIntrinSub2B *p);
  void visitEIntrinMul2B(EIntrinMul2B *p);
  void visitEIntrinUdiv2B(EIntrinUdiv2B *p);
  void visitEIntrinSdiv2B(EIntrinSdiv2B *p);
  void visitEIntrinUrem2B(EIntrinUrem2B *p);
  void visitEIntrinSrem2B(EIntrinSrem2B *p);
  void visitEIntrinAnd2B(EIntrinAnd2B *p);
  void visitEIntrinOr2B(EIntrinOr2B *p);
  void visitEIntrinXor2B(EIntrinXor2B *p);
  void visitEIntrinShl2B(EIntrinShl2B *p);
  void visitEIntrinLshr2B(EIntrinLshr2B *p);
  void visitEIntrinAshr2B(EIntrinAshr2B *p);
  void visitEIntrinNot2B(EIntrinNot2B *p);
  void visitEIntrinNeg2B(EIntrinNeg2B *p);
  void visitEIntrinCEq2B(EIntrinCEq2B *p);
  void visitEIntrinCNe2B(EIntrinCNe2B *p);
  void visitEIntrinCLt2B(EIntrinCLt2B *p);
  void visitEIntrinCGt2B(EIntrinCGt2B *p);
  void visitEIntrinCLe2B(EIntrinCLe2B *p);
  void visitEIntrinCGe2B(EIntrinCGe2B *p);
  void visitEIntrinAdd4B(EIntrinAdd4B *p);
  void visitEIntrinSub4B(EIntrinSub4B *p);
  void visitEIntrinMul4B(EIntrinMul4B *p);
  void visitEIntrinUdiv4B(EIntrinUdiv4B *p);
  void visitEIntrinSdiv4B(EIntrinSdiv4B *p);
  void visitEIntrinUrem4B(EIntrinUrem4B *p);
  void visitEIntrinSrem4B(EIntrinSrem4B *p);
  void visitEIntrinAnd4B(EIntrinAnd4B *p);
  void visitEIntrinOr4B(EIntrinOr4B *p);
  void visitEIntrinXor4B(EIntrinXor4B *p);
  void visitEIntrinShl4B(EIntrinShl4B *p);
  void visitEIntrinLshr4B(EIntrinLshr4B *p);
  void visitEIntrinAshr4B(EIntrinAshr4B *p);
  void visitEIntrinNot4B(EIntrinNot4B *p);
  void visitEIntrinNeg4B(EIntrinNeg4B *p);
  void visitEIntrinCEq4B(EIntrinCEq4B *p);
  void visitEIntrinCNe4B(EIntrinCNe4B *p);
  void visitEIntrinCLt4B(EIntrinCLt4B *p);
  void visitEIntrinCGt4B(EIntrinCGt4B *p);
  void visitEIntrinCLe4B(EIntrinCLe4B *p);
  void visitEIntrinCGe4B(EIntrinCGe4B *p);
  void visitEIntrinAdd8B(EIntrinAdd8B *p);
  void visitEIntrinSub8B(EIntrinSub8B *p);
  void visitEIntrinMul8B(EIntrinMul8B *p);
  void visitEIntrinUdiv8B(EIntrinUdiv8B *p);
  void visitEIntrinSdiv8B(EIntrinSdiv8B *p);
  void visitEIntrinUrem8B(EIntrinUrem8B *p);
  void visitEIntrinSrem8B(EIntrinSrem8B *p);
  void visitEIntrinAnd8B(EIntrinAnd8B *p);
  void visitEIntrinOr8B(EIntrinOr8B *p);
  void visitEIntrinXor8B(EIntrinXor8B *p);
  void visitEIntrinShl8B(EIntrinShl8B *p);
  void visitEIntrinLshr8B(EIntrinLshr8B *p);
  void visitEIntrinAshr8B(EIntrinAshr8B *p);
  void visitEIntrinNot8B(EIntrinNot8B *p);
  void visitEIntrinNeg8B(EIntrinNeg8B *p);
  void visitEIntrinCEq8B(EIntrinCEq8B *p);
  void visitEIntrinCNe8B(EIntrinCNe8B *p);
  void visitEIntrinCLt8B(EIntrinCLt8B *p);
  void visitEIntrinCGt8B(EIntrinCGt8B *p);
  void visitEIntrinCLe8B(EIntrinCLe8B *p);
  void visitEIntrinCGe8B(EIntrinCGe8B *p);
  void visitEIntrinAddB4V(EIntrinAddB4V *p);
  void visitEIntrinSubB4V(EIntrinSubB4V *p);
  void visitEIntrinMulB4V(EIntrinMulB4V *p);
  void visitEIntrinUdivB4V(EIntrinUdivB4V *p);
  void visitEIntrinSdivB4V(EIntrinSdivB4V *p);
  void visitEIntrinUremB4V(EIntrinUremB4V *p);
  void visitEIntrinSremB4V(EIntrinSremB4V *p);
  void visitEIntrinShlB4V(EIntrinShlB4V *p);
  void visitEIntrinLshrB4V(EIntrinLshrB4V *p);
  void visitEIntrinAshrB4V(EIntrinAshrB4V *p);
  void visitEIntrinNegB4V(EIntrinNegB4V *p);
  void visitEIntrinAddB8V(EIntrinAddB8V *p);
  void visitEIntrinSubB8V(EIntrinSubB8V *p);
  void visitEIntrinMulB8V(EIntrinMulB8V *p);
  void visitEIntrinUdivB8V(EIntrinUdivB8V *p);
  void visitEIntrinSdivB8V(EIntrinSdivB8V *p);
  void visitEIntrinUremB8V(EIntrinUremB8V *p);
  void visitEIntrinSremB8V(EIntrinSremB8V *p);
  void visitEIntrinShlB8V(EIntrinShlB8V *p);
  void visitEIntrinLshrB8V(EIntrinLshrB8V *p);
  void visitEIntrinAshrB8V(EIntrinAshrB8V *p);
  void visitEIntrinNegB8V(EIntrinNegB8V *p);
  void visitEIntrinAdd2F(EIntrinAdd2F *p);
  void visitEIntrinSub2F(EIntrinSub2F *p);
  void visitEIntrinMul2F(EIntrinMul2F *p);
  void visitEIntrinUdiv2F(EIntrinUdiv2F *p);
  void visitEIntrinUrem2F(EIntrinUrem2F *p);
  void visitEIntrinAdd4F(EIntrinAdd4F *p);
  void visitEIntrinSub4F(EIntrinSub4F *p);
  void visitEIntrinMul4F(EIntrinMul4F *p);
  void visitEIntrinUdiv4F(EIntrinUdiv4F *p);
  void visitEIntrinUrem4F(EIntrinUrem4F *p);
  void visitEIntrinAdd8F(EIntrinAdd8F *p);
  void visitEIntrinSub8F(EIntrinSub8F *p);
  void visitEIntrinMul8F(EIntrinMul8F *p);
  void visitEIntrinUdiv8F(EIntrinUdiv8F *p);
  void visitEIntrinUrem8F(EIntrinUrem8F *p);
  void visitEIntrinAdd4F4V(EIntrinAdd4F4V *p);
  void visitEIntrinSub4F4V(EIntrinSub4F4V *p);
  void visitEIntrinMul4F4V(EIntrinMul4F4V *p);
  void visitEIntrinUdiv4F4V(EIntrinUdiv4F4V *p);
  void visitEIntrinUrem4F4V(EIntrinUrem4F4V *p);
  void visitELnot(ELnot *p);
  void visitEPreInc(EPreInc *p);
  void visitEPreDec(EPreDec *p);
  void visitENeg(ENeg *p);
  void visitEBnot(EBnot *p);
  void visitEPos(EPos *p);
  void visitEMul(EMul *p);
  void visitEDiv(EDiv *p);
  void visitEMod(EMod *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitELSh(ELSh *p);
  void visitERSh(ERSh *p);
  void visitELT(ELT *p);
  void visitEGT(EGT *p);
  void visitELE(ELE *p);
  void visitEGE(EGE *p);
  void visitEE(EE *p);
  void visitENE(ENE *p);
  void visitEBand(EBand *p);
  void visitEBor(EBor *p);
  void visitEBxor(EBxor *p);
  void visitELand(ELand *p);
  void visitELor(ELor *p);
  void visitELxor(ELxor *p);
  void visitEConditional(EConditional *p);
  void visitEAssign(EAssign *p);
  void visitEAddAssign(EAddAssign *p);
  void visitESubAssign(ESubAssign *p);
  void visitEMulAssign(EMulAssign *p);
  void visitEDivAssign(EDivAssign *p);
  void visitEModAssign(EModAssign *p);
  void visitEAndAssign(EAndAssign *p);
  void visitEOrAssign(EOrAssign *p);
  void visitEXorAssign(EXorAssign *p);
  void visitELShAssign(ELShAssign *p);
  void visitERShAssign(ERShAssign *p);
  void visitListTLDeclaration(ListTLDeclaration* p);
  void visitListDeclaration(ListDeclaration* p);
  void visitListStatement(ListStatement* p);
  void visitListTypeSpecifier(ListTypeSpecifier* p);
  void visitListFunctionSpecifier(ListFunctionSpecifier* p);
  void visitListVariableSpecifier(ListVariableSpecifier* p);
  void visitListStructMemberDeclaration(ListStructMemberDeclaration* p);
  void visitListGenericParam(ListGenericParam* p);
  void visitListParameterDeclaration(ListParameterDeclaration* p);
  void visitListExpression(ListExpression* p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  void inline bufAppend(const char* s)
  {
    int len = strlen(s);
    while (cur_ + len > buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }
  void inline bufAppend(const char c)
  {
    if (cur_ == buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }
  void inline bufReset(void)
  {
    cur_ = 0;
    buf_size = BUFFER_INITIAL;
    resizeBuffer();
    memset(buf_, 0, buf_size);
  }
  void inline resizeBuffer(void)
  {
    char* temp = (char*) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
  char *buf_;
  int cur_, buf_size;
};



class ShowAbsyn : public Visitor
{
 public:
  ShowAbsyn(void);
  ~ShowAbsyn(void);
  char* show(Visitable* v);

  void visitCode(Code *p); /* abstract class */
  void visitMain(Main *p);
  void visitTLDeclaration(TLDeclaration *p); /* abstract class */
  void visitDImport(DImport *p);
  void visitDExpose(DExpose *p);
  void visitDeclaration(Declaration *p); /* abstract class */
  void visitDNamespace(DNamespace *p);
  void visitDDefaultFunction(DDefaultFunction *p);
  void visitDFunction(DFunction *p);
  void visitDOperator(DOperator *p);
  void visitDOperatorInfo(DOperatorInfo *p);
  void visitDTypeDecl(DTypeDecl *p);
  void visitDExtern(DExtern *p);
  void visitDIVariable(DIVariable *p);
  void visitDVariable(DVariable *p);
  void visitPrototype(Prototype *p); /* abstract class */
  void visitPFunction(PFunction *p);
  void visitOperatorName(OperatorName *p); /* abstract class */
  void visitONLnot(ONLnot *p);
  void visitONPreInc(ONPreInc *p);
  void visitONPreDec(ONPreDec *p);
  void visitONBnot(ONBnot *p);
  void visitONMul(ONMul *p);
  void visitONExp(ONExp *p);
  void visitONDiv(ONDiv *p);
  void visitONRDiv(ONRDiv *p);
  void visitONMod(ONMod *p);
  void visitONAdd(ONAdd *p);
  void visitONSub(ONSub *p);
  void visitONLSh(ONLSh *p);
  void visitONRSh(ONRSh *p);
  void visitONLT(ONLT *p);
  void visitONGT(ONGT *p);
  void visitONLE(ONLE *p);
  void visitONGE(ONGE *p);
  void visitONE(ONE *p);
  void visitONNE(ONNE *p);
  void visitONBand(ONBand *p);
  void visitONBor(ONBor *p);
  void visitONBxor(ONBxor *p);
  void visitONLand(ONLand *p);
  void visitONLor(ONLor *p);
  void visitONLxor(ONLxor *p);
  void visitONRight(ONRight *p);
  void visitONLeft(ONLeft *p);
  void visitOperatorTrait(OperatorTrait *p); /* abstract class */
  void visitOTIdentity(OTIdentity *p);
  void visitFunctionSpecifier(FunctionSpecifier *p); /* abstract class */
  void visitFSEntryPoint(FSEntryPoint *p);
  void visitFSPure(FSPure *p);
  void visitFSInline(FSInline *p);
  void visitFSAssociative(FSAssociative *p);
  void visitFSCommutative(FSCommutative *p);
  void visitFSAntiCommutative(FSAntiCommutative *p);
  void visitFSInverse(FSInverse *p);
  void visitFSSelfInverse(FSSelfInverse *p);
  void visitVariableSpecifier(VariableSpecifier *p); /* abstract class */
  void visitVSConst(VSConst *p);
  void visitTypeSpecifier(TypeSpecifier *p); /* abstract class */
  void visitTSAlign(TSAlign *p);
  void visitTSGeneric(TSGeneric *p);
  void visitGenericParam(GenericParam *p); /* abstract class */
  void visitTSGParam(TSGParam *p);
  void visitType(Type *p); /* abstract class */
  void visitTAddress(TAddress *p);
  void visitTByte(TByte *p);
  void visitTCustom(TCustom *p);
  void visitTFixedArray(TFixedArray *p);
  void visitTGenericArray(TGenericArray *p);
  void visitTStruct(TStruct *p);
  void visitStructMemberDeclaration(StructMemberDeclaration *p); /* abstract class */
  void visitSMDMemberDeclaration(SMDMemberDeclaration *p);
  void visitSMDAnonMemberDeclaration(SMDAnonMemberDeclaration *p);
  void visitParameterDeclaration(ParameterDeclaration *p); /* abstract class */
  void visitPDAutoParameter(PDAutoParameter *p);
  void visitPDTypedParameter(PDTypedParameter *p);
  void visitStatement(Statement *p); /* abstract class */
  void visitSReturn(SReturn *p);
  void visitSExpression(SExpression *p);
  void visitSScope(SScope *p);
  void visitSIf(SIf *p);
  void visitSIfElse(SIfElse *p);
  void visitSLoop(SLoop *p);
  void visitSWhile(SWhile *p);
  void visitSUntil(SUntil *p);
  void visitSFor(SFor *p);
  void visitSForEach(SForEach *p);
  void visitSForAll(SForAll *p);
  void visitSBreak(SBreak *p);
  void visitSContinue(SContinue *p);
  void visitSBreakpoint(SBreakpoint *p);
  void visitSIVariable(SIVariable *p);
  void visitSVariable(SVariable *p);
  void visitRValue(RValue *p); /* abstract class */
  void visitRVIdent(RVIdent *p);
  void visitRVQualified(RVQualified *p);
  void visitExpression(Expression *p); /* abstract class */
  void visitEDouble(EDouble *p);
  void visitEInteger(EInteger *p);
  void visitEString(EString *p);
  void visitEChar(EChar *p);
  void visitEPi(EPi *p);
  void visitERValue(ERValue *p);
  void visitEArray(EArray *p);
  void visitEList(EList *p);
  void visitEAComp(EAComp *p);
  void visitELComp(ELComp *p);
  void visitEIndex(EIndex *p);
  void visitESimpleCall(ESimpleCall *p);
  void visitECall(ECall *p);
  void visitEPostInc(EPostInc *p);
  void visitEPostDec(EPostDec *p);
  void visitEIntrinAddB(EIntrinAddB *p);
  void visitEIntrinSubB(EIntrinSubB *p);
  void visitEIntrinMulB(EIntrinMulB *p);
  void visitEIntrinUdivB(EIntrinUdivB *p);
  void visitEIntrinSdivB(EIntrinSdivB *p);
  void visitEIntrinUremB(EIntrinUremB *p);
  void visitEIntrinSremB(EIntrinSremB *p);
  void visitEIntrinAndB(EIntrinAndB *p);
  void visitEIntrinOrB(EIntrinOrB *p);
  void visitEIntrinXorB(EIntrinXorB *p);
  void visitEIntrinShlB(EIntrinShlB *p);
  void visitEIntrinLshrB(EIntrinLshrB *p);
  void visitEIntrinAshrB(EIntrinAshrB *p);
  void visitEIntrinNotB(EIntrinNotB *p);
  void visitEIntrinNegB(EIntrinNegB *p);
  void visitEIntrinCEqB(EIntrinCEqB *p);
  void visitEIntrinCNeB(EIntrinCNeB *p);
  void visitEIntrinCLtB(EIntrinCLtB *p);
  void visitEIntrinCGtB(EIntrinCGtB *p);
  void visitEIntrinCLeB(EIntrinCLeB *p);
  void visitEIntrinCGeB(EIntrinCGeB *p);
  void visitEIntrinAdd2B(EIntrinAdd2B *p);
  void visitEIntrinSub2B(EIntrinSub2B *p);
  void visitEIntrinMul2B(EIntrinMul2B *p);
  void visitEIntrinUdiv2B(EIntrinUdiv2B *p);
  void visitEIntrinSdiv2B(EIntrinSdiv2B *p);
  void visitEIntrinUrem2B(EIntrinUrem2B *p);
  void visitEIntrinSrem2B(EIntrinSrem2B *p);
  void visitEIntrinAnd2B(EIntrinAnd2B *p);
  void visitEIntrinOr2B(EIntrinOr2B *p);
  void visitEIntrinXor2B(EIntrinXor2B *p);
  void visitEIntrinShl2B(EIntrinShl2B *p);
  void visitEIntrinLshr2B(EIntrinLshr2B *p);
  void visitEIntrinAshr2B(EIntrinAshr2B *p);
  void visitEIntrinNot2B(EIntrinNot2B *p);
  void visitEIntrinNeg2B(EIntrinNeg2B *p);
  void visitEIntrinCEq2B(EIntrinCEq2B *p);
  void visitEIntrinCNe2B(EIntrinCNe2B *p);
  void visitEIntrinCLt2B(EIntrinCLt2B *p);
  void visitEIntrinCGt2B(EIntrinCGt2B *p);
  void visitEIntrinCLe2B(EIntrinCLe2B *p);
  void visitEIntrinCGe2B(EIntrinCGe2B *p);
  void visitEIntrinAdd4B(EIntrinAdd4B *p);
  void visitEIntrinSub4B(EIntrinSub4B *p);
  void visitEIntrinMul4B(EIntrinMul4B *p);
  void visitEIntrinUdiv4B(EIntrinUdiv4B *p);
  void visitEIntrinSdiv4B(EIntrinSdiv4B *p);
  void visitEIntrinUrem4B(EIntrinUrem4B *p);
  void visitEIntrinSrem4B(EIntrinSrem4B *p);
  void visitEIntrinAnd4B(EIntrinAnd4B *p);
  void visitEIntrinOr4B(EIntrinOr4B *p);
  void visitEIntrinXor4B(EIntrinXor4B *p);
  void visitEIntrinShl4B(EIntrinShl4B *p);
  void visitEIntrinLshr4B(EIntrinLshr4B *p);
  void visitEIntrinAshr4B(EIntrinAshr4B *p);
  void visitEIntrinNot4B(EIntrinNot4B *p);
  void visitEIntrinNeg4B(EIntrinNeg4B *p);
  void visitEIntrinCEq4B(EIntrinCEq4B *p);
  void visitEIntrinCNe4B(EIntrinCNe4B *p);
  void visitEIntrinCLt4B(EIntrinCLt4B *p);
  void visitEIntrinCGt4B(EIntrinCGt4B *p);
  void visitEIntrinCLe4B(EIntrinCLe4B *p);
  void visitEIntrinCGe4B(EIntrinCGe4B *p);
  void visitEIntrinAdd8B(EIntrinAdd8B *p);
  void visitEIntrinSub8B(EIntrinSub8B *p);
  void visitEIntrinMul8B(EIntrinMul8B *p);
  void visitEIntrinUdiv8B(EIntrinUdiv8B *p);
  void visitEIntrinSdiv8B(EIntrinSdiv8B *p);
  void visitEIntrinUrem8B(EIntrinUrem8B *p);
  void visitEIntrinSrem8B(EIntrinSrem8B *p);
  void visitEIntrinAnd8B(EIntrinAnd8B *p);
  void visitEIntrinOr8B(EIntrinOr8B *p);
  void visitEIntrinXor8B(EIntrinXor8B *p);
  void visitEIntrinShl8B(EIntrinShl8B *p);
  void visitEIntrinLshr8B(EIntrinLshr8B *p);
  void visitEIntrinAshr8B(EIntrinAshr8B *p);
  void visitEIntrinNot8B(EIntrinNot8B *p);
  void visitEIntrinNeg8B(EIntrinNeg8B *p);
  void visitEIntrinCEq8B(EIntrinCEq8B *p);
  void visitEIntrinCNe8B(EIntrinCNe8B *p);
  void visitEIntrinCLt8B(EIntrinCLt8B *p);
  void visitEIntrinCGt8B(EIntrinCGt8B *p);
  void visitEIntrinCLe8B(EIntrinCLe8B *p);
  void visitEIntrinCGe8B(EIntrinCGe8B *p);
  void visitEIntrinAddB4V(EIntrinAddB4V *p);
  void visitEIntrinSubB4V(EIntrinSubB4V *p);
  void visitEIntrinMulB4V(EIntrinMulB4V *p);
  void visitEIntrinUdivB4V(EIntrinUdivB4V *p);
  void visitEIntrinSdivB4V(EIntrinSdivB4V *p);
  void visitEIntrinUremB4V(EIntrinUremB4V *p);
  void visitEIntrinSremB4V(EIntrinSremB4V *p);
  void visitEIntrinShlB4V(EIntrinShlB4V *p);
  void visitEIntrinLshrB4V(EIntrinLshrB4V *p);
  void visitEIntrinAshrB4V(EIntrinAshrB4V *p);
  void visitEIntrinNegB4V(EIntrinNegB4V *p);
  void visitEIntrinAddB8V(EIntrinAddB8V *p);
  void visitEIntrinSubB8V(EIntrinSubB8V *p);
  void visitEIntrinMulB8V(EIntrinMulB8V *p);
  void visitEIntrinUdivB8V(EIntrinUdivB8V *p);
  void visitEIntrinSdivB8V(EIntrinSdivB8V *p);
  void visitEIntrinUremB8V(EIntrinUremB8V *p);
  void visitEIntrinSremB8V(EIntrinSremB8V *p);
  void visitEIntrinShlB8V(EIntrinShlB8V *p);
  void visitEIntrinLshrB8V(EIntrinLshrB8V *p);
  void visitEIntrinAshrB8V(EIntrinAshrB8V *p);
  void visitEIntrinNegB8V(EIntrinNegB8V *p);
  void visitEIntrinAdd2F(EIntrinAdd2F *p);
  void visitEIntrinSub2F(EIntrinSub2F *p);
  void visitEIntrinMul2F(EIntrinMul2F *p);
  void visitEIntrinUdiv2F(EIntrinUdiv2F *p);
  void visitEIntrinUrem2F(EIntrinUrem2F *p);
  void visitEIntrinAdd4F(EIntrinAdd4F *p);
  void visitEIntrinSub4F(EIntrinSub4F *p);
  void visitEIntrinMul4F(EIntrinMul4F *p);
  void visitEIntrinUdiv4F(EIntrinUdiv4F *p);
  void visitEIntrinUrem4F(EIntrinUrem4F *p);
  void visitEIntrinAdd8F(EIntrinAdd8F *p);
  void visitEIntrinSub8F(EIntrinSub8F *p);
  void visitEIntrinMul8F(EIntrinMul8F *p);
  void visitEIntrinUdiv8F(EIntrinUdiv8F *p);
  void visitEIntrinUrem8F(EIntrinUrem8F *p);
  void visitEIntrinAdd4F4V(EIntrinAdd4F4V *p);
  void visitEIntrinSub4F4V(EIntrinSub4F4V *p);
  void visitEIntrinMul4F4V(EIntrinMul4F4V *p);
  void visitEIntrinUdiv4F4V(EIntrinUdiv4F4V *p);
  void visitEIntrinUrem4F4V(EIntrinUrem4F4V *p);
  void visitELnot(ELnot *p);
  void visitEPreInc(EPreInc *p);
  void visitEPreDec(EPreDec *p);
  void visitENeg(ENeg *p);
  void visitEBnot(EBnot *p);
  void visitEPos(EPos *p);
  void visitEMul(EMul *p);
  void visitEDiv(EDiv *p);
  void visitEMod(EMod *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitELSh(ELSh *p);
  void visitERSh(ERSh *p);
  void visitELT(ELT *p);
  void visitEGT(EGT *p);
  void visitELE(ELE *p);
  void visitEGE(EGE *p);
  void visitEE(EE *p);
  void visitENE(ENE *p);
  void visitEBand(EBand *p);
  void visitEBor(EBor *p);
  void visitEBxor(EBxor *p);
  void visitELand(ELand *p);
  void visitELor(ELor *p);
  void visitELxor(ELxor *p);
  void visitEConditional(EConditional *p);
  void visitEAssign(EAssign *p);
  void visitEAddAssign(EAddAssign *p);
  void visitESubAssign(ESubAssign *p);
  void visitEMulAssign(EMulAssign *p);
  void visitEDivAssign(EDivAssign *p);
  void visitEModAssign(EModAssign *p);
  void visitEAndAssign(EAndAssign *p);
  void visitEOrAssign(EOrAssign *p);
  void visitEXorAssign(EXorAssign *p);
  void visitELShAssign(ELShAssign *p);
  void visitERShAssign(ERShAssign *p);
  void visitListTLDeclaration(ListTLDeclaration* p);
  void visitListDeclaration(ListDeclaration* p);
  void visitListStatement(ListStatement* p);
  void visitListTypeSpecifier(ListTypeSpecifier* p);
  void visitListFunctionSpecifier(ListFunctionSpecifier* p);
  void visitListVariableSpecifier(ListVariableSpecifier* p);
  void visitListStructMemberDeclaration(ListStructMemberDeclaration* p);
  void visitListGenericParam(ListGenericParam* p);
  void visitListParameterDeclaration(ListParameterDeclaration* p);
  void visitListExpression(ListExpression* p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
 protected:
  void inline bufAppend(const char* s)
  {
    int len = strlen(s);
    while (cur_ + len > buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    for(int n = 0; n < len; n++)
    {
      buf_[cur_ + n] = s[n];
    }
    cur_ += len;
    buf_[cur_] = 0;
  }
  void inline bufAppend(const char c)
  {
    if (cur_ == buf_size)
    {
      buf_size *= 2; /* Double the buffer size */
      resizeBuffer();
    }
    buf_[cur_] = c;
    cur_++;
    buf_[cur_] = 0;
  }
  void inline bufReset(void)
  {
    cur_ = 0;
    buf_size = BUFFER_INITIAL;
    resizeBuffer();
    memset(buf_, 0, buf_size);
  }
  void inline resizeBuffer(void)
  {
    char* temp = (char*) malloc(buf_size);
    if (!temp)
    {
      fprintf(stderr, "Error: Out of memory while attempting to grow buffer!\n");
      exit(1);
    }
    if (buf_)
    {
      strcpy(temp, buf_);
      free(buf_);
    }
    buf_ = temp;
  }
  char *buf_;
  int cur_, buf_size;
};



#endif

