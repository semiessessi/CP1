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
  void visitDTypeConv(DTypeConv *p);
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
  void visitFSConst(FSConst *p);
  void visitFSInline(FSInline *p);
  void visitFSAssociative(FSAssociative *p);
  void visitFSCommutative(FSCommutative *p);
  void visitFSAntiCommutative(FSAntiCommutative *p);
  void visitFSInverse(FSInverse *p);
  void visitFSSelfInverse(FSSelfInverse *p);
  void visitConversionSpecifier(ConversionSpecifier *p); /* abstract class */
  void visitCSUp(CSUp *p);
  void visitCSDown(CSDown *p);
  void visitCSImplicit(CSImplicit *p);
  void visitVariableSpecifier(VariableSpecifier *p); /* abstract class */
  void visitVSConst(VSConst *p);
  void visitTypeSpecifier(TypeSpecifier *p); /* abstract class */
  void visitTSAlign(TSAlign *p);
  void visitTSGeneric(TSGeneric *p);
  void visitTSInteger(TSInteger *p);
  void visitTSReal(TSReal *p);
  void visitGenericParam(GenericParam *p); /* abstract class */
  void visitTSGParam(TSGParam *p);
  void visitType(Type *p); /* abstract class */
  void visitTAddress(TAddress *p);
  void visitTByte(TByte *p);
  void visitTCustom(TCustom *p);
  void visitTFixedArray(TFixedArray *p);
  void visitTGenericArray(TGenericArray *p);
  void visitTList(TList *p);
  void visitTInfiniteList(TInfiniteList *p);
  void visitTStruct(TStruct *p);
  void visitTFunction(TFunction *p);
  void visitTType(TType *p);
  void visitStructMemberDeclaration(StructMemberDeclaration *p); /* abstract class */
  void visitSMDMemberDeclaration(SMDMemberDeclaration *p);
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
  void visitEAddress(EAddress *p);
  void visitELeft(ELeft *p);
  void visitERight(ERight *p);
  void visitEIntrinSExt(EIntrinSExt *p);
  void visitEIntrinZExt(EIntrinZExt *p);
  void visitEIntrinCast(EIntrinCast *p);
  void visitEIntrinConvert(EIntrinConvert *p);
  void visitEIntrinAddI(EIntrinAddI *p);
  void visitEIntrinSubI(EIntrinSubI *p);
  void visitEIntrinMulI(EIntrinMulI *p);
  void visitEIntrinUdivI(EIntrinUdivI *p);
  void visitEIntrinSdivI(EIntrinSdivI *p);
  void visitEIntrinUremI(EIntrinUremI *p);
  void visitEIntrinSremI(EIntrinSremI *p);
  void visitEIntrinAndI(EIntrinAndI *p);
  void visitEIntrinOrI(EIntrinOrI *p);
  void visitEIntrinXorI(EIntrinXorI *p);
  void visitEIntrinShlI(EIntrinShlI *p);
  void visitEIntrinLshrI(EIntrinLshrI *p);
  void visitEIntrinAshrI(EIntrinAshrI *p);
  void visitEIntrinNotI(EIntrinNotI *p);
  void visitEIntrinNegI(EIntrinNegI *p);
  void visitEIntrinCEqI(EIntrinCEqI *p);
  void visitEIntrinCNeI(EIntrinCNeI *p);
  void visitEIntrinCLtI(EIntrinCLtI *p);
  void visitEIntrinCGtI(EIntrinCGtI *p);
  void visitEIntrinCLeI(EIntrinCLeI *p);
  void visitEIntrinCGeI(EIntrinCGeI *p);
  void visitELnot(ELnot *p);
  void visitEPreInc(EPreInc *p);
  void visitEPreDec(EPreDec *p);
  void visitENeg(ENeg *p);
  void visitEBnot(EBnot *p);
  void visitEPos(EPos *p);
  void visitEMul(EMul *p);
  void visitEMulA(EMulA *p);
  void visitEDiv(EDiv *p);
  void visitEMod(EMod *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitEAddA(EAddA *p);
  void visitESubA(ESubA *p);
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
  void visitListConversionSpecifier(ListConversionSpecifier* p);
  void visitListFunctionSpecifier(ListFunctionSpecifier* p);
  void visitListVariableSpecifier(ListVariableSpecifier* p);
  void visitListStructMemberDeclaration(ListStructMemberDeclaration* p);
  void visitListGenericParam(ListGenericParam* p);
  void visitListParameterDeclaration(ListParameterDeclaration* p);
  void visitListExpression(ListExpression* p);
  void visitListType(ListType* p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
  void visitCString(String s);
  void visitCChar(String s);
  void visitOperator(String s);
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
  void visitDTypeConv(DTypeConv *p);
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
  void visitFSConst(FSConst *p);
  void visitFSInline(FSInline *p);
  void visitFSAssociative(FSAssociative *p);
  void visitFSCommutative(FSCommutative *p);
  void visitFSAntiCommutative(FSAntiCommutative *p);
  void visitFSInverse(FSInverse *p);
  void visitFSSelfInverse(FSSelfInverse *p);
  void visitConversionSpecifier(ConversionSpecifier *p); /* abstract class */
  void visitCSUp(CSUp *p);
  void visitCSDown(CSDown *p);
  void visitCSImplicit(CSImplicit *p);
  void visitVariableSpecifier(VariableSpecifier *p); /* abstract class */
  void visitVSConst(VSConst *p);
  void visitTypeSpecifier(TypeSpecifier *p); /* abstract class */
  void visitTSAlign(TSAlign *p);
  void visitTSGeneric(TSGeneric *p);
  void visitTSInteger(TSInteger *p);
  void visitTSReal(TSReal *p);
  void visitGenericParam(GenericParam *p); /* abstract class */
  void visitTSGParam(TSGParam *p);
  void visitType(Type *p); /* abstract class */
  void visitTAddress(TAddress *p);
  void visitTByte(TByte *p);
  void visitTCustom(TCustom *p);
  void visitTFixedArray(TFixedArray *p);
  void visitTGenericArray(TGenericArray *p);
  void visitTList(TList *p);
  void visitTInfiniteList(TInfiniteList *p);
  void visitTStruct(TStruct *p);
  void visitTFunction(TFunction *p);
  void visitTType(TType *p);
  void visitStructMemberDeclaration(StructMemberDeclaration *p); /* abstract class */
  void visitSMDMemberDeclaration(SMDMemberDeclaration *p);
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
  void visitEAddress(EAddress *p);
  void visitELeft(ELeft *p);
  void visitERight(ERight *p);
  void visitEIntrinSExt(EIntrinSExt *p);
  void visitEIntrinZExt(EIntrinZExt *p);
  void visitEIntrinCast(EIntrinCast *p);
  void visitEIntrinConvert(EIntrinConvert *p);
  void visitEIntrinAddI(EIntrinAddI *p);
  void visitEIntrinSubI(EIntrinSubI *p);
  void visitEIntrinMulI(EIntrinMulI *p);
  void visitEIntrinUdivI(EIntrinUdivI *p);
  void visitEIntrinSdivI(EIntrinSdivI *p);
  void visitEIntrinUremI(EIntrinUremI *p);
  void visitEIntrinSremI(EIntrinSremI *p);
  void visitEIntrinAndI(EIntrinAndI *p);
  void visitEIntrinOrI(EIntrinOrI *p);
  void visitEIntrinXorI(EIntrinXorI *p);
  void visitEIntrinShlI(EIntrinShlI *p);
  void visitEIntrinLshrI(EIntrinLshrI *p);
  void visitEIntrinAshrI(EIntrinAshrI *p);
  void visitEIntrinNotI(EIntrinNotI *p);
  void visitEIntrinNegI(EIntrinNegI *p);
  void visitEIntrinCEqI(EIntrinCEqI *p);
  void visitEIntrinCNeI(EIntrinCNeI *p);
  void visitEIntrinCLtI(EIntrinCLtI *p);
  void visitEIntrinCGtI(EIntrinCGtI *p);
  void visitEIntrinCLeI(EIntrinCLeI *p);
  void visitEIntrinCGeI(EIntrinCGeI *p);
  void visitELnot(ELnot *p);
  void visitEPreInc(EPreInc *p);
  void visitEPreDec(EPreDec *p);
  void visitENeg(ENeg *p);
  void visitEBnot(EBnot *p);
  void visitEPos(EPos *p);
  void visitEMul(EMul *p);
  void visitEMulA(EMulA *p);
  void visitEDiv(EDiv *p);
  void visitEMod(EMod *p);
  void visitEAdd(EAdd *p);
  void visitESub(ESub *p);
  void visitEAddA(EAddA *p);
  void visitESubA(ESubA *p);
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
  void visitListConversionSpecifier(ListConversionSpecifier* p);
  void visitListFunctionSpecifier(ListFunctionSpecifier* p);
  void visitListVariableSpecifier(ListVariableSpecifier* p);
  void visitListStructMemberDeclaration(ListStructMemberDeclaration* p);
  void visitListGenericParam(ListGenericParam* p);
  void visitListParameterDeclaration(ListParameterDeclaration* p);
  void visitListExpression(ListExpression* p);
  void visitListType(ListType* p);

  void visitInteger(Integer i);
  void visitDouble(Double d);
  void visitChar(Char c);
  void visitString(String s);
  void visitIdent(String s);
  void visitCString(String s);
  void visitCChar(String s);
  void visitOperator(String s);
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

