#ifndef LLVM_TRANSFORM_H
#define LLVM_TRANSFORM_H

#include "../CompilerVisitor.h"
#include "../TypeInfo.h"

#include <map>
#include <string>

struct Local
{
    DetailedTypeInfo* pType;
    std::string szCPIdent;
    std::string szLLVMIdent;
};

struct LocalPhiRef
{
    LocalPhiRef()
    : szLocalCPIdent( "" )
    , szSource( "" )
    , iNewTemp( -1 )
    {
    }
    
    std::string szLocalCPIdent;
    std::string szSource;
    int iLastTemp;
    int iNewTemp;
};

class LLVMTransformVisitor : public DescendingCompilerVisitor
{
    DetailedTypeInfo* pCurrentType;
    static int siTempCounter;
    static int siTabLevel;
 public:
  virtual ~LLVMTransformVisitor() { out = ""; pCurrentType = 0; bTrackPhi = false; }
  virtual void visitMain(Main *p);
  
  virtual void visitDNamespace( DNamespace *p );
  
  virtual void visitDDefaultFunction(DDefaultFunction *p);
  virtual void visitDFunction(DFunction *p);

  void visitFunction( std::string szLLVMName, Type* returnType, ListParameterDeclaration* parameters, ListStatement* statements );
    
  void visitFunctionBody( ListStatement* statements );
    
  virtual void visitDTypeDecl(DTypeDecl *p);
  virtual void visitDOperator(DOperator *p);
  virtual void visitDTypeConv( DTypeConv* p );  
  virtual void visitDIVariable(DIVariable *p);

  virtual void visitSIVariable(SIVariable* p);
  virtual void visitSReturn(SReturn *p);
  virtual void visitSExpression(SExpression *p);
  
  std::map< std::string, Local > handlePhiInstructions( std::map< std::string, Local > originalLocals, std::map< std::string, Local > locals1, std::map< std::string, Local > locals2, std::string szLabel1, std::string szLabel2 );
  std::string handleLoopLocalPhis( std::map< std::string, Local > originalLocals, std::string szLoopEntry, std::string szLoopRepeat );
  std::string handleLoopLocalPhisPost( std::map< std::string, Local > originalLocals, std::string szLoopEntry, std::string szLoopRepeat );
  
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
  
  virtual void visitEAssign(EAssign* p);
  
  virtual void visitESimpleCall(ESimpleCall *p);
  virtual void visitECall( ECall *p );
  
  void visitEOp( std::string szOperatorMangled, Expression* pLeft, Expression* pRight );
  
  void visitEIntrin( Expression* left, Expression* right, const char* szIntrinsic, const char* szType, bool boolean = false );
  void visitEIntrin( const char* const szLeft, Expression* pRight, const char* szIntrinsic, const char* szType, bool boolean = false );
  void fixBooleanIntrinsic( const char* szType ); 
  
  virtual void visitEIntrinSExt(EIntrinSExt *p);
  virtual void visitEIntrinZExt(EIntrinZExt *p);
  virtual void visitEIntrinCast(EIntrinZExt *p);
  
  void visitGenericIntIntrinsic( Expression* pLeft, Expression* pRight, std::string szIntrinsic, Type* pType, const bool bBoolean = false );
  
  virtual void visitEIntrinAddI(EIntrinAddI *p);
  virtual void visitEIntrinSubI(EIntrinSubI *p);
  virtual void visitEIntrinMulI(EIntrinMulI *p);
  virtual void visitEIntrinUdivI(EIntrinUdivI *p);
  virtual void visitEIntrinSdivI(EIntrinSdivI *p);
  virtual void visitEIntrinUremI(EIntrinUremI *p);
  virtual void visitEIntrinSremI(EIntrinSremI *p);
  virtual void visitEIntrinAndI(EIntrinAndI *p);
  virtual void visitEIntrinOrI(EIntrinOrI *p);
  virtual void visitEIntrinXorI(EIntrinXorI *p);
  virtual void visitEIntrinShlI(EIntrinShlI *p);
  virtual void visitEIntrinLshrI(EIntrinLshrI *p);
  virtual void visitEIntrinAshrI(EIntrinAshrI *p);
  virtual void visitEIntrinNotI(EIntrinNotI *p);
  virtual void visitEIntrinNegI(EIntrinNegI *p);
  virtual void visitEIntrinCEqI(EIntrinCEqI *p);
  virtual void visitEIntrinCNeI(EIntrinCNeI *p);
  virtual void visitEIntrinCLtI(EIntrinCLtI *p);
  virtual void visitEIntrinCGtI(EIntrinCGtI *p);
  virtual void visitEIntrinCLeI(EIntrinCLeI *p);
  virtual void visitEIntrinCGeI(EIntrinCGeI *p);
  
  //virtual void visitEUnaryOperator(EUnaryOperator *p);
  virtual void visitEE( EE* p );
  virtual void visitENE( ENE* p );
  virtual void visitEMul(EMul *p);
  virtual void visitEMulA(EMulA *p);
  virtual void visitEDiv(EDiv *p);
  virtual void visitEMod(EMod *p);
  virtual void visitEAdd(EAdd *p);
  virtual void visitEAddA(EAddA *p);
  virtual void visitESub(ESub *p);
  virtual void visitESubA(ESubA *p);
  virtual void visitELSh(ELSh *p);
  virtual void visitERSh(ERSh *p);
  virtual void visitELeft(ELeft *p);
  virtual void visitERight(ERight *p);
  //virtual void visitEBinaryOperator(EBinaryOperator *p);
  virtual void visitELT(ELT *p);
  virtual void visitEGT(EGT *p);
  virtual void visitELE(ELE *p);
  virtual void visitEGE(EGE *p);
  virtual void visitEBand(EBand *p);
  virtual void visitEBor(EBor *p);
  virtual void visitEBxor(EBxor *p);
  virtual void visitELand(ELand *p);
  virtual void visitELor(ELor *p);
  virtual void visitELxor(ELxor *p);
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
  std::map< std::string, LocalPhiRef > mxLocalPhiRefs;
  bool bTrackPhi;

};

#endif
