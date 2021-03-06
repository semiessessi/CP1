#include "../../../bnfcout/bisonlocation.h"

extern int yy_mylinenumber;

#include <stdio.h>

#include <string>
#include <vector>

#include "../Core/Switches.h"

extern std::string szCurrentFile;

extern std::vector<std::string> gaszLines;

bool gbPendingCompileError = false;

extern YYLTYPE yylloc;
extern YYLTYPE* gpxLocation;

// these don't work as standard...

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void yyerror(const char *str)
{
    if( gxSwitches.errorVerbosity == 0 )
    {
        return;
    }

	char buf[ 2048 ];
	if( gpxLocation )
	{
		sprintf( buf, "%s(%d,%d): error: %s", szCurrentFile.c_str(), yy_mylinenumber + 1, gpxLocation->last_column, str );
	}
	else
	{
		sprintf( buf, "%s(%d): error: %s", szCurrentFile.c_str(), yy_mylinenumber + 1, str );
	}
	std::string err = buf;
	
	size_t f;
#define FUCKO_MACRO( foo, sym ) f = err.find( #foo ); if( f != -1 ) err.replace( f, sizeof( #foo ), #sym )
    
	// SE: TODO generate this with some script from the .l file...
    
    // ### INSERT ###

    FUCKO_MACRO( _SYMB_115, '//' );
    FUCKO_MACRO( _SYMB_114, 'zero_extend' );
    FUCKO_MACRO( _SYMB_113, 'xor' );
    FUCKO_MACRO( _SYMB_112, 'while' );
    FUCKO_MACRO( _SYMB_111, 'where' );
    FUCKO_MACRO( _SYMB_110, 'urem' );
    FUCKO_MACRO( _SYMB_109, 'up' );
    FUCKO_MACRO( _SYMB_108, 'until' );
    FUCKO_MACRO( _SYMB_107, 'udiv' );
    FUCKO_MACRO( _SYMB_106, 'type' );
    FUCKO_MACRO( _SYMB_105, 'sub' );
    FUCKO_MACRO( _SYMB_104, 'srem' );
    FUCKO_MACRO( _SYMB_103, 'sign_extend' );
    FUCKO_MACRO( _SYMB_102, 'shl' );
    FUCKO_MACRO( _SYMB_101, 'selfinverse' );
    FUCKO_MACRO( _SYMB_100, 'sdiv' );
    FUCKO_MACRO( _SYMB_99, 'return' );
    FUCKO_MACRO( _SYMB_98, 'repeat' );
    FUCKO_MACRO( _SYMB_97, 'real' );
    FUCKO_MACRO( _SYMB_96, 'pure' );
    FUCKO_MACRO( _SYMB_95, 'pi' );
    FUCKO_MACRO( _SYMB_94, 'or' );
    FUCKO_MACRO( _SYMB_93, 'not' );
    FUCKO_MACRO( _SYMB_92, 'neg' );
    FUCKO_MACRO( _SYMB_91, 'namespace' );
    FUCKO_MACRO( _SYMB_90, 'mul' );
    FUCKO_MACRO( _SYMB_89, 'lshr' );
    FUCKO_MACRO( _SYMB_88, 'inverse' );
    FUCKO_MACRO( _SYMB_87, 'integer' );
    FUCKO_MACRO( _SYMB_86, 'inline' );
    FUCKO_MACRO( _SYMB_85, 'in' );
    FUCKO_MACRO( _SYMB_84, 'import' );
    FUCKO_MACRO( _SYMB_83, 'implicit' );
    FUCKO_MACRO( _SYMB_82, 'if' );
    FUCKO_MACRO( _SYMB_81, 'identity' );
    FUCKO_MACRO( _SYMB_80, 'generic' );
    FUCKO_MACRO( _SYMB_79, 'for' );
    FUCKO_MACRO( _SYMB_78, 'extern' );
    FUCKO_MACRO( _SYMB_77, 'expose' );
    FUCKO_MACRO( _SYMB_76, 'entrypoint' );
    FUCKO_MACRO( _SYMB_75, 'else' );
    FUCKO_MACRO( _SYMB_74, 'each' );
    FUCKO_MACRO( _SYMB_73, 'down' );
    FUCKO_MACRO( _SYMB_72, 'convert_to' );
    FUCKO_MACRO( _SYMB_71, 'convert' );
    FUCKO_MACRO( _SYMB_70, 'continue' );
    FUCKO_MACRO( _SYMB_69, 'const' );
    FUCKO_MACRO( _SYMB_68, 'commutative' );
    FUCKO_MACRO( _SYMB_67, 'cmp_ne' );
    FUCKO_MACRO( _SYMB_66, 'cmp_lt' );
    FUCKO_MACRO( _SYMB_65, 'cmp_le' );
    FUCKO_MACRO( _SYMB_64, 'cmp_gt' );
    FUCKO_MACRO( _SYMB_63, 'cmp_ge' );
    FUCKO_MACRO( _SYMB_62, 'cmp' );
    FUCKO_MACRO( _SYMB_61, 'cast' );
    FUCKO_MACRO( _SYMB_60, 'byte' );
    FUCKO_MACRO( _SYMB_59, 'breakpoint' );
    FUCKO_MACRO( _SYMB_58, 'break' );
    FUCKO_MACRO( _SYMB_57, 'associative' );
    FUCKO_MACRO( _SYMB_56, 'ashr' );
    FUCKO_MACRO( _SYMB_55, 'anticommutative' );
    FUCKO_MACRO( _SYMB_54, 'and' );
    FUCKO_MACRO( _SYMB_53, 'all' );
    FUCKO_MACRO( _SYMB_52, 'align' );
    FUCKO_MACRO( _SYMB_51, 'address' );
    FUCKO_MACRO( _SYMB_50, 'add' );
    FUCKO_MACRO( _SYMB_49, '>>=' );
    FUCKO_MACRO( _SYMB_48, '<<=' );
    FUCKO_MACRO( _SYMB_47, '^=' );
    FUCKO_MACRO( _SYMB_46, '|=' );
    FUCKO_MACRO( _SYMB_45, '&=' );
    FUCKO_MACRO( _SYMB_44, '%=' );
    FUCKO_MACRO( _SYMB_43, '/=' );
    FUCKO_MACRO( _SYMB_42, '*=' );
    FUCKO_MACRO( _SYMB_41, '-=' );
    FUCKO_MACRO( _SYMB_40, '+=' );
    FUCKO_MACRO( _SYMB_39, ':' );
    FUCKO_MACRO( _SYMB_38, '?' );
    FUCKO_MACRO( _SYMB_37, ',' );
    FUCKO_MACRO( _SYMB_36, '.' );
    FUCKO_MACRO( _SYMB_35, '..' );
    FUCKO_MACRO( _SYMB_34, ']' );
    FUCKO_MACRO( _SYMB_33, '[' );
    FUCKO_MACRO( _SYMB_32, '<-' );
    FUCKO_MACRO( _SYMB_31, '->' );
    FUCKO_MACRO( _SYMB_30, '^^' );
    FUCKO_MACRO( _SYMB_29, '||' );
    FUCKO_MACRO( _SYMB_28, '&&' );
    FUCKO_MACRO( _SYMB_27, '^' );
    FUCKO_MACRO( _SYMB_26, '|' );
    FUCKO_MACRO( _SYMB_25, '&' );
    FUCKO_MACRO( _SYMB_24, '!=' );
    FUCKO_MACRO( _SYMB_23, '==' );
    FUCKO_MACRO( _SYMB_22, '>=' );
    FUCKO_MACRO( _SYMB_21, '<=' );
    FUCKO_MACRO( _SYMB_20, '>' );
    FUCKO_MACRO( _SYMB_19, '<' );
    FUCKO_MACRO( _SYMB_18, '>>' );
    FUCKO_MACRO( _SYMB_17, '<<' );
    FUCKO_MACRO( _SYMB_16, '-' );
    FUCKO_MACRO( _SYMB_15, '+' );
    FUCKO_MACRO( _SYMB_14, '%' );
    FUCKO_MACRO( _SYMB_13, '\\' );
    FUCKO_MACRO( _SYMB_12, '/' );
    FUCKO_MACRO( _SYMB_11, '**' );
    FUCKO_MACRO( _SYMB_10, '*' );
    FUCKO_MACRO( _SYMB_9, '~' );
    FUCKO_MACRO( _SYMB_8, '--' );
    FUCKO_MACRO( _SYMB_7, '++' );
    FUCKO_MACRO( _SYMB_6, '!' );
    FUCKO_MACRO( _SYMB_5, '=' );
    FUCKO_MACRO( _SYMB_4, ')' );
    FUCKO_MACRO( _SYMB_3, '(' );
    FUCKO_MACRO( _SYMB_2, '}' );
    FUCKO_MACRO( _SYMB_1, '{' );
    FUCKO_MACRO( _SYMB_0, ';' );


// ### END INSERT ###

	//f = err.find( "_SYMB_52" );
	//if( f != -1 ) err.replace( f, sizeof( "_SYMB_52" ), "<operator>" );
	f = err.find( "_IDENT" );
	if( f != -1 ) err.replace( f, sizeof( "_IDENT" ), "<identifier>" );
	f = err.find( "_DOUBLE" );
	if( f != -1 ) err.replace( f, sizeof( "_DOUBLE" ), "<constant>" );
	f = err.find( "_INTEGER" );
	if( f != -1 ) err.replace( f, sizeof( "_INTEGER" ), "<integral constant>" );
	
    printf( "%s\n", err.c_str() );

    // SE - TODO: something to normalise tabs to spaces...
    if( gxSwitches.errorVerbosity > 1 )
    {
        printf( "\n" );

        if( yy_mylinenumber > 1 )
        {
            printf( "%d\t| %s\n", yy_mylinenumber - 1, gaszLines[ yy_mylinenumber - 2 ].c_str() );
        }
        if( yy_mylinenumber > 0 )
        {
            printf( "%d\t| %s\n", yy_mylinenumber, gaszLines[ yy_mylinenumber - 1 ].c_str() );
        }
        printf( "%d\t| %s\n", yy_mylinenumber + 1, gaszLines[ yy_mylinenumber ].c_str() );
        if( gpxLocation )
		{
            f = err.find( "unexpected" );
            if( f != -1 )
            {
				printf( "   \t|-" );
                const int iLimit = ( gpxLocation->last_column < (int) gaszLines[ yy_mylinenumber ].size() )
                    ? gpxLocation->last_column
                    : ( gpxLocation->first_column + 1 );
			    for( int i = 0; i < iLimit; ++i )
			    {
                    if( gaszLines[ yy_mylinenumber ].c_str()[ i ] == '\t' )
                    {
                        printf( "---" );
                    }
				    printf( ( i == ( gpxLocation->first_column - 1 ) ) ? "+" : "-" );
			    }
				printf( "^\n" );
            }
            else
            {
				printf( "   \t| " );
                const int iLimit1 = ( gpxLocation->first_column < (int) gaszLines[ yy_mylinenumber ].size() )
                    ? ( gpxLocation->first_column - 1 )
                    : ( gaszLines[ yy_mylinenumber ].size() - 2 );
                for( int i = 0; i < iLimit1; ++i )
			    {
                    if( gaszLines[ yy_mylinenumber ].c_str()[ i ] == '\t' )
                    {
                        printf( "   " );
                    }
				    printf( " " );
			    }
                printf( "|" );
                const int iLimit = ( gpxLocation->last_column < (int) gaszLines[ yy_mylinenumber ].size() )
                    ? gpxLocation->last_column
                    : ( iLimit1 + 1 );
			    for( int i = gpxLocation->first_column; i < iLimit; ++i )
			    {
                    if( gaszLines[ yy_mylinenumber ].c_str()[ i ] == '\t' )
                    {
                        printf( "---" );
                    }
				    printf( "-" );
			    }
				printf( "|\n" );
            }
			
		}

        if( yy_mylinenumber < (int)( gaszLines.size() - 2 ) )
        {
            printf( "%d\t| %s\n", yy_mylinenumber + 2, gaszLines[ yy_mylinenumber + 1 ].c_str() );
        }

        if( yy_mylinenumber < (int)( gaszLines.size() - 3 ) )
        {
            printf( "%d\t| %s\n", yy_mylinenumber + 3, gaszLines[ yy_mylinenumber + 2 ].c_str() );
        }
    }
}
