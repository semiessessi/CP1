#ifndef ONVISITOR_H
#define ONVISITOR_H

#include "CompilerVisitor.h"

#include <string>
#include <vector>

class ONVisitor : public CompilerVisitor
{

public:

	ONVisitor() { reset(); }
	
	void reset()
	{
		operatorName = "";
	}

    //virtual void visitONOp(ONOp *p)         { operatorName = p->operator_; }
    virtual void visitONLnot(ONLnot *p)     { operatorName = "!"; }
    virtual void visitONPreInc(ONPreInc *p) { operatorName = "++"; }
    virtual void visitONPreDec(ONPreDec *p) { operatorName = "--"; }
    virtual void visitONBnot(ONBnot *p)     { operatorName = "~"; }
    virtual void visitONMul(ONMul *p)       { operatorName = "*"; }
    virtual void visitONDiv(ONDiv *p)       { operatorName = "/"; }
    virtual void visitONMod(ONMod *p)       { operatorName = "%"; }
    virtual void visitONAdd(ONAdd *p)       { operatorName = "+"; }
    virtual void visitONSub(ONSub *p)       { operatorName = "-"; }
    virtual void visitONLSh(ONLSh *p)       { operatorName = "<<"; }
    virtual void visitONRSh(ONRSh *p)       { operatorName = ">>"; }
    virtual void visitONLT(ONLT *p)         { operatorName = "<"; }
    virtual void visitONGT(ONGT *p)         { operatorName = ">"; }
    virtual void visitONLE(ONLE *p)         { operatorName = "<="; }
    virtual void visitONGE(ONGE *p)         { operatorName = ">="; }
    virtual void visitONE(ONE *p)           { operatorName = "=="; }
    virtual void visitONNE(ONNE *p)         { operatorName = "!="; }
    virtual void visitONBand(ONBand *p)     { operatorName = "&"; }
    virtual void visitONBor(ONBor *p)       { operatorName = "|"; }
    virtual void visitONBxor(ONBxor *p)     { operatorName = "^"; }
    virtual void visitONLand(ONLand *p)     { operatorName = "&&"; }
    virtual void visitONLor(ONLor *p)       { operatorName = "||"; }
    virtual void visitONLxor(ONLxor *p)     { operatorName = "^^"; }
    virtual void visitONExp(ONExp *p)     { operatorName = "**"; }
    virtual void visitONRDiv(ONRDiv *p)     { operatorName = "\\"; }
    virtual void visitONLeft(ONLeft *p)     { operatorName = "<-"; }
    virtual void visitONRight(ONRight *p)     { operatorName = "->"; }
    
    std::string operatorName;
};

#endif
