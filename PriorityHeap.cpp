//Priority HeapifyFunctions ....

#include<iostream>
#include<vector>

using namespace std;

void BuildHeap(vector<int> &heap, int size);
void Heapify(vector<int> &heap, int index, int size);
void swap(int *x, int *y);
void insert(vector<int> &heap,int val);
int getHighestPriority(vector<int> &heap);
void printHeap(vector<int> &heap);

void insert(vector<int> &heap, int val)
{
    int size = heap.size();

    if(size == 0)
    
        heap.push_back(val);
        
    else
    {
        heap.push_back(val);
        
        BuildHeap(heap,heap.size()-1);
    }
}

int getHighestPriority(vector<int> &heap)
{
    int size = heap.size();

    if(size == 0)
    
        return -1;
    
    return heap[0];
}

void deleteHighestPriority(vector<int> &heap)
{
    int size = heap.size();

    if(size == 0)
    
        cout<<"Priority Queue is Empty"<<endl;
    else
    {
        swap(&heap[0],&heap[size-1]);

        cout<<"Removing Highest Priority Element: "<< heap[size-1]<<endl;
   
        heap.pop_back();

        BuildHeap(heap,heap.size() - 1);
    }
}

void BuildHeap(vector<int> &heap, int size)
{
    for(int i = size / 2; i >= 0; i--)
    
        Heapify(heap, i, size);
}

void Heapify(vector<int> &heap, int index, int size)
{

    int left = 2 * index + 1;
    int right = left + 1;

    int max = index;

    if(left <= size && heap[left] > heap[max])
        max = left;

    if(right <= size && heap[right] > heap[max])
        max = right;

    if(index != max)
    {
        swap(&heap[max], &heap[index]);
        
        Heapify(heap, max, size);
    }
}

void swap(int *x, int *y)
{
        int temp = *x;
        *x = *y;
        *y = temp;
}

void printHeap(vector<int> &heap)
{
    if(heap.size() == 0)
    
        cout<<"Priority Queue is Empty"<<endl;
    else
    {
        cout <<"Priority Queue: ";

        for(int i = 0; i < heap.size(); i++)
        
            cout << heap[i] << " ";

        cout<<endl;
    }
    
}


int main()
{
    vector<int> heap;
    
    cout<<"Initial: ";
    printHeap(heap);

    cout<<"Insert(2): ";
    insert(heap,2);
    printHeap(heap);

    cout<<"Insert(5): ";
    insert(heap,5);
    printHeap(heap);

    cout<<"Insert(10): ";
    insert(heap,10);
    printHeap(heap);

    cout<<"Insert(15): ";
    insert(heap,15);
    printHeap(heap);

    cout<<"Insert(8): ";
    insert(heap,8);
    printHeap(heap);

    cout<<"Insert(20): ";
    insert(heap,20);
    printHeap(heap);
    
    cout<<"Insert(25): ";
    insert(heap,25);
    printHeap(heap);
    
        cout<<"Insert(35): ";
    insert(heap,35);
    printHeap(heap);
    
        cout<<"Insert(45): ";
    insert(heap,45);
    printHeap(heap);
    
        cout<<"Insert(3): ";
    insert(heap,3);
    printHeap(heap);
    
    
    //Removing 4 elements & keeping last 2
    while(heap.size() != 3)
    {
        deleteHighestPriority(heap);
        printHeap(heap);
    }

    cout<<"Insert(50): ";
    insert(heap,50);
    printHeap(heap);
   
    cout<<"Insert(34): ";
    insert(heap,34);
    printHeap(heap);

    //Removing all the elements
    while(heap.size() != 0)
    {
        deleteHighestPriority(heap);
        printHeap(heap);
    }    

    return 0;

}



