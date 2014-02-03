#pragma warning( disable : 4996 )
#pragma warning( disable : 4273 )

#define istream elaborate_fix

#include "bisonlocation.h"

extern YYLTYPE yylloc;

int yycolumn = 1;

#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yy_mylinenumber + 1; \
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn + yyleng - 1; \
    yycolumn += yyleng; if( yytext[ 0 ] == '\n' ) yycolumn = 1;

#include "lex.yy.c"

#undef istream

void LexFlushBuffer()
{
	YY_FLUSH_BUFFER;
	BEGIN (0);
}
