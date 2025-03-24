/*Find Minimum in a Rotated Sorted Array */ 

#include <iostream>

using namespace std ;

int i , n ; 

int findPivot(int arr[], int size)
{
    //Write your code here.....
    int start, end , mid ; 
    
    start = 0; 
    end = size - 1 ; 
    
    while ( start <= end )  {
        
        mid = ( start + end ) / 2 ;
        
        if (  mid < end && arr[mid] > arr[mid+1] )  
        
            return mid + 1 ;
        
        else if (  arr[start] > arr[mid ] )
        
            end = mid ; 
            
            else if ( arr[mid] > arr[end] )
            
            start = mid ; 
            
        else 
        
            return 0;
    }
    
}


int main ( void ) {



return 0 ; 

}
