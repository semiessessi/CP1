#ifndef LLVM_TRANSFORM_H
#define LLVM_TRANSFORM_H

#include "../CompilerVisitor.h"
#include "../TypeInfo.h"

#include <string>

class LLVMTransformVisitor : public DescendingCompilerVisitor
{
    DetailedTypeInfo* pCurrentType;
 public:
  virtual ~LLVMTransformVisitor() { out = ""; pCurrentType = 0; }
  virtual void visitMain(Main *p);
  
  virtual void visitDNamespace( DNamespace *p );
  
  virtual void visitDDefaultFunction(DDefaultFunction *p);
  virtual void visitDFunction(DFunction *p);

  void visitFunction( std::string szLLVMName, Type* returnType, ListParameterDeclaration* parameters, ListStatement* statements );
    
  void visitFunctionBody( ListStatement* statements );
    
  virtual void visitDTypeDecl(DTypeDecl *p);
  //virtual void visitTBDOperator(TBDOperator *p);
  virtual void visitDOperator(DOperator *p);
  virtual void visitDTypeConv( DTypeConv* p );
  //virtual void visitTBDTypedOperator(TBDTypedOperator *p);
  //virtual void visitTBDTypedShortOperator(TBDTypedShortOperator *p);
  //virtual void visitFSEntryPoint(FSEntryPoint *p);
  //virtual void visitFSPure(FSPure *p);
  //virtual void visitVSConst(VSConst *p);
  //virtual void visitTByte(TByte *p);
  //virtual void visitTCustom(TCustom *p);
  //virtual void visitTArray(TArray *p);
  //virtual void visitTFixedArray(TFixedArray *p);
  virtual void visitSIVariable(SIVariable* p);
  virtual void visitSReturn(SReturn *p);
  virtual void visitSExpression(SExpression *p);
  virtual void visitSIf(SIf *p);
  virtual void visitSIfElse(SIfElse *p);
  virtual void visitSLoop(SLoop *p);
  virtual void visitSWhile(SWhile *p);
  virtual void visitSUntil(SUntil *p);
  //virtual void visitEDouble(EDouble *p);
  virtual void visitEInteger(EInteger *p);
  //virtual void visitEIdentifier(EIdentifier *p);
  virtual void visitEString( EString* p );
  virtual void visitEChar( EChar* p );
  //virtual void visitEPi(EPi *p);
  virtual void visitERValue(ERValue *p);
  virtual void visitESimpleCall(ESimpleCall *p);
  virtual void visitECall( ECall *p );
  
  void visitEOp( std::string szOperatorMangled, Expression* pLeft, Expression* pRight );
  
  void visitEIntrin( Expression* left, Expression* right, const char* szIntrinsic, const char* szType, bool boolean = false );
  void visitEIntrin( const char* const szLeft, Expression* pRight, const char* szIntrinsic, const char* szType, bool boolean = false );
  void fixBooleanIntrinsic( const char* szType ); 
  
  virtual void visitEIntrinSExt(EIntrinSExt *p);
  virtual void visitEIntrinZExt(EIntrinZExt *p);
  
  virtual void visitEIntrinCEqB(EIntrinCEqB *p);
  virtual void visitEIntrinCNeB(EIntrinCNeB *p);
  virtual void visitEIntrinCLtB(EIntrinCLtB *p);
  virtual void visitEIntrinCGtB(EIntrinCGtB *p);
  virtual void visitEIntrinCLeB(EIntrinCLeB *p);
  virtual void visitEIntrinCGeB(EIntrinCGeB *p);
  virtual void visitEIntrinAddB(EIntrinAddB *p);
  virtual void visitEIntrinSubB(EIntrinSubB *p);
  virtual void visitEIntrinMulB(EIntrinMulB *p);
  virtual void visitEIntrinUdivB(EIntrinUdivB *p);
  virtual void visitEIntrinSdivB(EIntrinSdivB *p);
  virtual void visitEIntrinUremB(EIntrinUremB *p);
  virtual void visitEIntrinSremB(EIntrinSremB *p);
  virtual void visitEIntrinAndB(EIntrinAndB *p);
  virtual void visitEIntrinOrB(EIntrinOrB *p);
  virtual void visitEIntrinXorB(EIntrinXorB *p);
  virtual void visitEIntrinShlB(EIntrinShlB *p);
  virtual void visitEIntrinLshrB(EIntrinLshrB *p);
  virtual void visitEIntrinAshrB(EIntrinAshrB *p);
  virtual void visitEIntrinNotB(EIntrinNotB *p);
  virtual void visitEIntrinNegB(EIntrinNegB *p);
  virtual void visitEIntrinAdd2B(EIntrinAdd2B *p);
  virtual void visitEIntrinSub2B(EIntrinSub2B *p);
  virtual void visitEIntrinMul2B(EIntrinMul2B *p);
  virtual void visitEIntrinUdiv2B(EIntrinUdiv2B *p);
  virtual void visitEIntrinSdiv2B(EIntrinSdiv2B *p);
  virtual void visitEIntrinUrem2B(EIntrinUrem2B *p);
  virtual void visitEIntrinSrem2B(EIntrinSrem2B *p);
  virtual void visitEIntrinAnd2B(EIntrinAnd2B *p);
  virtual void visitEIntrinOr2B(EIntrinOr2B *p);
  virtual void visitEIntrinXor2B(EIntrinXor2B *p);
  virtual void visitEIntrinShl2B(EIntrinShl2B *p);
  virtual void visitEIntrinLshr2B(EIntrinLshr2B *p);
  virtual void visitEIntrinAshr2B(EIntrinAshr2B *p);
  virtual void visitEIntrinNot2B(EIntrinNot2B *p);
  virtual void visitEIntrinNeg2B(EIntrinNeg2B *p);
  virtual void visitEIntrinAdd4B(EIntrinAdd4B *p);
  virtual void visitEIntrinSub4B(EIntrinSub4B *p);
  virtual void visitEIntrinMul4B(EIntrinMul4B *p);
  virtual void visitEIntrinUdiv4B(EIntrinUdiv4B *p);
  virtual void visitEIntrinSdiv4B(EIntrinSdiv4B *p);
  virtual void visitEIntrinUrem4B(EIntrinUrem4B *p);
  virtual void visitEIntrinSrem4B(EIntrinSrem4B *p);
  virtual void visitEIntrinAnd4B(EIntrinAnd4B *p);
  virtual void visitEIntrinOr4B(EIntrinOr4B *p);
  virtual void visitEIntrinXor4B(EIntrinXor4B *p);
  virtual void visitEIntrinShl4B(EIntrinShl4B *p);
  virtual void visitEIntrinLshr4B(EIntrinLshr4B *p);
  virtual void visitEIntrinAshr4B(EIntrinAshr4B *p);
  virtual void visitEIntrinNot4B(EIntrinNot4B *p);
  virtual void visitEIntrinNeg4B(EIntrinNeg4B *p);
  virtual void visitEIntrinAdd8B(EIntrinAdd8B *p);
  virtual void visitEIntrinSub8B(EIntrinSub8B *p);
  virtual void visitEIntrinMul8B(EIntrinMul8B *p);
  virtual void visitEIntrinUdiv8B(EIntrinUdiv8B *p);
  virtual void visitEIntrinSdiv8B(EIntrinSdiv8B *p);
  virtual void visitEIntrinUrem8B(EIntrinUrem8B *p);
  virtual void visitEIntrinSrem8B(EIntrinSrem8B *p);
  virtual void visitEIntrinAnd8B(EIntrinAnd8B *p);
  virtual void visitEIntrinOr8B(EIntrinOr8B *p);
  virtual void visitEIntrinXor8B(EIntrinXor8B *p);
  virtual void visitEIntrinShl8B(EIntrinShl8B *p);
  virtual void visitEIntrinLshr8B(EIntrinLshr8B *p);
  virtual void visitEIntrinAshr8B(EIntrinAshr8B *p);
  virtual void visitEIntrinNot8B(EIntrinNot8B *p);
  virtual void visitEIntrinNeg8B(EIntrinNeg8B *p);
  //virtual void visitEUnaryOperator(EUnaryOperator *p);
  virtual void visitEE( EE* p );
  virtual void visitENE( ENE* p );
  virtual void visitEMul(EMul *p);
  virtual void visitEDiv(EDiv *p);
  virtual void visitEMod(EMod *p);
  virtual void visitEAdd(EAdd *p);
  virtual void visitESub(ESub *p);
  virtual void visitELSh(ELSh *p);
  virtual void visitERSh(ERSh *p);
  //virtual void visitEBinaryOperator(EBinaryOperator *p);
  virtual void visitELT(ELT *p);
  virtual void visitEGT(EGT *p);
  virtual void visitELE(ELE *p);
  virtual void visitEGE(EGE *p);
  virtual void visitEBand(EBand *p);
  virtual void visitEBor(EBor *p);
  virtual void visitEBxor(EBxor *p);
  //virtual void visitELand(ELand *p) {}
  //virtual void visitELor(ELor *p) {}
  //virtual void visitELxor(ELxor *p) {}
  //virtual void visitEConditional(EConditional *p) {}
  //virtual void visitETernaryOperator(ETernaryOperator *p);
  //virtual void visitPDAutoParameter(PDAutoParameter *p);
  //virtual void visitPDTypedParameter(PDTypedParameter *p);
  //virtual void visitListDeclaration(ListDeclaration *p);
  //virtual void visitListTLDeclaration(ListTLDeclaration *p);
  //virtual void visitListTypeBlockDeclaration(ListTypeBlockDeclaration *p);
  //virtual void visitListStatement(ListStatement *p);
  //virtual void visitListFunctionSpecifier(ListFunctionSpecifier *p);
  //virtual void visitListVariableSpecifier(ListVariableSpecifier *p);
  //virtual void visitListParameterDeclaration(ListParameterDeclaration *p);
  //virtual void visitListExpression(ListExpression *p);
  //virtual void visitCode(Code *p);
  //virtual void visitDeclaration(Declaration *p);
  //virtual void visitTypeBlockDeclaration(TypeBlockDeclaration *p);
  //virtual void visitFunctionSpecifier(FunctionSpecifier *p);
  //virtual void visitVariableSpecifier(VariableSpecifier *p);
  //virtual void visitType(Type *p);
  //virtual void visitStatement(Statement *p);
  //virtual void visitParameterDeclaration(ParameterDeclaration *p);
  //virtual void visitExpression(Expression *p);

  //virtual void visitInteger(Integer i);
  //virtual void visitDouble(Double d);
  //virtual void visitChar(Char c);
  //virtual void visitString(String s);

  std::string out;

};

#endif
