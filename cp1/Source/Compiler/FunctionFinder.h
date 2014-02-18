#ifndef FUNCTION_FINDER_H
#define FUNCTION_FINDER_H

#include "CompilerVisitor.h"

#include "FunctionInfo.h"
//#include "FunctionVisitor.h"
#include "TypeVisitor.h"

class FunctionFinder
: public DescendingCompilerVisitor
{

public:
    /*
    static FunctionInfo& FindFunction( DFunction *p )
    {
        OperatorVisitor v;
        DetailedTypeVisitor tv;
        p->type_->accept( &tv );
        v.typeOwner = "i8";
        v.typeReturn = "i8";
        if( tv.pxTypeInfo )
        {
            v.typeOwner = tv.pxTypeInfo->MangledName();
            v.typeReturn = tv.pxTypeInfo->ShortLLVMName();
        }
        
        p->accept( &v );
        OperatorInfo info;
        info.szLLVMName = operatorNameMangle( v.name.c_str(), v.typeOwner, v.parameterTypes );
        
        FunctionInfo& rInfo = findOperatorInfo( info );
        rInfo.szCPName = v.name;
        rInfo.szTypeOwner = v.typeOwner;
        rInfo.szTypeReturn = v.typeReturn;
        rInfo.szLLVMName = info.szLLVMName;
        rInfo.aszParameterTypes = v.parameterTypes;
        rInfo.pTypeReturn = tv.pxTypeInfo;
        
        return rInfo;
    }
    */
    
    /*
    virtual void visitDOperator(DOperator *p)
    {
        OperatorInfo& pInfo = FindOperator( p );
    }
    */
};

#endif
