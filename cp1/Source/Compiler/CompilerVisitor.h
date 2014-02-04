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
  virtual void visitDImport( DImport *p ) {}
  virtual void visitDExpose( DExpose *p ) {}
  virtual void visitDExtern( DExtern *p ) {}
  virtual void visitDVariable( DVariable *p ) {}
  virtual void visitDIVariable( DIVariable *p ) {}
  virtual void visitPFunction( PFunction *p ) {}
  virtual void visitONOp(ONOp *p) {}
  virtual void visitONLnot(ONLnot *p) {}
  virtual void visitONPreInc(ONPreInc *p) {}
  virtual void visitONPreDec(ONPreDec *p) {}
  virtual void visitONBnot(ONBnot *p) {}
  virtual void visitONMul(ONMul *p) {}
  virtual void visitONDiv(ONDiv *p) {}
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
  virtual void visitFSInline(FSInline *p) {}
  virtual void visitFSAssociative( FSAssociative *p ) {}
  virtual void visitFSCommutative( FSCommutative *p ) {}
  virtual void visitFSAntiCommutative( FSAntiCommutative *p ) {}
  virtual void visitFSInverse( FSInverse *p ) {}
  virtual void visitFSSelfInverse( FSSelfInverse *p ) {}
  virtual void visitTSAlign( TSAlign* p ) {}
  virtual void visitVSConst(VSConst *p) {}
  virtual void visitTByte(TByte *p) {}
  virtual void visitTCustom(TCustom *p) {}
  virtual void visitTStruct(TStruct *p) {}
  virtual void visitTFixedArray(TFixedArray *p) {}
  virtual void visitSMDMemberDeclaration( SMDMemberDeclaration *p ) {}
  virtual void visitSMDAnonMemberDeclaration( SMDAnonMemberDeclaration *p ) {}
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
  virtual void visitERValue(ERValue *p) {}
  virtual void visitESimpleCall(ESimpleCall *p) {}
  virtual void visitECall(ECall *p) {}
  virtual void visitEPostInc(EPostInc *p) {}
  virtual void visitEPostDec(EPostDec *p) {}
  virtual void visitEIntrinAddB(EIntrinAddB *p) {}
  virtual void visitEIntrinSubB(EIntrinSubB *p) {}
  virtual void visitEIntrinMulB(EIntrinMulB *p) {}
  virtual void visitEIntrinUdivB(EIntrinUdivB *p) {}
  virtual void visitEIntrinSdivB(EIntrinSdivB *p) {}
  virtual void visitEIntrinUremB(EIntrinUremB *p) {}
  virtual void visitEIntrinSremB(EIntrinSremB *p) {}
  virtual void visitEIntrinAndB(EIntrinAndB *p) {}
  virtual void visitEIntrinOrB(EIntrinOrB *p) {}
  virtual void visitEIntrinXorB(EIntrinXorB *p) {}
  virtual void visitEIntrinShlB(EIntrinShlB *p) {}
  virtual void visitEIntrinLshrB(EIntrinLshrB *p) {}
  virtual void visitEIntrinAshrB(EIntrinAshrB *p) {}
  virtual void visitEIntrinNotB(EIntrinNotB *p) {}
  virtual void visitEIntrinNegB(EIntrinNegB *p) {}
  virtual void visitEIntrinAdd2B(EIntrinAdd2B *p) {}
  virtual void visitEIntrinSub2B(EIntrinSub2B *p) {}
  virtual void visitEIntrinMul2B(EIntrinMul2B *p) {}
  virtual void visitEIntrinUdiv2B(EIntrinUdiv2B *p) {}
  virtual void visitEIntrinSdiv2B(EIntrinSdiv2B *p) {}
  virtual void visitEIntrinUrem2B(EIntrinUrem2B *p) {}
  virtual void visitEIntrinSrem2B(EIntrinSrem2B *p) {}
  virtual void visitEIntrinAnd2B(EIntrinAnd2B *p) {}
  virtual void visitEIntrinOr2B(EIntrinOr2B *p) {}
  virtual void visitEIntrinXor2B(EIntrinXor2B *p) {}
  virtual void visitEIntrinShl2B(EIntrinShl2B *p) {}
  virtual void visitEIntrinLshr2B(EIntrinLshr2B *p) {}
  virtual void visitEIntrinAshr2B(EIntrinAshr2B *p) {}
  virtual void visitEIntrinNot2B(EIntrinNot2B *p) {}
  virtual void visitEIntrinNeg2B(EIntrinNeg2B *p) {}
  virtual void visitEIntrinAdd4B(EIntrinAdd4B *p) {}
  virtual void visitEIntrinSub4B(EIntrinSub4B *p) {}
  virtual void visitEIntrinMul4B(EIntrinMul4B *p) {}
  virtual void visitEIntrinUdiv4B(EIntrinUdiv4B *p) {}
  virtual void visitEIntrinSdiv4B(EIntrinSdiv4B *p) {}
  virtual void visitEIntrinUrem4B(EIntrinUrem4B *p) {}
  virtual void visitEIntrinSrem4B(EIntrinSrem4B *p) {}
  virtual void visitEIntrinAnd4B(EIntrinAnd4B *p) {}
  virtual void visitEIntrinOr4B(EIntrinOr4B *p) {}
  virtual void visitEIntrinXor4B(EIntrinXor4B *p) {}
  virtual void visitEIntrinShl4B(EIntrinShl4B *p) {}
  virtual void visitEIntrinLshr4B(EIntrinLshr4B *p) {}
  virtual void visitEIntrinAshr4B(EIntrinAshr4B *p) {}
  virtual void visitEIntrinNot4B(EIntrinNot4B *p) {}
  virtual void visitEIntrinNeg4B(EIntrinNeg4B *p) {}
  virtual void visitEIntrinAdd8B(EIntrinAdd8B *p) {}
  virtual void visitEIntrinSub8B(EIntrinSub8B *p) {}
  virtual void visitEIntrinMul8B(EIntrinMul8B *p) {}
  virtual void visitEIntrinUdiv8B(EIntrinUdiv8B *p) {}
  virtual void visitEIntrinSdiv8B(EIntrinSdiv8B *p) {}
  virtual void visitEIntrinUrem8B(EIntrinUrem8B *p) {}
  virtual void visitEIntrinSrem8B(EIntrinSrem8B *p) {}
  virtual void visitEIntrinAnd8B(EIntrinAnd8B *p) {}
  virtual void visitEIntrinOr8B(EIntrinOr8B *p) {}
  virtual void visitEIntrinXor8B(EIntrinXor8B *p) {}
  virtual void visitEIntrinShl8B(EIntrinShl8B *p) {}
  virtual void visitEIntrinLshr8B(EIntrinLshr8B *p) {}
  virtual void visitEIntrinAshr8B(EIntrinAshr8B *p) {}
  virtual void visitEIntrinNot8B(EIntrinNot8B *p) {}
  virtual void visitEIntrinNeg8B(EIntrinNeg8B *p) {}
  virtual void visitEIntrinAddB4V(EIntrinAddB4V *p) {}
  virtual void visitEIntrinSubB4V(EIntrinSubB4V *p) {}
  virtual void visitEIntrinMulB4V(EIntrinMulB4V *p) {}
  virtual void visitEIntrinUdivB4V(EIntrinUdivB4V *p) {}
  virtual void visitEIntrinSdivB4V(EIntrinSdivB4V *p) {}
  virtual void visitEIntrinUremB4V(EIntrinUremB4V *p) {}
  virtual void visitEIntrinSremB4V(EIntrinSremB4V *p) {}
  virtual void visitEIntrinShlB4V(EIntrinShlB4V *p) {}
  virtual void visitEIntrinLshrB4V(EIntrinLshrB4V *p) {}
  virtual void visitEIntrinAshrB4V(EIntrinAshrB4V *p) {}
  virtual void visitEIntrinNegB4V(EIntrinNegB4V *p) {}
  virtual void visitEIntrinAddB8V(EIntrinAddB8V *p) {}
  virtual void visitEIntrinSubB8V(EIntrinSubB8V *p) {}
  virtual void visitEIntrinMulB8V(EIntrinMulB8V *p) {}
  virtual void visitEIntrinUdivB8V(EIntrinUdivB8V *p) {}
  virtual void visitEIntrinSdivB8V(EIntrinSdivB8V *p) {}
  virtual void visitEIntrinUremB8V(EIntrinUremB8V *p) {}
  virtual void visitEIntrinSremB8V(EIntrinSremB8V *p) {}
  virtual void visitEIntrinShlB8V(EIntrinShlB8V *p) {}
  virtual void visitEIntrinLshrB8V(EIntrinLshrB8V *p) {}
  virtual void visitEIntrinAshrB8V(EIntrinAshrB8V *p) {}
  virtual void visitEIntrinNegB8V(EIntrinNegB8V *p) {}
  virtual void visitEIntrinAdd2F(EIntrinAdd2F *p) {}
  virtual void visitEIntrinSub2F(EIntrinSub2F *p) {}
  virtual void visitEIntrinMul2F(EIntrinMul2F *p) {}
  virtual void visitEIntrinUdiv2F(EIntrinUdiv2F *p) {}
  virtual void visitEIntrinUrem2F(EIntrinUrem2F *p) {}
  virtual void visitEIntrinAdd4F(EIntrinAdd4F *p) {}
  virtual void visitEIntrinSub4F(EIntrinSub4F *p) {}
  virtual void visitEIntrinMul4F(EIntrinMul4F *p) {}
  virtual void visitEIntrinUdiv4F(EIntrinUdiv4F *p) {}
  virtual void visitEIntrinUrem4F(EIntrinUrem4F *p) {}
  virtual void visitEIntrinAdd8F(EIntrinAdd8F *p) {}
  virtual void visitEIntrinSub8F(EIntrinSub8F *p) {}
  virtual void visitEIntrinMul8F(EIntrinMul8F *p) {}
  virtual void visitEIntrinUdiv8F(EIntrinUdiv8F *p) {}
  virtual void visitEIntrinUrem8F(EIntrinUrem8F *p) {}
  virtual void visitEIntrinAdd4F4V(EIntrinAdd4F4V *p) {}
  virtual void visitEIntrinSub4F4V(EIntrinSub4F4V *p) {}
  virtual void visitEIntrinMul4F4V(EIntrinMul4F4V *p) {}
  virtual void visitEIntrinUdiv4F4V(EIntrinUdiv4F4V *p) {}
  virtual void visitEIntrinUrem4F4V(EIntrinUrem4F4V *p) {}
  virtual void visitELnot(ELnot *p) {}
  virtual void visitEPreInc(EPreInc *p) {}
  virtual void visitEPreDec(EPreDec *p) {}
  virtual void visitENeg(ENeg *p) {}
  virtual void visitEBnot(EBnot *p) {}
  virtual void visitEPos(EPos *p) {}
  virtual void visitEUnaryOperator(EUnaryOperator *p) {}
  virtual void visitEMul(EMul *p) {}
  virtual void visitEDiv(EDiv *p) {}
  virtual void visitEMod(EMod *p) {}
  virtual void visitEAdd(EAdd *p) {}
  virtual void visitESub(ESub *p) {}
  virtual void visitELSh(ELSh *p) {}
  virtual void visitERSh(ERSh *p) {}
  virtual void visitEBinaryOperator(EBinaryOperator *p) {}
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
  virtual void visitETernaryOperator(ETernaryOperator *p) {}
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
  virtual void visitListTLDeclaration(ListTLDeclaration *p) {}
  virtual void visitListStructMemberDeclaration( ListStructMemberDeclaration *p ) {}
  virtual void visitListStatement(ListStatement *p) {}
  virtual void visitListFunctionSpecifier(ListFunctionSpecifier *p) {}
  virtual void visitListTypeSpecifier(ListTypeSpecifier *p) {}
  virtual void visitListVariableSpecifier(ListVariableSpecifier *p) {}
  virtual void visitListParameterDeclaration(ListParameterDeclaration *p) {}
  virtual void visitListExpression(ListExpression *p) {}
  virtual void visitCode(Code *p) {}
  virtual void visitTLDeclaration(TLDeclaration *p) {}
  virtual void visitDeclaration(Declaration *p) {}
  virtual void visitPrototype( Prototype* p ) {}
  virtual void visitOperatorName(OperatorName *p) {}
  //virtual void visitTypeBlockDeclaration(TypeBlockDeclaration *p) {}
  virtual void visitOperatorTrait(OperatorTrait *p) {}
  virtual void visitFunctionSpecifier(FunctionSpecifier *p) {}
  virtual void visitTypeSpecifier(TypeSpecifier *p) {}
  virtual void visitVariableSpecifier(VariableSpecifier *p) {}
  virtual void visitType(Type *p) {}
  virtual void visitStatement(Statement *p) {}
  virtual void visitParameterDeclaration(ParameterDeclaration *p) {}
  virtual void visitRValue(RValue *p) {}
  virtual void visitExpression(Expression *p) {}
  virtual void visitStructMemberDeclaration( StructMemberDeclaration* p ) {}

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
  virtual void visitECall(ECall *p);
  // virtual void visitEPostInc(EPostInc *p) {}
  // virtual void visitEPostDec(EPostDec *p) {}
  // virtual void visitEIntrinAddB(EIntrinAddB *p) {}
  // virtual void visitEIntrinSubB(EIntrinSubB *p) {}
  // virtual void visitEIntrinMulB(EIntrinMulB *p) {}
  // virtual void visitEIntrinUdivB(EIntrinUdivB *p) {}
  // virtual void visitEIntrinSdivB(EIntrinSdivB *p) {}
  // virtual void visitEIntrinUremB(EIntrinUremB *p) {}
  // virtual void visitEIntrinSremB(EIntrinSremB *p) {}
  // virtual void visitEIntrinAndB(EIntrinAndB *p) {}
  // virtual void visitEIntrinOrB(EIntrinOrB *p) {}
  // virtual void visitEIntrinXorB(EIntrinXorB *p) {}
  // virtual void visitEIntrinShlB(EIntrinShlB *p) {}
  // virtual void visitEIntrinLshrB(EIntrinLshrB *p) {}
  // virtual void visitEIntrinAshrB(EIntrinAshrB *p) {}
  // virtual void visitEIntrinNotB(EIntrinNotB *p) {}
  // virtual void visitEIntrinNegB(EIntrinNegB *p) {}
  // virtual void visitEIntrinAdd2B(EIntrinAdd2B *p) {}
  // virtual void visitEIntrinSub2B(EIntrinSub2B *p) {}
  // virtual void visitEIntrinMul2B(EIntrinMul2B *p) {}
  // virtual void visitEIntrinUdiv2B(EIntrinUdiv2B *p) {}
  // virtual void visitEIntrinSdiv2B(EIntrinSdiv2B *p) {}
  // virtual void visitEIntrinUrem2B(EIntrinUrem2B *p) {}
  // virtual void visitEIntrinSrem2B(EIntrinSrem2B *p) {}
  // virtual void visitEIntrinAnd2B(EIntrinAnd2B *p) {}
  // virtual void visitEIntrinOr2B(EIntrinOr2B *p) {}
  // virtual void visitEIntrinXor2B(EIntrinXor2B *p) {}
  // virtual void visitEIntrinShl2B(EIntrinShl2B *p) {}
  // virtual void visitEIntrinLshr2B(EIntrinLshr2B *p) {}
  // virtual void visitEIntrinAshr2B(EIntrinAshr2B *p) {}
  // virtual void visitEIntrinNot2B(EIntrinNot2B *p) {}
  // virtual void visitEIntrinNeg2B(EIntrinNeg2B *p) {}
  // virtual void visitEIntrinAdd4B(EIntrinAdd4B *p) {}
  // virtual void visitEIntrinSub4B(EIntrinSub4B *p) {}
  // virtual void visitEIntrinMul4B(EIntrinMul4B *p) {}
  // virtual void visitEIntrinUdiv4B(EIntrinUdiv4B *p) {}
  // virtual void visitEIntrinSdiv4B(EIntrinSdiv4B *p) {}
  // virtual void visitEIntrinUrem4B(EIntrinUrem4B *p) {}
  // virtual void visitEIntrinSrem4B(EIntrinSrem4B *p) {}
  // virtual void visitEIntrinAnd4B(EIntrinAnd4B *p) {}
  // virtual void visitEIntrinOr4B(EIntrinOr4B *p) {}
  // virtual void visitEIntrinXor4B(EIntrinXor4B *p) {}
  // virtual void visitEIntrinShl4B(EIntrinShl4B *p) {}
  // virtual void visitEIntrinLshr4B(EIntrinLshr4B *p) {}
  // virtual void visitEIntrinAshr4B(EIntrinAshr4B *p) {}
  // virtual void visitEIntrinNot4B(EIntrinNot4B *p) {}
  // virtual void visitEIntrinNeg4B(EIntrinNeg4B *p) {}
  // virtual void visitEIntrinAdd8B(EIntrinAdd8B *p) {}
  // virtual void visitEIntrinSub8B(EIntrinSub8B *p) {}
  // virtual void visitEIntrinMul8B(EIntrinMul8B *p) {}
  // virtual void visitEIntrinUdiv8B(EIntrinUdiv8B *p) {}
  // virtual void visitEIntrinSdiv8B(EIntrinSdiv8B *p) {}
  // virtual void visitEIntrinUrem8B(EIntrinUrem8B *p) {}
  // virtual void visitEIntrinSrem8B(EIntrinSrem8B *p) {}
  // virtual void visitEIntrinAnd8B(EIntrinAnd8B *p) {}
  // virtual void visitEIntrinOr8B(EIntrinOr8B *p) {}
  // virtual void visitEIntrinXor8B(EIntrinXor8B *p) {}
  // virtual void visitEIntrinShl8B(EIntrinShl8B *p) {}
  // virtual void visitEIntrinLshr8B(EIntrinLshr8B *p) {}
  // virtual void visitEIntrinAshr8B(EIntrinAshr8B *p) {}
  // virtual void visitEIntrinNot8B(EIntrinNot8B *p) {}
  // virtual void visitEIntrinNeg8B(EIntrinNeg8B *p) {}
  // virtual void visitEIntrinAddB4V(EIntrinAddB4V *p) {}
  // virtual void visitEIntrinSubB4V(EIntrinSubB4V *p) {}
  // virtual void visitEIntrinMulB4V(EIntrinMulB4V *p) {}
  // virtual void visitEIntrinUdivB4V(EIntrinUdivB4V *p) {}
  // virtual void visitEIntrinSdivB4V(EIntrinSdivB4V *p) {}
  // virtual void visitEIntrinUremB4V(EIntrinUremB4V *p) {}
  // virtual void visitEIntrinSremB4V(EIntrinSremB4V *p) {}
  // virtual void visitEIntrinShlB4V(EIntrinShlB4V *p) {}
  // virtual void visitEIntrinLshrB4V(EIntrinLshrB4V *p) {}
  // virtual void visitEIntrinAshrB4V(EIntrinAshrB4V *p) {}
  // virtual void visitEIntrinNegB4V(EIntrinNegB4V *p) {}
  // virtual void visitEIntrinAddB8V(EIntrinAddB8V *p) {}
  // virtual void visitEIntrinSubB8V(EIntrinSubB8V *p) {}
  // virtual void visitEIntrinMulB8V(EIntrinMulB8V *p) {}
  // virtual void visitEIntrinUdivB8V(EIntrinUdivB8V *p) {}
  // virtual void visitEIntrinSdivB8V(EIntrinSdivB8V *p) {}
  // virtual void visitEIntrinUremB8V(EIntrinUremB8V *p) {}
  // virtual void visitEIntrinSremB8V(EIntrinSremB8V *p) {}
  // virtual void visitEIntrinShlB8V(EIntrinShlB8V *p) {}
  // virtual void visitEIntrinLshrB8V(EIntrinLshrB8V *p) {}
  // virtual void visitEIntrinAshrB8V(EIntrinAshrB8V *p) {}
  // virtual void visitEIntrinNegB8V(EIntrinNegB8V *p) {}
  // virtual void visitEIntrinAdd2F(EIntrinAdd2F *p) {}
  // virtual void visitEIntrinSub2F(EIntrinSub2F *p) {}
  // virtual void visitEIntrinMul2F(EIntrinMul2F *p) {}
  // virtual void visitEIntrinUdiv2F(EIntrinUdiv2F *p) {}
  // virtual void visitEIntrinUrem2F(EIntrinUrem2F *p) {}
  // virtual void visitEIntrinAdd4F(EIntrinAdd4F *p) {}
  // virtual void visitEIntrinSub4F(EIntrinSub4F *p) {}
  // virtual void visitEIntrinMul4F(EIntrinMul4F *p) {}
  // virtual void visitEIntrinUdiv4F(EIntrinUdiv4F *p) {}
  // virtual void visitEIntrinUrem4F(EIntrinUrem4F *p) {}
  // virtual void visitEIntrinAdd8F(EIntrinAdd8F *p) {}
  // virtual void visitEIntrinSub8F(EIntrinSub8F *p) {}
  // virtual void visitEIntrinMul8F(EIntrinMul8F *p) {}
  // virtual void visitEIntrinUdiv8F(EIntrinUdiv8F *p) {}
  // virtual void visitEIntrinUrem8F(EIntrinUrem8F *p) {}
  // virtual void visitEIntrinAdd4F4V(EIntrinAdd4F4V *p) {}
  // virtual void visitEIntrinSub4F4V(EIntrinSub4F4V *p) {}
  // virtual void visitEIntrinMul4F4V(EIntrinMul4F4V *p) {}
  // virtual void visitEIntrinUdiv4F4V(EIntrinUdiv4F4V *p) {}
  // virtual void visitEIntrinUrem4F4V(EIntrinUrem4F4V *p) {}
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
  virtual void visitListTLDeclaration(ListTLDeclaration *p);

protected:

   DNamespace* m_pCurrentNamespace;

};

#endif
