#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
    
void Heapify(int arr[],int index,int size)
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
        swap(&arr[max],&arr[index]);
        Heapify(arr,max,size);
    }
}

void BuildHeap(int arr[],int size)
{
    int i = size / 2;

    for( i = size / 2 ; i >= 0; i--)
        Heapify(arr,i,size);
}
    
void HeapSort(int arr[],int size)
{
    BuildHeap(arr,size);

    while(size > 0)
    {
        int t = arr[0];
        arr[0] = arr[size];
        arr[size] = t;
        size--;

        Heapify(arr,0,size);
    }
}

int main() 
{
    int n = 12;
    int arr[12] = {80, 30, 45, 60, 10, 65, 75, 25,20, 40, 50,15};
    
    cout << "Array in sorted order : ";
    HeapSort(arr,n-1);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
