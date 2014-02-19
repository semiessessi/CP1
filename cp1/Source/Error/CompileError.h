#ifndef COMPILE_ERROR_H
#define COMPILE_ERROR_H

#include "../Core/Switches.h"

#pragma warning( disable : 4127 )

#define compileError( level, ... ) \
	\
	do \
	{ \
        gbPendingCompileError = true; \
		if( gxSwitches.errorVerbosity >= level ) \
		{ \
			printf(  __VA_ARGS__ ); \
		} \
	} while( false )

extern bool gbPendingCompileError;
    
#endif
