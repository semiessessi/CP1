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
			printf( "%s(%d): ", szCurrentFile, iCurrentLine ); printf( __VA_ARGS__ ); printf( "\n" ); \
		} \
	} while( false )

extern bool gbPendingCompileError;

extern std::string szCurrentFile;
extern int iCurrentLine;
    
#endif
