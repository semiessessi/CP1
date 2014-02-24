#include "FirstPass.h"

Expression* TrivialConstantExpressionOptimiser::OptimiseExpression( Expression* pExpression )
{
    // is this expression a constant?
    do
    {
        TrivialConstantChecker cc;
        pExpression->accept( &cc );
        if( cc.IsConstant() )
        {
            // 
            TrivialConstantEvaluator ce;
            pExpression->accept( &ce );
            
            if( ce.IsConstant() )
            {
                if( ce.IsInt() )
                {
                    return new EInteger( ce.GetInt() );
                }
                else if( ce.IsString() )
                {
                    return new EString( static_cast< CString >( ce.GetString() ) );
                }
                else if( ce.IsDouble() )
                {
                    return new EDouble( ce.GetDouble() );
                }
                
                break;
            }
        }
    } while( false );
    
    return NULL;
}

void TrivialConstantExpressionOptimiser::visitSExpression( SExpression* pExpressionStatement )
{
    Expression* pNew = OptimiseExpression( pExpressionStatement->expression_ );
    if( pNew )
    {
        Expression* pOld = pExpressionStatement->expression_;
        pExpressionStatement->expression_ = pNew;
        delete pOld;
    }
    else
    {
        pExpressionStatement->expression_->accept( this );
    }
}

void TrivialConstantExpressionOptimiser::visitListExpression( ListExpression* p )
{
   	ListExpression* pListExpressions = p;
    for( size_t i = 0 ; i < pListExpressions->size(); ++i )
    {
        Expression* pNew = OptimiseExpression( ( *pListExpressions )[ i ] );
        if( pNew )
        {
            Expression* pOld = ( *pListExpressions )[ i ];
            ( *pListExpressions )[ i ] = pNew;
            delete pOld;
        }
        else
        {
            ( *pListExpressions )[ i ]->accept( this );
        }
    }
}
