#ifndef SIMPLE_EVAL_H
#define SIMPLE_EVAL_H

class SimpleEval
: public DescendingCompilerVisitor
{

public:
    
    SimpleEval()
    : bSimple( true )
    , bRValue( false )
    , bInt( false )
    , szLLVMValue( "i8 0" )
    {
    }
    
    std::string szLLVMValue;
    int iValue;
    bool bSimple;
    bool bRValue;
    bool bInt;
    

    virtual void visitEAssign(EAssign* p) { bSimple = false; }
    virtual void visitESimpleCall(ESimpleCall *p) { bSimple = false; }
    virtual void visitECall( ECall *p ) { bSimple = false; }
    
    virtual void visitEIntrinAddI(EIntrinAddI *p) { bSimple = false; }
    virtual void visitEIntrinSubI(EIntrinSubI *p) { bSimple = false; }
    virtual void visitEIntrinMulI(EIntrinMulI *p) { bSimple = false; }
    virtual void visitEIntrinUdivI(EIntrinUdivI *p) { bSimple = false; }
    virtual void visitEIntrinSdivI(EIntrinSdivI *p) { bSimple = false; }
    virtual void visitEIntrinUremI(EIntrinUremI *p) { bSimple = false; }
    virtual void visitEIntrinSremI(EIntrinSremI *p) { bSimple = false; }
    virtual void visitEIntrinAndI(EIntrinAndI *p) { bSimple = false; }
    virtual void visitEIntrinOrI(EIntrinOrI *p) { bSimple = false; }
    virtual void visitEIntrinXorI(EIntrinXorI *p) { bSimple = false; }
    virtual void visitEIntrinShlI(EIntrinShlI *p) { bSimple = false; }
    virtual void visitEIntrinLshrI(EIntrinLshrI *p) { bSimple = false; }
    virtual void visitEIntrinAshrI(EIntrinAshrI *p) { bSimple = false; }
    virtual void visitEIntrinNotI(EIntrinNotI *p) { bSimple = false; }
    virtual void visitEIntrinNegI(EIntrinNegI *p) { bSimple = false; }
    virtual void visitEIntrinCEqI(EIntrinCEqI *p) { bSimple = false; }
    virtual void visitEIntrinCNeI(EIntrinCNeI *p) { bSimple = false; }
    virtual void visitEIntrinCLtI(EIntrinCLtI *p) { bSimple = false; }
    virtual void visitEIntrinCGtI(EIntrinCGtI *p) { bSimple = false; }
    virtual void visitEIntrinCLeI(EIntrinCLeI *p) { bSimple = false; }
    virtual void visitEIntrinCGeI(EIntrinCGeI *p) { bSimple = false; }
  
    virtual void visitEInteger(EInteger *p) { iValue = p->integer_; bInt = true; }
    
    virtual void visitEE( EE* p ) { bSimple = false; }
    virtual void visitENE( ENE* p ) { bSimple = false; }
    virtual void visitEMul(EMul *p) { bSimple = false; }
    virtual void visitEMulA(EMulA *p) { bSimple = false; }
    virtual void visitEDiv(EDiv *p) { bSimple = false; }
    virtual void visitEMod(EMod *p) { bSimple = false; }
    virtual void visitEAdd(EAdd *p) { bSimple = false; }
    virtual void visitEAddA(EAddA *p) { bSimple = false; }
    virtual void visitESub(ESub *p) { bSimple = false; }
    virtual void visitESubA(ESubA *p) { bSimple = false; }
    virtual void visitELSh(ELSh *p) { bSimple = false; }
    virtual void visitERSh(ERSh *p) { bSimple = false; }
    virtual void visitELeft(ELeft *p) { bSimple = false; }
    virtual void visitERight(ERight *p) { bSimple = false; }
    //virtual void visitEBinaryOperator(EBinaryOperator *p);
    virtual void visitELT(ELT *p) { bSimple = false; }
    virtual void visitEGT(EGT *p) { bSimple = false; }
    virtual void visitELE(ELE *p) { bSimple = false; }
    virtual void visitEGE(EGE *p) { bSimple = false; }
    virtual void visitEBand(EBand *p) { bSimple = false; }
    virtual void visitEBor(EBor *p) { bSimple = false; }
    virtual void visitEBxor(EBxor *p) { bSimple = false; }
    virtual void visitELand(ELand *p) { bSimple = false; }
    virtual void visitELor(ELor *p) { bSimple = false; }
    virtual void visitELxor(ELxor *p) { bSimple = false; }
};

#endif
