/* FIN INTEGER SQRT OF  GIVEN NUMBER */ 

#include <iostream>

using namespace std;

static float sqrt(int n) {
    
    int start, end;
    float  mid ; 
    start = 1  ; 
    end =  n/2 ; 
    
    if ( n < 2 )  
    
        return n;
    
    while ( start <= end )  {
        
        mid = ( start + end ) / 2 ; 
        
        if (  mid * mid ==  n )
        
            return mid ; 
        
        else  if ( mid*mid < n ) 
        
            start = mid  + 1 ; 
            
        else 
        
            end = mid - 1 ; 
    
    }
    
    return end;
    
}

int main ( void )  { 
	
	int myNumber = 42; 
	
	float root2root = sqrt( myNumber ) ; 
	
	cout <<  " result " <<  root2root << endl;

return 0  ; 

}
