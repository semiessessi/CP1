#ifndef COMPILER_VISITOR_H
#define COMPILER_VISITOR_H

#include "../../../bnfcout/absyn.h"

class CompilerVisitor : public Visitor
{
 public:
  virtual ~CompilerVisitor() {}
  virtual void visitMain(Main *p) {}
  virtual void visitDNamespace( DNamespace *p ) {}
  virtual void visitDFunction(DFunction *p) {}
  virtual void visitDDefaultFunction( DDefaultFunction *p ) {}
  virtual void visitDTypeDecl(DTypeDecl *p) {}
  virtual void visitDTypeConv( DTypeConv *p ) {}
  virtual void visitDImport( DImport *p ) {}
  virtual void visitDExpose( DExpose *p ) {}
  virtual void visitDExtern( DExtern *p ) {}
  virtual void visitDVariable( DVariable *p ) {}
  virtual void visitDIVariable( DIVariable *p ) {}
  virtual void visitPFunction( PFunction *p ) {}
  //virtual void visitONOp(ONOp *p) {}
  virtual void visitONLnot(ONLnot *p) {}
  virtual void visitONPreInc(ONPreInc *p) {}
  virtual void visitONPreDec(ONPreDec *p) {}
  virtual void visitONBnot(ONBnot *p) {}
  virtual void visitONMul(ONMul *p) {}
  virtual void visitONExp(ONExp *p) {}
  virtual void visitONDiv(ONDiv *p) {}
  virtual void visitONRDiv(ONRDiv *p) {}
  virtual void visitONMod(ONMod *p) {}
  virtual void visitONAdd(ONAdd *p) {}
  virtual void visitONSub(ONSub *p) {}
  virtual void visitONLSh(ONLSh *p) {}
  virtual void visitONRSh(ONRSh *p) {}
  virtual void visitONLT(ONLT *p) {}
  virtual void visitONGT(ONGT *p) {}
  virtual void visitONLE(ONLE *p) {}
  virtual void visitONGE(ONGE *p) {}
  virtual void visitONE(ONE *p) {}
  virtual void visitONNE(ONNE *p) {}
  virtual void visitONRight(ONRight *p) {}
  virtual void visitONLeft(ONLeft *p) {}
  virtual void visitONBand(ONBand *p) {}
  virtual void visitONBor(ONBor *p) {}
  virtual void visitONBxor(ONBxor *p) {}
  virtual void visitONLand(ONLand *p) {}
  virtual void visitONLor(ONLor *p) {}
  virtual void visitONLxor(ONLxor *p) {}
  virtual void visitDOperator(DOperator *p) {}
  virtual void visitDOperatorInfo(DOperatorInfo *p) {}
  virtual void visitOTIdentity(OTIdentity *p) {}
  virtual void visitFSEntryPoint(FSEntryPoint *p) {}
  virtual void visitFSPure(FSPure *p) {}
  virtual void visitFSConst(FSConst *p) {}
  virtual void visitFSInline(FSInline *p) {}
  virtual void visitFSAssociative( FSAssociative *p ) {}
  virtual void visitFSCommutative( FSCommutative *p ) {}
  virtual void visitFSAntiCommutative( FSAntiCommutative *p ) {}
  virtual void visitFSInverse( FSInverse *p ) {}
  virtual void visitFSSelfInverse( FSSelfInverse *p ) {}
  virtual void visitTSAlign( TSAlign* p ) {}
  virtual void visitTSGeneric( TSGeneric* p ) {}
  virtual void visitTSInteger( TSInteger* p ) {}
  virtual void visitTSReal( TSReal* p ) {}
  virtual void visitTSGParam( TSGParam* p ) {}
  virtual void visitCSUp( CSUp *p ) {}
  virtual void visitCSDown( CSDown *p ) {}
  virtual void visitCSImplicit( CSImplicit *p ) {}
  virtual void visitVSConst(VSConst *p) {}
  virtual void visitTAddress(TAddress *p) {}
  virtual void visitTByte(TByte *p) {}
  virtual void visitTCustom(TCustom *p) {}
  virtual void visitTStruct(TStruct *p) {}
  virtual void visitTFixedArray(TFixedArray *p) {}
  virtual void visitTGenericArray( TGenericArray* p ) {}
  virtual void visitTList(TList *p) {}
  virtual void visitTInfiniteList(TInfiniteList *p) {}
  virtual void visitTType(TType *p) {}
  virtual void visitTFunction(TFunction *p) {}
  virtual void visitSMDMemberDeclaration( SMDMemberDeclaration *p ) {}
  //virtual void visitSMDAnonMemberDeclaration( SMDAnonMemberDeclaration *p ) {}
  virtual void visitSReturn(SReturn *p) {}
  virtual void visitSExpression(SExpression *p) {}
  virtual void visitSScope(SScope *p) {}
  virtual void visitSIf(SIf *p) {}
  virtual void visitSIfElse(SIfElse *p) {}
  virtual void visitSLoop(SLoop *p) {}
  virtual void visitSWhile(SWhile *p) {}
  virtual void visitSUntil(SUntil *p) {}
  virtual void visitSFor(SFor *p) {}
  virtual void visitSForEach(SForEach *p) {}
  virtual void visitSForAll(SForAll *p) {}
  virtual void visitSBreak(SBreak *p) {}
  virtual void visitSContinue(SContinue *p) {}
  virtual void visitSBreakpoint(SBreakpoint *p) {}
  virtual void visitSVariable( SVariable *p ) {}
  virtual void visitSIVariable( SIVariable *p ) {}
  //virtual void visitSDecl(SDecl *p) {}
  virtual void visitRVIdent(RVIdent *p) {}
  virtual void visitRVQualified(RVQualified *p) {}
  virtual void visitEString(EString *p) {}
  virtual void visitEChar(EChar *p) {}
  virtual void visitEDouble(EDouble *p) {}
  virtual void visitEInteger(EInteger *p) {}
  virtual void visitEPi(EPi *p) {}
  virtual void visitEArray(EArray *p) {}
  virtual void visitEList(EList *p) {}
  virtual void visitEAComp(EAComp *p) {}
  virtual void visitELComp(ELComp *p) {}
  virtual void visitEIndex(EIndex *p) {}
  virtual void visitERValue(ERValue *p) {}
  virtual void visitEAddress(EAddress *p) {}
  virtual void visitESimpleCall(ESimpleCall *p) {}
  virtual void visitECall(ECall *p) {}
  virtual void visitEPostInc(EPostInc *p) {}
  virtual void visitEPostDec(EPostDec *p) {}
  virtual void visitEIntrinSExt(EIntrinSExt *p) {}
  virtual void visitEIntrinZExt(EIntrinZExt *p) {}
  virtual void visitEIntrinCast(EIntrinCast *p) {}
  virtual void visitEIntrinConvert(EIntrinConvert *p) {}
  virtual void visitEIntrinAddI(EIntrinAddI *p) {}
  virtual void visitEIntrinSubI(EIntrinSubI *p) {}
  virtual void visitEIntrinMulI(EIntrinMulI *p) {}
  virtual void visitEIntrinUdivI(EIntrinUdivI *p) {}
  virtual void visitEIntrinSdivI(EIntrinSdivI *p) {}
  virtual void visitEIntrinUremI(EIntrinUremI *p) {}
  virtual void visitEIntrinSremI(EIntrinSremI *p) {}
  virtual void visitEIntrinAndI(EIntrinAndI *p) {}
  virtual void visitEIntrinOrI(EIntrinOrI *p) {}
  virtual void visitEIntrinXorI(EIntrinXorI *p) {}
  virtual void visitEIntrinShlI(EIntrinShlI *p) {}
  virtual void visitEIntrinLshrI(EIntrinLshrI *p) {}
  virtual void visitEIntrinAshrI(EIntrinAshrI *p) {}
  virtual void visitEIntrinNotI(EIntrinNotI *p) {}
  virtual void visitEIntrinNegI(EIntrinNegI *p) {}
  virtual void visitEIntrinCEqI(EIntrinCEqI *p) {}
  virtual void visitEIntrinCNeI(EIntrinCNeI *p) {}
  virtual void visitEIntrinCLtI(EIntrinCLtI *p) {}
  virtual void visitEIntrinCGtI(EIntrinCGtI *p) {}
  virtual void visitEIntrinCLeI(EIntrinCLeI *p) {}
  virtual void visitEIntrinCGeI(EIntrinCGeI *p) {}
  virtual void visitELnot(ELnot *p) {}
  virtual void visitEPreInc(EPreInc *p) {}
  virtual void visitEPreDec(EPreDec *p) {}
  virtual void visitENeg(ENeg *p) {}
  virtual void visitEBnot(EBnot *p) {}
  virtual void visitEPos(EPos *p) {}
  //virtual void visitEUnaryOperator(EUnaryOperator *p) {}
  virtual void visitEMul(EMul *p) {}
  virtual void visitEMulA(EMulA *p) {}
  virtual void visitEDiv(EDiv *p) {}
  virtual void visitEMod(EMod *p) {}
  virtual void visitEAdd(EAdd *p) {}
  virtual void visitESub(ESub *p) {}
  virtual void visitEAddA(EAddA *p) {}
  virtual void visitESubA(ESubA *p) {}
  virtual void visitELSh(ELSh *p) {}
  virtual void visitERSh(ERSh *p) {}
  virtual void visitELeft(ELeft *p) {}
  virtual void visitERight(ERight *p) {}
  //virtual void visitEBinaryOperator(EBinaryOperator *p) {}
  virtual void visitELT(ELT *p) {}
  virtual void visitEGT(EGT *p) {}
  virtual void visitELE(ELE *p) {}
  virtual void visitEGE(EGE *p) {}
  virtual void visitEE(EE *p) {}
  virtual void visitENE(ENE *p) {}
  virtual void visitEBand(EBand *p) {}
  virtual void visitEBor(EBor *p) {}
  virtual void visitEBxor(EBxor *p) {}
  virtual void visitELand(ELand *p) {}
  virtual void visitELor(ELor *p) {}
  virtual void visitELxor(ELxor *p) {}
  virtual void visitEConditional(EConditional *p) {}
  //virtual void visitETernaryOperator(ETernaryOperator *p) {}
  virtual void visitEAssign(EAssign *p) {}
  virtual void visitEAddAssign(EAddAssign *p) {}
  virtual void visitESubAssign(ESubAssign *p) {}
  virtual void visitEMulAssign(EMulAssign *p) {}
  virtual void visitEDivAssign(EDivAssign *p) {}
  virtual void visitEModAssign(EModAssign *p) {}
  virtual void visitEAndAssign(EAndAssign *p) {}
  virtual void visitEOrAssign(EOrAssign *p) {}
  virtual void visitEXorAssign(EXorAssign *p) {}
  virtual void visitELShAssign(ELShAssign *p) {}
  virtual void visitERShAssign(ERShAssign *p) {}
  virtual void visitPDAutoParameter(PDAutoParameter *p) {}
  virtual void visitPDTypedParameter(PDTypedParameter *p) {}
  virtual void visitListDeclaration(ListDeclaration *p) {}
  virtual void visitListType(ListType *p) {}
  virtual void visitListTLDeclaration(ListTLDeclaration *p) {}
  virtual void visitListStructMemberDeclaration( ListStructMemberDeclaration *p ) {}
  virtual void visitListStatement(ListStatement *p) {}
  virtual void visitListFunctionSpecifier(ListFunctionSpecifier *p) {}
  virtual void visitListTypeSpecifier(ListTypeSpecifier *p) {}
  virtual void visitListVariableSpecifier(ListVariableSpecifier *p) {}
  virtual void visitListConversionSpecifier(ListConversionSpecifier *p) {}
  virtual void visitListParameterDeclaration(ListParameterDeclaration *p) {}
  virtual void visitListExpression(ListExpression *p) {}
  virtual void visitListGenericParam(ListGenericParam *p) {}
  virtual void visitCode(Code *p) {}
  virtual void visitTLDeclaration(TLDeclaration *p) {}
  virtual void visitDeclaration(Declaration *p) {}
  virtual void visitPrototype( Prototype* p ) {}
  virtual void visitOperatorName(OperatorName *p) {}
  virtual void visitGenericParam(GenericParam *p) {}
  //virtual void visitTypeBlockDeclaration(TypeBlockDeclaration *p) {}
  virtual void visitOperatorTrait(OperatorTrait *p) {}
  virtual void visitFunctionSpecifier(FunctionSpecifier *p) {}
  virtual void visitTypeSpecifier(TypeSpecifier *p) {}
  virtual void visitVariableSpecifier(VariableSpecifier *p) {}
  virtual void visitConversionSpecifier(ConversionSpecifier *p) {}
  virtual void visitType(Type *p) {}
  virtual void visitStatement(Statement *p) {}
  virtual void visitParameterDeclaration(ParameterDeclaration *p) {}
  virtual void visitRValue(RValue *p) {}
  virtual void visitExpression(Expression *p) {}
  virtual void visitStructMemberDeclaration( StructMemberDeclaration* p ) {}

  virtual void visitCChar(CChar cchar) {}
  virtual void visitCString(CString cstring) {}
  virtual void visitOperator(Operator op) {}
  virtual void visitIdent(Ident id) {}
  virtual void visitInteger(Integer i) {}
  virtual void visitDouble(Double d) {}
  virtual void visitChar(Char c) {}
  virtual void visitString(String s) {}
};

class DescendingCompilerVisitor : public CompilerVisitor
{
 public:

  virtual void visitMain(Main *p);
  
  virtual void visitDNamespace(DNamespace *p);
  virtual void visitDDefaultFunction(DDefaultFunction *p);
  virtual void visitDFunction(DFunction *p);
  virtual void visitDOperator(DOperator *p);
  virtual void visitDTypeConv( DTypeConv *p );
  
  //virtual void visitPDefaultFunction( PDefaultFunction *p );
  virtual void visitPFunction( PFunction *p );

  virtual void visitPDAutoParameter(PDAutoParameter *p);
  virtual void visitPDTypedParameter(PDTypedParameter *p);
  
  virtual void visitSReturn(SReturn *p);
  virtual void visitSExpression(SExpression *p);
  virtual void visitSScope(SScope *p);
  virtual void visitSIf(SIf *p);
  virtual void visitSIfElse(SIfElse *p);
  virtual void visitSLoop(SLoop *p);
  virtual void visitSWhile(SWhile *p);
  virtual void visitSUntil(SUntil *p);
  virtual void visitSFor(SFor *p) {}
  virtual void visitSForEach(SForEach *p) {}
  virtual void visitSForAll(SForAll *p) {}
  //virtual void visitSDecl(SDecl* p);
  virtual void visitSIVariable( SIVariable *p );
  virtual void visitECall(ECall *p);
  // virtual void visitEPostInc(EPostInc *p) {}
  // virtual void visitEPostDec(EPostDec *p) {}
  // virtual void visitELnot(ELnot *p) {}
  // virtual void visitEPreInc(EPreInc *p) {}
  // virtual void visitEPreDec(EPreDec *p) {}
  // virtual void visitENeg(ENeg *p) {}
  // virtual void visitEBnot(EBnot *p) {}
  // virtual void visitEPos(EPos *p) {}
  // virtual void visitEUnaryOperator(EUnaryOperator *p) {}
  // virtual void visitEMul(EMul *p) {}
  // virtual void visitEDiv(EDiv *p) {}
  // virtual void visitEMod(EMod *p) {}
  // virtual void visitEAdd(EAdd *p) {}
  // virtual void visitESub(ESub *p) {}
  // virtual void visitELSh(ELSh *p) {}
  // virtual void visitERSh(ERSh *p) {}
  // virtual void visitEBinaryOperator(EBinaryOperator *p) {}
  // virtual void visitELT(ELT *p) {}
  // virtual void visitEGT(EGT *p) {}
  // virtual void visitELE(ELE *p) {}
  // virtual void visitEGE(EGE *p) {}
  // virtual void visitEE(EE *p) {}
  // virtual void visitENE(ENE *p) {}
  // virtual void visitEBand(EBand *p) {}
  // virtual void visitEBor(EBor *p) {}
  // virtual void visitEBxor(EBxor *p) {}
  // virtual void visitELand(ELand *p) {}
  // virtual void visitELor(ELor *p) {}
  // virtual void visitELxor(ELxor *p) {}
  // virtual void visitEConditional(EConditional *p) {}
  // virtual void visitETernaryOperator(ETernaryOperator *p) {}
  // virtual void visitEAssign(EAssign *p) {}
  // virtual void visitEAddAssign(EAddAssign *p) {}
  // virtual void visitESubAssign(ESubAssign *p) {}
  // virtual void visitEMulAssign(EMulAssign *p) {}
  // virtual void visitEDivAssign(EDivAssign *p) {}
  // virtual void visitEModAssign(EModAssign *p) {}
  // virtual void visitEAndAssign(EAndAssign *p) {}
  // virtual void visitEOrAssign(EOrAssign *p) {}
  // virtual void visitEXorAssign(EXorAssign *p) {}
  // virtual void visitELShAssign(ELShAssign *p) {}
  // virtual void visitERShAssign(ERShAssign *p) {}
  
  virtual void visitListStatement( ListStatement *p );
  virtual void visitListExpression( ListExpression *p );
  virtual void visitListParameterDeclaration( ListParameterDeclaration* p );
  virtual void visitListDeclaration(ListDeclaration *p);
  virtual void visitListFunctionSpecifier( ListFunctionSpecifier* p );
  virtual void visitListVariableSpecifier( ListVariableSpecifier* p );
  virtual void visitListTLDeclaration(ListTLDeclaration *p);

protected:

   DNamespace* m_pCurrentNamespace;

};

#endif
