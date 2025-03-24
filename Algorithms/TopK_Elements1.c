/*Top K Numbers Using Max Heap */ 

#include<stdio.h>

#define SIZE 10 

int p = 0; 

//Get the top K element from Array by Heap DSA....
//GET TOP K ELEMENTS FROM ARRAY USING MAX_HEAP DSA...

//Functions Declaration for Conpiler ...

void getTopKElements(int arr[], int size, int k) ;
int kthSmallestNumber(int arr[], int size, int k) ;
void BuildHeap(int arr[], int size) ;
void Heapify(int arr[], int index, int size) ;
void swap(int *x, int *y) ;

//MAIN FUNCTION BODY .........

int main ( void )  {

    int myArr[] = { 45,78,34,24,89,12,56,72,94,54,24,36,48,12,6,86,42,32,28,68};
    
    int arrLngth = ( sizeof(myArr) / sizeof(myArr[0] ) ) ; 
    
    int k = 5 ;
    
    getTopKElements(myArr, arrLngth , k ) ; 

    printf("\nEOF}\n");
    
return 0; 

}


void getTopKElements(int arr[], int size, int k)
{
    
    BuildHeap( arr, size ) ;
    
    int i = 0 ; 
    int n = size ;
    
    
    while ( i < k ) {
        
        swap( &arr[0 ] , &arr[ n ] ) ;
        
        n -- ;
        
        Heapify( arr, 0, n ) ;
        
        i ++ ; 
    }
    
    for ( i = size ; i > size - k ; i -- )  
    
        printf("%d ", arr[ i ] ) ; 
}

//GET THE KTH SMALLEST NUMBER WITH MAX_HEAP FUNCTION ....

int kthSmallestNumber(int arr[], int size, int k)
{
    int n = k-1 ;
    
 	BuildHeap( arr, n ) ;
    
    int i = k ; 
    
    while ( i <= size ) {
        
        if ( arr[ i ] < arr[ 0 ]  ) {
            
            arr[ 0 ] = arr[ i ] ;
            
            Heapify( arr, 0, k-1 );
            
        }
        
        i ++ ; 
    }
    
    return arr[ 0 ] ; 
 	
}

void BuildHeap(int arr[], int size)
{
	int i;

	for(i = size / 2; i >= 0; i--)
		Heapify(arr, i, size);
}

void Heapify(int arr[], int index, int size)
{
	int left = 2 * index + 1;
	int right = left + 1;

	int max = index;

	if(left <= size && arr[left] > arr[max])
		max = left;

	if(right <= size && arr[right] > arr[max])
		max = right;

	if(index != max)
	{
		swap(&arr[max], &arr[index]);
		Heapify(arr, max, size);
	}
}

void swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
}



