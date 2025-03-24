/* FIND THE TOP K ELEMENT FROM an ARRAY USING MIN HEAP DSA*/ 

#include<stdio.h>

int p = 0; 

//GET THE TOP K ELEMENT FROM ARRY WITHIN MIN_HEAP ...

void getTopKElements(int arr[], int size, int k)
{
    
 	BuildHeap( arr, k-1 ) ; 
    
    int i = 0;  
    
    for (  i = k ; i <= size ; i ++ )  {
        
        if ( arr[ i ] > arr[ 0 ] ) {
            
            arr[ 0 ] = arr[ i ] ;
            
            Heapify( arr, 0, k-1 ) ;
            
        }
    }
    
    for ( i = k-1 ; i>= 0; i -- ) 
    
        printf("%d ", arr[ i ] ) ; 
 	
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

	int min = index;

	if(left <= size && arr[left] < arr[min])
	
		min = left;

	if(right <= size && arr[right] < arr[min])
	
		min = right;

	if(index != min)
	{
		swap(&arr[min], &arr[index]);
		
		Heapify(arr, min, size);
	}
}

void swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
}



//MAIN FUNCTION BODY ....

int main ( void  )  {

    int myArr[] = { 45,78,34,24,89,12,56,72,94,54,24,36,48,12,6,86,42,32,28,68};
    
    int arrLngth = ( sizeof(myArr) / sizeof(myArr[0] ) ; 
    
    int k = 5 ;
    
    getTopKElements(myArr, arrLngth , k ) ; 


return 0 ; 

}


