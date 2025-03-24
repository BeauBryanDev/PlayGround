#include<iostream>

using namespace std ; 

int strLength( char str[], index ) {

    static int lngth = 0; 
    
    if ( str[index] == '\0' ) 
    
        return lngth;
        
    lngth ++;
    
    return strLength(str, index+1) ;
    
}


int main ( void )  {



teturn 0; 

}


