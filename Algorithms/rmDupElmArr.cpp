#include<iostream>

using namespace std ; 


int rmDuplicates(int arr[], int n)
{

    int i = 0 ; 
    int lngth = 0;
    
    if ( n == 0 || n == 1 )
        
        return n;
    
    for ( i = 0; i < n - 1; i ++ )  {
        
        if ( arr[ i ] != arr[i+1 ]  )  {
            
            arr[ lngth++] = arr[ i ] ;
            
        }

    }
    
    arr[lngth++] = arr[n-1];
    
    return lngth;

}

void arrayRotate(int arr[], int n, int k)
{
    
    int j = 1;
    
    while ( j <= k  ) {
        
        int tmp = arr[n-1] ;
        int i ;
        
        for ( i = n-1 ; i>0; i --) {
            
            arr[i] == arr[ i-1 ] ; 
            
        }
        
        arr[0] = tmp;
        j ++ ;
    }

}

int main ( void )  {
	
	int myArr[20] = { 2,2,5,5,5,6,6,7,8,8,9,13,13,13,15,15,16,16,19,21};
	int my2Arr[10] = { 5,6,7,8,9,10,11,12,15,16,20 };
	int size = 10 ; 
	int size2 0 10; 
	
	int len = rmDuplicates( myArr, size);
	
	cout << "nEWaRRLEN " << len << endl; 
	
	

return 0; 

}
