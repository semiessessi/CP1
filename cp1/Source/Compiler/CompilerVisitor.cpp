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
	p->tldeclaration_->accept( this );
	if( p->listtldeclaration_ )
	{
		p->listtldeclaration_->accept( this );
	}
}

void DescendingCompilerVisitor::visitListDeclaration(ListDeclaration *p)
{
	p->declaration_->accept( this );
	if( p->listdeclaration_ )
	{
		p->listdeclaration_->accept( this );
	}
}

// void DescendingCompilerVisitor::visitSDecl( SDecl *p )
// {
	// p->declaration_->accept( this );
// }

void DescendingCompilerVisitor::visitDNamespace( DNamespace* p )
{
	m_pCurrentNamespace = p;
	ListDeclaration* pList = p->listdeclaration_;
	while( pList )
	{
		pList->declaration_->accept( this );
		pList = pList->listdeclaration_;
	}
}

void DescendingCompilerVisitor::visitDDefaultFunction( DDefaultFunction *p )
{
	ListFunctionSpecifier* pListFS = p->listfunctionspecifier_;
	while( pListFS )
	{
		pListFS->functionspecifier_->accept( this );
		pListFS = pListFS->listfunctionspecifier_;
	}

	ListParameterDeclaration* pListPD = p->listparameterdeclaration_;
	while( pListPD )
	{
		pListPD->parameterdeclaration_->accept( this );
		pListPD = pListPD->listparameterdeclaration_;
	}

	ListStatement* pList = p->liststatement_;
	while( pList )
	{
		pList->statement_->accept( this );
		pList = pList->liststatement_;
	}
}

void DescendingCompilerVisitor::visitDFunction(DFunction *p)
{
    ListFunctionSpecifier* pListFS = p->listfunctionspecifier_;
    while( pListFS )
    {
        pListFS->functionspecifier_->accept( this );
        pListFS = pListFS->listfunctionspecifier_;
    }

    p->type_->accept( this );

    ListParameterDeclaration* pListPD = p->listparameterdeclaration_;
    while( pListPD )
    {
        pListPD->parameterdeclaration_->accept( this );
        pListPD = pListPD->listparameterdeclaration_;
    }

    ListStatement* pList = p->liststatement_;
    while( pList )
    {
        pList->statement_->accept( this );
        pList = pList->liststatement_;
    }
}

void DescendingCompilerVisitor::visitPDAutoParameter(PDAutoParameter *p)
{
    ListVariableSpecifier* pList = p->listvariablespecifier_;
	while( pList )
	{
		pList->variablespecifier_->accept(this);
		pList = pList->listvariablespecifier_;
	}
}

void DescendingCompilerVisitor::visitPDTypedParameter(PDTypedParameter *p)
{
    p->type_->accept( this );
    ListVariableSpecifier* pList = p->listvariablespecifier_;
	while( pList )
	{
		pList->variablespecifier_->accept(this);
		pList = pList->listvariablespecifier_;
	}
}

void DescendingCompilerVisitor::visitDOperator(DOperator *p)
{
    ListFunctionSpecifier* pListFS = p->listfunctionspecifier_;
    while( pListFS )
    {
        pListFS->functionspecifier_->accept( this );
        pListFS = pListFS->listfunctionspecifier_;
    }

    ListParameterDeclaration* pListPD = p->listparameterdeclaration_;
    while( pListPD )
    {
        pListPD->parameterdeclaration_->accept( this );
        pListPD = pListPD->listparameterdeclaration_;
    }

    ListStatement* pList = p->liststatement_;
    while( pList )
    {
        pList->statement_->accept( this );
        pList = pList->liststatement_;
    }
}

void DescendingCompilerVisitor::visitPFunction( PFunction* p )
{
	ListParameterDeclaration* pListPD = p->listparameterdeclaration_;
	while( pListPD )
	{
		pListPD->parameterdeclaration_->accept( this );
		pListPD = pListPD->listparameterdeclaration_;
	}
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

void DescendingCompilerVisitor::visitECall( ECall *p )
{
    p->listexpression_->accept( this );
    
}

void DescendingCompilerVisitor::visitListExpression( ListExpression* p )
{
	ListExpression* pListExpressions = p;
	while( pListExpressions )
	{
		pListExpressions->expression_->accept( this );
		pListExpressions = pListExpressions->listexpression_;
	}
}

void DescendingCompilerVisitor::visitListStatement( ListStatement* p )
{
	ListStatement* pList = p;
	while( pList )
	{
		pList->statement_->accept( this );
		pList = pList->liststatement_;
	}
}

void DescendingCompilerVisitor::visitListParameterDeclaration( ListParameterDeclaration* p )
{
	ListParameterDeclaration* pListPD = p;
	while( pListPD )
	{
		pListPD->parameterdeclaration_->accept( this );
		pListPD = pListPD->listparameterdeclaration_;
	}
}
