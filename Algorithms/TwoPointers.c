/*TWO POINTERS */ 
#include<stdio.h>
#include<limits.h>

int c = INT_MAX ;
//Pair with targer Sum ....
int hasPairWithTarget(int arr[], int n, int target) ;
//Remove All Occurrences of an Element from Array
int removeElement(int arr[], int n, int val) ;
// Move All Zeros to the End ....
void moveZeroes(int arr[], int n) ;
// Move All 0s to the End of array Second Approach II ...
void moveZeroes2(int arr[], int n) ;
// Move All 0s to the End of array 3rd Approach ..
void moveZeroes3(int arr[], int n) ;
// Remove Duplicates from Sorted Array ....
int rmDuplicates(int arr[], int n) ;

int main(void)
{

//Pair with Target Sum ...
    int arr1[] = {1,5,10,20,80};
    int target = 30;
    int size1= sizeof(arr) / sizeof(arr[0]);

    int res1 = hasPairWithTarget(arr1, size1, target);

    printf("%d\n", res1);
    
//Remove Elelments ...    
    int arr2[] = {4,7,6,7,8,7,7};
    int val = 7;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int newLen = removeElement(arr2, size2, val);

    printf("%d\n", newLen);

    for (int i = 0; i < newLen; i++)
    
        printf("%d ", arr2[i]);
        
    printf("\n");
    
    int arr[] = {1, 0, 1, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZeroes2(arr, size);

    for (int i = 0; i < size; i++)
    
        printf("%d ", arr[i]);
        
    printf("\n");
    
    int arr[] = {5,5,5,6,6,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newLen = removeDuplicates(arr, size);

    printf("%d\n", newLen);

    for (int i = 0; i < newLen; i++)
    
        printf("%d ", arr[i]);
    
    return (0);
}

int hasPairWithTarget(int arr[], int n, int target)
{
    int start, end, sum = 0;
    
    start = 0;
    end   = n - 1 ; 
    
    while ( start < end )  {
        
        sum = arr[ start ] + arr[ end ] ; 
        
        if ( sum == target )  
        
            return 1 ; 
            
        else if ( sum < target ) 
        
            start ++ ; 
        
        else 
            
            end -- ; 
            
    }
    
    return 0;
    
}
// Remove All Occurrences of an Element from Array ....
int removeElement(int arr[], int n, int val)
{
    
    int i , newLen = 0; 
    
    for ( i = 0;  i < n ; i ++ )  {
        
        if ( arr[ i ]  != val ) {
            
            
            arr[ newLen ] = arr[ i ] ;
            newLen ++ ;
            
        }
    }
    
    return newLen ; 
    
}
//Move All Zeros to the End
void moveZeroes(int arr[], int n)
{
    int i, newLen = 0 ; 
    
    for ( i = 0; i < n ; i ++ ) {
        
        if ( arr[ i ] != 0 ) {
            
            arr[ newLen ] = arr[ i ] ; 
            
            newLen ++ ; 
            
        }
    }
    
    for ( i = newLen ; i < n ; i ++ ) 
    
        arr[ i ] = 0; 
        
}
//Move All Zeros to the End 2nd Approach ....
void moveZeroes2(int arr[], int n)
{
    int start, end, temp;

    start = 0;
    end = n - 1;

    while (start < end)
    {
        if (arr[start] == 0)
        {
            if (arr[end] == 0)
            {
                end--;
            }
            
            temp = arr[start];
            arr[start++] = arr[end];
            arr[end--] = temp;
        }
        else
        {
            start++;
        }
    }
}
//Third Approcach ....
void moveZeroes3(int arr[], int n) {

    int i , newLen = 0 ; 
    
    for ( i = 0; i < n ; i ++ ) {
 
 	if ( arr[ i ] == 1 )  
 
            arr[ newLen ++ ] = arr[ i ] ; 
            
   }
   
   while ( newLen < n )  {
   
       arr[ newLen ++ ]  = 0 ; 
       
    }
  
}
     
int rmDuplicatesN(int arr[], int n)
{
    if ( n < 2 ) 
    
        return n ; 
        
    int i, len = 0; 
    
    for ( i = 0; i< n-1 ; i ++ )  {
    
	if ( arr[ i ]  != arr[ i +1 ] ) 
    
            arr[ len++ ] = arr[ i ]  ; 
    
    }
    arr[ len ++ ] = arr[ n - 1 ]  ; 
    
    return len ; 

} 
//REMOVE DUPLICATE THE RIGHT VERSION  ... { SORTED ARRAY  } \n ...
int removeDuplicates(int arr[], int n)
{
  
  if ( n <= 2 ) 
  
    return n;
    
 int i, Len = 0; 
 
 arr[ Len++ ] = arr[ 0 ] ;
 
 for ( i = 1; i < n-1 ; i++ )  {
     
    if ( arr[ i-1 ] != arr[ i+1 ] ) 
    
        arr[ Len ++ ] = arr[ i ] ; 
        
    }
    arr[ Len++ ]  = arr[ n-1 ] ; 
    
    return Len ;
    
}



