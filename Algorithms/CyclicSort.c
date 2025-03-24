#include<stdio.h>
#include<stdio.h>

int p = 0; 
  
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void cyclicSort(int arr[], int size)
{
    int i = 0;
    
    while(i < size)
    {
    
        int index = arr[i] - 1;
        
        if   (arr[i] != arr[index] )
        
            swap(&arr[index],&arr[i]);
            
        else
        
            i++;
    }
    
}
//Second Methind ....
void cyclicSort2(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] != i + 1)
        {
            int index = arr[i] - 1;
            
            swap(&arr[i], &arr[index]);
        }
        else
        
            i++;
    }
    
}

int duplicateNumber(int arr[], int size)
{
    
    int i = 0 ; 
    
    while ( i < size )  {
        
        if ( arr[ i ] != i + 1 )  {
            
            int index = arr[ i ] - 1 ;
            
            if (  arr[ i ] == arr[ index ] ) 
            
                return arr[ i ] ;
                
            else 
            
                swap( &arr[ i ] , &arr[ index ] ) ;
        }
        
        else 
        
            i ++ ; 
        
    }
    
    return ( -1 ) ; 
    
}

int missingNumber(int arr[], int size)
{
    int i = 0 ; 
    
    while ( i < size )  {
        
        int index = arr[ i ] - 1 ;
        
        if (  index != -1 && arr[ i ]  != arr[ index ] ) 
        
            swap( &arr[i], &arr[index] ) ;
        
        else 
        
            i ++ ; 
            
    }
    
    int j = 0; 
    
    for ( j = 0;  j < size ; j ++ ) {
        
        if ( arr[ j ] != j+1  ) 
        
            return (j+1) ; 
            
    }
    
    return (0) ;
    
}
int missingNumber2(int arr[], int size)
{
    int i = 0;
    
    while (i < size)
    {
    
        if (arr[i] < size && i != arr[i])
        
            swap(&arr[i], &arr[arr[i]]);
            
        else
        
            i++;
    }
    for (int i = 0; i < size; i++)
    
        if (arr[i] != i)
        
            return i;
            
    return size;
    
}

//Main Function Body ()v.....

int main()
{

    int arr[5] = {2,5,4,1,3};

    cyclicSort(arr,5);

    printf("After Cyclic Sort\n");

    int i;
    
    for(i = 0; i < 5; i++)
    
        printf("%d ",arr[i]);


    return 0;
    
}



