
#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[],int start,int end)
{
    int pIndex = start;
    int pivot = arr[end];
    int i;

    for(i = start; i < end; i++)
    {
        if(arr[i] < pivot)
        {
            swap(&arr[i],&arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[end],&arr[pIndex]);

    return pIndex;
}
 
void quickSort(int arr[],int start,int end)
{
    if(start < end) 
    {
        int pi = partition(arr,start,end);
        quickSort(arr,start,pi-1);
        quickSort(arr,pi+1,end);
    }
}
 
int main() 
{
    int n = 15;
    int arr[15] = {25,1,5,9,7,3,17,19,13,37,15,11,23,27,29};
    
    cout << "Array in sorted order : ";
    quickSort(arr,0,n-1);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << endl;

    return 0;

}


