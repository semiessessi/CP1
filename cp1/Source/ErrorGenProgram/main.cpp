#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>

struct Symbol
{
    std::string szSymbol;
    std::string szFriendly;
};

// SE - regexes would be useful here but sed is rubbish - it takes more
// time to work out if and how to do something than to do it myself...
int main( int, char** )
{
    printf( "Creating hacky error handler symbol lookup table...\n" );
    
    FILE* pSource = fopen( "cp1/cp1/.l", "rb" );
    if( !pSource )
    {
        printf( "Fatal error: couldn't find cp1/cp1/.l file!\n" );
        return -1;
    }
    
    fseek( pSource, 0, SEEK_END );
    int len = ftell( pSource );
    rewind( pSource );
    std::string szSource;
    szSource.resize( len );
    fread( &( szSource[ 0 ] ), 1, len, pSource );
    fclose( pSource );
    
    std::vector< Symbol > symbols;
    
    int scanPos = 0;
    while( scanPos < len )
    {
        const int yyinitialPos = 11;
        scanPos = szSource.find( "<YYINITIAL>", scanPos );
        
        //printf( "scan: %d\n", scanPos );
        if( scanPos != std::string::npos )
        {
            int start1 = 0;
            int end1 = 0;
            int start2 = 0;
            int end2 = 0;
            
            scanPos += yyinitialPos;
            
            scanPos = szSource.find( "\"", scanPos ); // find first quote
            ++scanPos;
            start1 = scanPos;
            scanPos = szSource.find( "\"", scanPos ); // find second
            end1 = scanPos;
            
            scanPos = szSource.find( "return _", scanPos ); // find return
            scanPos = szSource.find( "_SYMB_", scanPos ); // find start of symbol
            start2 = scanPos;
            scanPos = szSource.find( ";", scanPos ); // find semi-colon ending return statement
            end2 = scanPos;
            
            if( scanPos == std::string::npos )
            {
                break; // couldn't completely match (!)
            }
            
            //printf( "extracting: %d-%d and %d-%d\n", start1, end1, start2, end2 );
            
            Symbol symbol =
            {
                szSource.substr( start2, end2 - start2 ),
                szSource.substr( start1, end1 - start1 )
            };
            
            //printf( "found: %s = %s\n", symbol.szSymbol.c_str(), symbol.szFriendly.c_str() );
            
            symbols.push_back( symbol );
        }
        else
        {
            break;
        }
    }
    
    FILE* pOutput = fopen( "cp1/Source/Error/HackyErrorHandler.cpp", "rb" );
    if( !pOutput )
    {
        printf( "Fatal error: couldn't find cp1/cp1/.l file!\n" );
        return -1;
    }
    
    fseek( pOutput, 0, SEEK_END );
    len = ftell( pOutput );
    rewind( pOutput );
    std::string szOriginal;
    szOriginal.resize( len );
    fread( &( szOriginal[ 0 ] ), 1, len, pOutput );
    fclose( pOutput );
    
    int start = szOriginal.find( "// ### INSERT ###" );
    int end = szOriginal.find( "// ### END INSERT ###" );
    
    std::string szNew = szOriginal.substr( 0, start );
    szNew += "// ### INSERT ###\r\n\r\n";
    
    std::reverse( symbols.begin(), symbols.end() ); // SE - aaagh!!!
    
    for( size_t i = 0; i < symbols.size(); ++i )
    {
        szNew += "    FUCKO_MACRO( ";
        szNew += symbols[ i ].szSymbol;
        szNew += ", '";
        szNew += symbols[ i ].szFriendly;
        szNew += "' );\r\n";
    }
    szNew += "\r\n\r\n";
    szNew += szOriginal.substr( end, std::string::npos );
    
    pOutput = fopen( "cp1/Source/Error/HackyErrorHandler.cpp", "wb" );
    if( pOutput )
    {
        fwrite( &( szNew[ 0 ] ), 1, szNew.size(), pOutput );
        fclose( pOutput );
    }
    
//    FILE* pDest = fopen( "test.txt", "wb" );
//    if( pDest )
//    {
//        for( size_t i = 0; i < symbols.size(); ++i )
//        {
//            fprintf( pDest, "    FUCKO_MACRO( %s, '%s' );\r\n", symbols[ i ].szSymbol.c_str(), symbols[ i ].szFriendly.c_str() );
//        }
//        
//        fclose( pDest );
//    }
    
    return 0;
}