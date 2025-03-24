/* Array Data Structures >functions */ 
#include<iostream>

using namespace std ; 

void reverse_words(char str[])
{
    int i = 0; 
    int wstart = 0;
    int lngth = length( str ) ; 
    
    while ( str[i] != "\0" ) {
        
        if ( str[ i ] == ' ' ) {
            
            reverse( str, wstart, i -1 ) ;
            wstart = i + 1 ;
        }
        
        i ++;
    }

    reverse( str , wstart, lngth - 1 );

}

int main ( void )  {


return 0 ; 

}

private static void reverse(char[] str)
{
    //write your code here........
    
    int i, start = 0;
    int end =  _strLen( str ) - 1 ; 
    
    while ( start < end ) {
        
        if ( isAlphabet( str[ start ] ) )  {
            
            start ++;
        }
        else if ( isAlphabet( str[ end ] ) ) {
            
            end -- ;
        }
        else {
            
            char tmp = str[ start] ; 
            
            str[ start ] = str[ end ] ;
            str[ end ]   = tmp ;
            
            start ++ ;
            end --  ;
        }
        
    }
    
}

private static boolean isAlphabet( char ch ) {
    
    boolean chchck = ( (  ch >= 'A' && ch <= 'Z' ) || ( ch >= 'a' &&  ch <= 'z' ) ) ; 
    
    return chchck;
    
}

private static int _strLen(char str[])
{
    int len = 0;
    
    for (len = 0; str[len] != '\0'; len++);
    
    return (len);
}


