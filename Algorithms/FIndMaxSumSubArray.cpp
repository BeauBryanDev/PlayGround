/* Find the Max Sum of a k-SubArray in n-Array */ 
#include<iostream>
#include <climits>

using namespace std ; 

int n , k = 0; 
//MAX SUBARRAY WITHIN A GIVEN K VALUE INSIDE N-ARRAY ...
//BurteForce Approach ,,,,
void subArrayMaxSum( int *arr, int n, int k )  ; 
void subArrayMAxSumSW( int *arr, int n , int k ) ; 
int maxSubarraySum(int arr[], int n, int k) ;
//Smallest Subarray with a Given Sum ...
int smallLengthSubarraySum(int arr[], int n, int S) ; 

int main ( void )  {

    int MyArr[] = { 5,2,9,6,-2,8,1,6,7,9,6,3 } ; 
    
    n = sizeof(MyArr) / sizeof(MyArr[0] ) ; 
    k = 4 ;
    
    cout << " BRUTE FORCE APPROACH " << endl;
    subArrayMaxSum( MyArr, n, k ) ; 
    cout << " Slicing Windows Appproach " << endl;
    subArrayMAxSumSW( MyArr, n, k) ;
    cout << "\n" ;

return 0 ; 

}

void subArrayMaxSum(int arr[], int n, int k) {

    int max_sum = INT_MIN;

    for (int i = 0; i < n - k + 1; i++ ) {
    
        int current_sum = 0;
        
        for (int j = 0; j < k; j++ ) {
        
            current_sum += arr[i + j];
            
        }
        
        max_sum = max(max_sum,current_sum);
        
    }
    
    cout << "Max sum of subarray of size " << k << " is " << max_sum << endl;

}

void subArrayMAxSumSW( int *arr, int n , int k ) {

    int i = 0; 
    
    int wstart =  0; 
    int SubSum = 0 ; 
    
    for ( i = 0; i < n ; i ++ )  {
    
        SubSum = SubSum + arr[ i ] ; 
        
        if ( i >=  k-1   )  {
        
        
            cout<< SubSum << endl; 
            SubSum = SubSum - arr[ wstart] ; 
            wstart ++ ;     
       }
   }
  
}

int maxSubarraySum(int arr[], int n, int k)
{
    
    //Maximum Sum Subarray of Size K
    int i = 0 ;
    int wstart = 0, subSum = 0, max = 0; 
    
    for ( i = 0; i < n ; i ++ )  {
        
        subSum = subSum + arr[ i ] ; 
        
        if (  i >= k-1 ) {
            
            if ( subSum > max ) {
                
                max = subSum ;
            }
            else {
                
                max = max ; 
            }
            
            subSum = subSum - arr[ wstart ] ;
            wstart ++ ;
             
        }
    }
    
    return max ; 
    
}
//Smallest Subarray with a Given Sum........
int smallLengthSubarraySum(int arr[], int n, int S)
{
    int i = 0; 
    
    int wstart = 0 , subSum = 0 ;
    int len = INT_MAX ;
    
    for ( i = 0 ; i < n ; i ++ )  {
        
        subSum = subSum + arr[ i ] ;
        
        while ( subSum >= S )  {
            
            int currentWindowSize = i - wstart  + 1 ; 
            
            if ( len > currentWindowSize ) 
            
                len = currentWindowSize ;
                
            subSum = subSum - arr[ wstart ] ; 
            wstart ++ ; 
            
        }
    }
    
    return ( len == INT_MAX ) ? 0 : len ; 
    
}



