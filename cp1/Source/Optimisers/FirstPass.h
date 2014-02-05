#ifndef FIRST_PASS_H
#define FIRST_PASS_H

#include "../Compiler/CompilerVisitor.h"

#include <string>

class TrivialConstantChecker
: public DescendingCompilerVisitor
{

public:

    TrivialConstantChecker() : mbInt( false ), mbString( false ), mbDouble( false ), mbConstant( true ) {}
    
    virtual void visitERValue( ERValue* ) { mbConstant = false; }
    virtual void visitECall( ECall* ) { mbConstant = false; }
    virtual void visitESimpleCall( ESimpleCall* ) { mbConstant = false; }
    virtual void visitEAssign( EAssign* ) { mbConstant = false; }
    virtual void visitEPostInc( EPostInc* ) { mbConstant = false; }
    virtual void visitEPreInc( EPreInc* ) { mbConstant = false; }
    virtual void visitEPostDec( EPostDec* ) { mbConstant = false; }
    virtual void visitEPreDec( EPreDec* ) { mbConstant = false; }
    
    virtual void visitEDouble( EDouble* p )
    {
        mbDouble = true;
        mdDouble = p->double_;
    }
    
    virtual void visitEInteger( EInteger* p )
    {
        mbInt = true;
        miInt = p->integer_;
    }
    
    virtual void visitEString( EString* p )
    {
        mbString = true;
        mszString = p->cstring_;
    }
    
    bool IsConstant() { return mbConstant; }
    bool IsInt() { return mbInt; }
    bool IsString() { return mbString; }
    bool IsDouble() { return mbDouble; }
    
    int GetInt() const { return miInt; }
    std::string GetString() const { return mszString; }
    double GetDouble() const { return mdDouble; }
    
private:

    int miInt;
    std::string mszString;
    double mdDouble;

    bool mbInt;
    bool mbString;
    bool mbDouble;
    bool mbConstant;
    
};

class TrivialConstantEvaluator
: public DescendingCompilerVisitor
{
    
public:
    
    bool IsConstant() { return mbConstant; }
    bool IsInt() { return mbInt; }
    bool IsString() { return mbString; }
    bool IsDouble() { return mbDouble; }
    
    int GetInt() const { return miInt; }
    char* GetString() /*const*/ { return &( mszString[ 0 ] ); }
    //std::string GetString() const { return mszString; }
    double GetDouble() const { return mdDouble; }
    
private:

    int miInt;
    std::string mszString;
    double mdDouble;

    bool mbInt;
    bool mbString;
    bool mbDouble;
    bool mbConstant;
    
};

class TrivialConstantExpressionOptimiser
: public DescendingCompilerVisitor
{

public:

    virtual void visitSExpression( SExpression* p );
    
    virtual void visitListExpression( ListExpression *p );
    
private:

    Expression* OptimiseExpression( Expression* pExpression );
    
};

class FirstPassOptimiser
: public DescendingCompilerVisitor
{
    virtual void visitMain( Main* p )
    {
        TrivialConstantExpressionOptimiser eo;
        p->accept( &eo );
    }
};

#endif
