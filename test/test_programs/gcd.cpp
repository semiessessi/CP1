#include <stdio.h>

int readint_r( int val )
{
    int c = getchar();
    if( ( c < '0' ) || ( c > '9' ) )
    {
        return val;
    }
    
    return readint_r( val * 10 + ( c - '0' ) );
}

int readint()
{
    return readint_r( 0 );
}

void putint_r( int val, int test, bool written )
{
    if( test > 0 )
    {
        int digit = val / test;
        if( ( digit > 0 ) || written )
        {
            putchar( digit + '0' );
            int newval = val - digit * test;
            putint_r( newval, test / 10, 1 );
        }
        else
        {
            putint_r( val, test / 10, 0 );
        }
    }
}

void putint( int val )
{
    putint_r( val, 1000000000, 0 );
}

int gcd( int a, int b )
{
    if( b == 0 )
    {
       return a;
    }
    
    return gcd( b, a % b );
}

int main( int, char** )
{
    puts( "Input a number:" );
    int a = readint();
    
    puts( "Input another number:" );
    int b = readint();
    
    puts( "GCD:" );
    putint( gcd( a, b ) );
    
    return 0;
}
