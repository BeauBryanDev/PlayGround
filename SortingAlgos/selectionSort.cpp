//Selection __ Sorting Algortihms.....
#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[],int size)
{
    int i,j;

    for(i = 0; i < size-1; i++)
    {
        for(j = i+1; j < size; j++) 
        {
            if(arr[i] > arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
}

int main() 
{
    int n = 5;
    
    int arr[5] = {180, 165, 150, 170, 145};
    
    cout << "Array in sorted order : ";
    selectionSort(arr,n);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
    cout << endl;

    return 0;

}



