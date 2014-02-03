#include <cstdio>
#include <string>
#include <vector>

std::vector<std::string> gaszLines;

void doHackery( FILE* pFile )
{
    gaszLines.clear();

    fseek( pFile, 0, SEEK_END );
    const int len = ftell( pFile );
    rewind( pFile );
    char* buf = new char[ len ];
    fread( buf, 1, len, pFile );
    rewind( pFile );

    int pos = 0;
    gaszLines.push_back( "" );
    for( int i = 0; i < len; ++i )
    {
        if( buf[ i ] == '\n' )
        {
            ++pos;
            gaszLines.push_back( "" );
        }
        else
        {
            gaszLines[ pos ] += buf[ i ];
        }
    }

    delete[] buf;
}
