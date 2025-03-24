/*Peak Index in a Mountain Array */ 
#include<iostream>

using namespace std ; 

int i ;

int findPeakElementInBitonicArray(int arr[], int size)
{
    //Write your code here..
    
    int start, end, mid ; 
    
    start = 0 ; 
    end = size - 1 ; 
    
    while ( start <= end )  { 
        
        mid =  ( start  + end ) / 2 ; 
        
        if (  arr[ mid ] > arr[mid - 1] && arr[mid] > arr[mid + 1] ) {
            
            return mid;
        }
        else if ( arr[mid] >arr[mid - 1 ]  ) { 
         
               start = mid + 1 ;
        }
        else {
            
            end =  mid ;
        }
    }

}

int main ( void )  { 

	int n = 10 ; 
	int myArr[n] = { 9,15,21,24,27,35,39,25,24,18} ;
	
	int position = findPeakElementInBitonicArray(myArr, n ) ; 
	
	cout << "Max Array Index found at position:\t" << position << endl;
	
	cout << "\n";
	
return 0 ; 

}


/*
int searchMountainArray(int arr[], int size, int n)
{
    //Write your code here......
    int peakest , res ; 
    
    peakest = findPeakElementInBitonicArray(int arr[], int size);
    
    res = binarySearch( arr, n, 0, peakest ) ; 
    
    if ( res ==  -1 ) 
    
        res = revBinarySearch( arr, n, peakest, size-1 ) ;
        
    return res 
    
}

int binarySearch( int arr[], int n , int start, int end )  {
    
    int mid ; 
    
    while (> start z= end )  {
        
        mid =  ( start + end ) / 2 ; 
        
        if ( arr[ mid ] == n )  
        
            return mid ; 
            
        else if ( arr[mid ] < n ) 
        
            start = mid + 1 ; 
        else 
            end = mid - 1 ; 
    }
    
}

int revBinarySearch( int arr[] , int n , int start, int end ) {
    
    int mid  ;
    
    while ( start <= end )  {
        
        mid =  ( start + end )  / 2 ; 
        
        if ( arr[ mid ] == n )  
        
            return mid ; 
            
        else if  ( arr[mid ] < n )
        
            end = mid - 1 ;
        else 
            start = mid + 1 ; 
    }
    
}

*/


