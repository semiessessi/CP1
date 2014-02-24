#include "CompilerVisitor.h"

void DescendingCompilerVisitor::visitMain( Main *p )
{
	ListTLDeclaration* pList = p->listtldeclaration_;
	if( pList )
	{
		pList->accept( this );
	}
	
	ListDeclaration* pList2 = p->listdeclaration_;
	if( pList2 )
	{
		pList2->accept( this );
	}
}

void DescendingCompilerVisitor::visitListTLDeclaration(ListTLDeclaration *p)
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}

void DescendingCompilerVisitor::visitListDeclaration(ListDeclaration *p)
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}

// void DescendingCompilerVisitor::visitSDecl( SDecl *p )
// {
	// p->declaration_->accept( this );
// }

void DescendingCompilerVisitor::visitDNamespace( DNamespace* p )
{
	m_pCurrentNamespace = p;

	visitListDeclaration( p->listdeclaration_ );
}

void DescendingCompilerVisitor::visitDDefaultFunction( DDefaultFunction *p )
{
	visitListFunctionSpecifier( p->listfunctionspecifier_ );
	visitListParameterDeclaration( p->listparameterdeclaration_ );
    visitListStatement( p->liststatement_ );
}

void DescendingCompilerVisitor::visitDFunction(DFunction *p)
{
    visitListFunctionSpecifier( p->listfunctionspecifier_ );

    p->type_->accept( this );

    visitListParameterDeclaration( p->listparameterdeclaration_ );
    visitListStatement( p->liststatement_ );
}

void DescendingCompilerVisitor::visitPDAutoParameter(PDAutoParameter *p)
{
    visitListVariableSpecifier( p->listvariablespecifier_ );
}

void DescendingCompilerVisitor::visitPDTypedParameter(PDTypedParameter *p)
{
    p->type_->accept( this );
    
    visitListVariableSpecifier( p->listvariablespecifier_ );
}

void DescendingCompilerVisitor::visitDOperator(DOperator *p)
{
    visitListFunctionSpecifier( p->listfunctionspecifier_ );
    visitListParameterDeclaration( p->listparameterdeclaration_ );
    visitListStatement( p->liststatement_ );
}

void DescendingCompilerVisitor::visitDTypeConv(DTypeConv *p)
{
    visitListStatement( p->liststatement_ );
}

void DescendingCompilerVisitor::visitPFunction( PFunction* p )
{
	visitListParameterDeclaration( p->listparameterdeclaration_ );
}

void DescendingCompilerVisitor::visitSExpression( SExpression *p )
{
    p->expression_->accept( this );
    
}

void DescendingCompilerVisitor::visitSReturn( SReturn *p )
{
    p->expression_->accept( this );
    
}

void DescendingCompilerVisitor::visitSScope( SScope *p )
{
    p->liststatement_->accept( this );  
}

void DescendingCompilerVisitor::visitSIf( SIf *p )
{
	p->expression_->accept( this );
    p->liststatement_->accept( this );  
}

void DescendingCompilerVisitor::visitSIfElse( SIfElse *p )
{
	p->expression_->accept( this );
    p->liststatement_1->accept( this );
	p->liststatement_2->accept( this );	
}

void DescendingCompilerVisitor::visitSLoop( SLoop *p )
{
	p->expression_->accept( this );
    p->liststatement_->accept( this );  
}

void DescendingCompilerVisitor::visitSWhile( SWhile *p )
{
	p->expression_->accept( this );
    p->liststatement_->accept( this );  
}

void DescendingCompilerVisitor::visitSUntil( SUntil *p )
{
	p->expression_->accept( this );
    p->liststatement_->accept( this );  
}

void DescendingCompilerVisitor::visitSIVariable( SIVariable *p )
{
    p->expression_->accept( this );
}

void DescendingCompilerVisitor::visitECall( ECall *p )
{
    visitListExpression( p->listexpression_ );
    
}

void DescendingCompilerVisitor::visitListExpression( ListExpression* p )
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}

void DescendingCompilerVisitor::visitListStatement( ListStatement* p )
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}

void DescendingCompilerVisitor::visitListFunctionSpecifier( ListFunctionSpecifier* p )
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}

void DescendingCompilerVisitor::visitListVariableSpecifier( ListVariableSpecifier* p )
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}

void DescendingCompilerVisitor::visitListParameterDeclaration( ListParameterDeclaration* p )
{
    for( size_t i = 0 ; i < p->size(); ++i )
    {
        ( *p )[ i ]->accept( this );
    }
}
