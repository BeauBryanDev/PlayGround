#include <iostream>

using namespace std;

void insertionSort(int arr[],int size)
{
    int i,value,index;

    for(i = 1; i < size; i++)
    {
        value = arr[i];
        index = i;

        while(index > 0 && arr[index-1]  > value )
        {
            arr[index] = arr[index-1];

            index--;
        }

        arr[index] = value;
    }
}

int main() 
{
    int n = 15;
    int arr[15] = {40,35,13, 10,25,15,45,65,95,85, 50, 30,75,17, 20 };
    
    cout << "Array in sorted order : ";
    insertionSort(arr,n);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
