
#include <iostream>

using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    int temp[end-start+1];

    int i,j,k;
    
    i = start;
    j = mid+1;

    k = 0;

    while(i <= mid && j <= end)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else 
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= end) 
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    k = 0;

    for(i = start; i <= end; i++)
        arr[i] = temp[k++];

}
    
void mergeSort(int arr[],int start,int end)
{
    if(start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
    
int main() 
{
    int n = 8;
    int arr[8] = {5, 20, 30, 45, 10, 25, 28, 40};
    
    cout << "Array in sorted order : ";
    mergeSort(arr,0,n-1);
    
    for(int i = 0; i < 8; i++)
        cout << arr[i] << " ";

    cout << endl;
    
    return 0;

}



