#ifndef OPERATOR_FINDER_H
#define OPERATOR_FINDER_H

#include "CompilerVisitor.h"

#include "OperatorInfo.h"
#include "OperatorNameMangle.h"
#include "OperatorVisitor.h"
#include "TypeVisitor.h"

class OperatorFinder
: public DescendingCompilerVisitor
{

public:

    virtual void visitDOperator(DOperator *p)
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
        OperatorInfo& pInfo = findOperatorInfo( info );
        pInfo.szCPName = v.name;
        pInfo.szTypeOwner = v.typeOwner;
        pInfo.szTypeReturn = v.typeReturn;
        pInfo.szLLVMName = info.szLLVMName;
        pInfo.aszParameterTypes = v.parameterTypes;
    }

    std::string emitLLVM()
    {
        std::string out = "";
        
        for( std::map< std::string, OperatorInfo >::iterator it = gxOperatorMap.begin(); it != gxOperatorMap.end(); ++it )
        {
            out += "declare ";
            out += it->second.szTypeReturn;
            out += " @";
            out += it->first;
            out += "()\r\n";
        }
        
        return out;
    }

    TypeVisitor mxCurrentTypeScopeVisitor;

};

#endif
