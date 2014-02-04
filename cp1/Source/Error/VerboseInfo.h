#ifndef VERBOSE_INFO
#define VERBOSE_INFO

#include "../Core/Switches.h"

#pragma warning( disable : 4127 )

#define verboseInfo( level, ... ) \
	\
	do \
	{ \
		if( gxSwitches.infoVerbosity >= level ) \
		{ \
			printf( __VA_ARGS__ ); \
		} \
	} while( false )
    
#define FILE_LINE_3 verboseInfo( 3, "File %s, line %d\n", __FILE__, __LINE__ );

#endif
