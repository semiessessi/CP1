#include <cstdio>
#include <string>
#include <vector>

#include "../../../bnfcout/parser.h"
#include "../../../bnfcout/printer.h"

#include <conio.h>

#include "../Compiler/EntryPointFinder.h"
#include "../Compiler/LLVM/LLVMTransform.h"
#include "../Compiler/ConstantFinder.h"
#include "../Compiler/ExternFinder.h"
#include "../Compiler/FunctionFinder.h"
#include "../Compiler/OperatorFinder.h"
#include "../Compiler/TypeFinder.h"
#include "../Compiler/ImportFinder.h"

#include "../Error/VerboseInfo.h"

#include "../Optimisers/FirstPass.h"

#include "Switches.h"

extern int yydebug;
std::string szCurrentFile;
extern int yy_mylinenumber;
extern void LexFlushBuffer();
extern void doHackery( FILE* pFile );

Switches gxSwitches = { 2, 0, 0, "include" };

std::map< std::string, std::string > gszStrings;

int main( const int iArgumentCount, const char* const* const pszArguments )
{
#if _DEBUG
	//yydebug = 1;
#endif
	printf( "CP1 - Experimental compiler\n" );
	printf( "(C) Copyright 2014 Semi Essessi\n" );
	printf( "===============================\n" );

	std::string params = "..\\tools\\llc";
	
	if( iArgumentCount > 1 )
	{
		// try open each argument as a file...
		std::vector< std::string > aszFilenames;
		for( int i = 1; i < iArgumentCount; ++i )
		{
			FILE* pFile = fopen( pszArguments[ i ], "rb" );
			if( pFile )
			{
				fseek( pFile, 0, SEEK_END );
				int iSize = ftell( pFile );
				if( iSize )
				{
					aszFilenames.push_back( pszArguments[ i ] );
				}
				fclose( pFile );
			}
		}

		// interpret any switches
        for( int i = 1; i < iArgumentCount; ++i )
		{
            if( ( pszArguments[ i ][ 0 ] == '-' ) || ( pszArguments[ i ][ 0 ] == '/' ) )
            {
                // look for switches we care about...
                switch( pszArguments[ i ][ 1 ] )
                {
                    case '?':
                    {
                        printf( "Available switches:\n" );
                        printf( "o#    use optimisation level #\n" );
                        printf( "v#    use error verbosity level #\n" );
                        printf( "i#    use info verbosity level #\n" );
                        printf( "I     specify an include path (no spaces for now)\n" );
                        return 0;
                        break;
                    }
                    
                    case 'o':
                    {
                        if( pszArguments[ i ][ 2 ] )
                        {
                            gxSwitches.optimisationLevel = pszArguments[ i ][ 2 ] - '0';
                            printf( "Using optimisation level %d\n", gxSwitches.optimisationLevel );
                        }
                        break;
                    }

                    case 'v':
                    {
                        if( pszArguments[ i ][ 2 ] )
                        {
                            gxSwitches.errorVerbosity = pszArguments[ i ][ 2 ] - '0';
                            printf( "Using error verbosity level %d\n", gxSwitches.errorVerbosity );
                        }
                        break;
                    }

                    case 'i':
                    {
                        if( pszArguments[ i ][ 2 ] )
                        {
                            gxSwitches.infoVerbosity = pszArguments[ i ][ 2 ] - '0';
                            printf( "Using information verbosity level %d\n", gxSwitches.infoVerbosity );
                        }
                        break;
                    }

					case 'I':
					{
						if( pszArguments[ i ][ 2 ] )
						{
							gxSwitches.includePath = &( pszArguments[ i ][ 2 ] );
							printf( "Using additional include path %s\n", gxSwitches.includePath );
						}
						break;
					}
                }
            }
		}

        std::string giantCompilationUnit = "";
        
        verboseInfo( 1, "Parsing all input files...\n" );
        std::vector< Code* > apCode;
        apCode.resize( aszFilenames.size() );
		for( size_t i = 0; i < aszFilenames.size(); ++i )
		{
			// compile each file in turn...
			szCurrentFile = aszFilenames[ i ];
			printf( "%s...\n", szCurrentFile.c_str() );
			FILE* pFile = fopen( szCurrentFile.c_str(), "rb" );
			if( pFile )
			{
                doHackery( pFile );
				apCode[ i ] = pCode( pFile );
				fclose( pFile );

				yy_mylinenumber = 0;
				LexFlushBuffer();
			}
			else
			{
				apCode[ i ] = NULL;
				printf( "Fatal error parsing %s\n", szCurrentFile.c_str() );
				continue;
			}
		}

		// find all imports and resolve
        verboseInfo( 1, "Parsing all imported files...\n" );
		for( size_t i = 0; i < apCode.size(); ++i )
		{
			ImportFinder f;
			if( apCode[ i ] )
			{
				apCode[ i ]->accept( &f );
			}
			
			for( size_t j = 0; j < f.maszImports.size(); ++j )
			{
				bool bNew = true;
				std::string szLocal = f.maszImports[ j ] + ".cp1";
				std::string szInclude = "include\\" + f.maszImports[ j ] + ".cp1";
				for( size_t k = 0; k < aszFilenames.size(); ++k )
				{
					if( ( szLocal == aszFilenames[ k ] )
						|| ( szInclude == aszFilenames[ k ] ) )
					{
						bNew = false;
						break;
					}
				}
				
				if( bNew )
				{
					std::string szPath = szLocal;
					FILE* pFile = fopen( szLocal.c_str(), "rb" );
					if( pFile == NULL )
					{
						szPath = szInclude;
						pFile = fopen( szInclude.c_str(), "rb" );
					}
					
					if( pFile )
					{
						printf( "including file %s\n", szPath.c_str() );
						szCurrentFile = szPath;
						doHackery( pFile );
						apCode.push_back( pCode( pFile ) );
						aszFilenames.push_back( szPath );
						fclose( pFile );
			
						yy_mylinenumber = 0;
						LexFlushBuffer();
					}
				}
			}
		}
		
        // pretty original code...
        if( gxSwitches.infoVerbosity > 1 )
        {
            PrintAbsyn printer;
            for( size_t i = 0; i < apCode.size(); ++i )
            {
				if( apCode[ i ] )
				{
					printf( "\r\nOriginal source for %s:\r\n", aszFilenames[ i ].c_str() );
					printf( "%s\r\n", printer.print( apCode[ i ] ) );
				}
			}
        }
        
        // pretty original code after first pass optimisation...
        if( gxSwitches.infoVerbosity > 1 )
        {
            PrintAbsyn printer;
            for( size_t i = 0; i < apCode.size(); ++i )
            {
				if( apCode[ i ] )
				{
                    FirstPassOptimiser fp;
                    apCode[ i ]->accept( &fp );
					printf( "\r\n%s after first pass optimisation:\r\n", aszFilenames[ i ].c_str() );
					printf( "%s\r\n", printer.print( apCode[ i ] ) );
				}
			}
        }
        
        // pretty print parse trees...
        if( gxSwitches.infoVerbosity > 2 )
        {
            ShowAbsyn printer;
            for( size_t i = 0; i < apCode.size(); ++i )
            {
				if( apCode[ i ] )
				{
					printf( "\r\nParse tree for %s:\r\n", aszFilenames[ i ].c_str() );
					printf( "%s\r\n", printer.show( apCode[ i ] ) );
				}
			}
        }
        
		if( gxSwitches.infoVerbosity > 1 )
        {
			printf( "Looking for entrypoint...\n" );
		}
		
		// find entry point
		bool epFound = false;
        EntryPointFinder epf;
        for( size_t i = 0; i < apCode.size(); ++i )
		{
        	if( apCode[ i ] )
			{
				epf.start();
				apCode[ i ]->accept( &epf );
				if( epf.getIdentifier() )
				{
					epFound = true;
                    verboseInfo( 2, "Found entrypoint \"%s\"\n", epf.getIdentifier() );
                    break;
				}
            }
        }

		if( !epFound )
		{
			printf( "Fatal error: No entry point found and not building a library!\n" );
			//return 0;
			goto mainExit;
		}

		// find things...
        
		verboseInfo( 2, "Finding types...\n" );
		
        TypeFinder tf;
        for( size_t i = 0; i < apCode.size(); ++i )
		{
        	if( apCode[ i ] )
			{
				apCode[ i ]->accept( &tf );
            }
        }
        
        verboseInfo( 2, "Finding types in more detail...\n" );
        
        DetailedTypeVisitor dtv;
        for( size_t i = 0; i < apCode.size(); ++i )
		{
        	if( apCode[ i ] )
			{
				apCode[ i ]->accept( &dtv );
            }
        }
        
		verboseInfo( 2, "Finding constants...\n" );
		
        ConstantFinder cf;
        for( size_t i = 0; i < apCode.size(); ++i )
		{
        	if( apCode[ i ] )
			{
				apCode[ i ]->accept( &cf );
            }
        }
        
		verboseInfo( 2, "Finding operators...\n" );
		
        OperatorFinder of;
        for( size_t i = 0; i < apCode.size(); ++i )
		{
        	if( apCode[ i ] )
			{
				apCode[ i ]->accept( &of );
            }
        }

        verboseInfo( 2, "Finding functions...\n" );
		
        FunctionFinder ff;
        for( size_t i = 0; i < apCode.size(); ++i )
		{
        	if( apCode[ i ] )
			{
				apCode[ i ]->accept( &ff );
            }
        }
        
		verboseInfo( 2, "Finding externs...\n" );
		
		ExternFinder ef;
		for( size_t i = 0; i < apCode.size(); ++i )
		{
			if( apCode[ i ] )
			{
				apCode[ i ]->accept( &ef );
			}
		}

		verboseInfo( 1, "Emitting LLVM...\n" );
		
        giantCompilationUnit += "; constant data\r\n";
        giantCompilationUnit += cf.emitLLVM();
        giantCompilationUnit += "\r\n";
        
        giantCompilationUnit += "; types\r\n";
        //giantCompilationUnit += tf.emitLLVM();
        giantCompilationUnit += dtv.emitLLVM();
        giantCompilationUnit += "\r\n";

        //giantCompilationUnit += "; operators\r\n";
        //giantCompilationUnit += of.emitLLVM();
        //giantCompilationUnit += "\r\n";
        
        giantCompilationUnit += "; entrypoint stub\r\n";
        giantCompilationUnit += epf.emitLLVM();
        giantCompilationUnit += "\r\n";

		giantCompilationUnit += "; externs\r\n";
		giantCompilationUnit += ef.emitLLVM();
		giantCompilationUnit += "\r\n";

        for( size_t i = 0; i < apCode.size(); ++i )
		{
            if( apCode[ i ] )
			{
				LLVMTransformVisitor l;
				l.out = "; LLVM IR generated from ";
				l.out += aszFilenames[ i ];
				l.out += " by CP1 - Experimental compiler\r\n";
				l.out += "\r\n";

				apCode[ i ]->accept( &l );

                giantCompilationUnit += l.out;
                giantCompilationUnit += "\r\n";
			}
        }

        FILE* pFile = fopen( "temp.ll", "wb" );
		if( pFile )
		{
			fwrite( giantCompilationUnit.c_str(), 1, giantCompilationUnit.length(), pFile );
			fclose( pFile );
		}

		for( size_t i = 0; i < apCode.size(); ++i )
		{
			if( apCode[ i ] == 0 )
			{
				printf( "Fatal error: Could not compile %s\n", aszFilenames[ i ].c_str() );
				goto mainExit;
			}
		}
	
		if( gxSwitches.infoVerbosity > 0 )
		{
			printf( "Compiling from generated LLVM...\n" );
		}
		
		params += " -cppgen=program -filetype=obj";
		//params += gxSwitches.optimisationLevel;
		params += " temp.ll";
		system( params.c_str() );
		
		verboseInfo( 1, "Linking with GCC...\n" );
		
		system( "gcc temp.o -O3 -oa.exe\n" );
	}
	else
	{
		printf( "Insufficient arguments. Try cp1 /? for help.\n" );
	}

	printf( "Done.\n" );

mainExit:

#ifdef _DEBUG
	while( !_kbhit() );
#endif

	return 0;
}
