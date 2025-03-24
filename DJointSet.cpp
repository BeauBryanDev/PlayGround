/*DisJoint Set */ 

#include<iostream>

using namespace std;

void init(int arr[], int size);
void weighted_union(int arr[], int u, int v);
int find(int arr[], int u);
bool isConnected(int arr[], int u, int v);
void print_arr(int arr[], int size);


void init(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    
        arr[i] = -1;
}

void weighted_union(int arr[], int u, int v)
{
    int parent_of_u = find(arr,u);
    int parent_of_v = find(arr,v);

    if(arr[parent_of_u] < arr[parent_of_v])
    {
        arr[parent_of_u] += arr[parent_of_v];
        arr[parent_of_v] = u;
    }
    else
    {
        arr[parent_of_v] += arr[parent_of_u];
        arr[parent_of_u] = v;
    }
}

int find(int arr[], int u)
{
    int x = u;

    while(arr[x] > 0)
    
    {
        x = arr[x];
    }

    return x;
}

bool isConnected(int arr[], int u, int v)
{
    int parent_of_u = find(arr, u);
    int parent_of_v = find(arr, v);

    if(parent_of_u == parent_of_v)
    
        return true;
        
    else
    
        return false;
        
}

void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    
        cout<<arr[i]<<" ";
        
    cout<<endl;
}

int main()
{
    int arr[10];
    
    int size = sizeof(arr)/sizeof(arr[0]);

    init(arr,size);

    cout<<"Initial Array: ";
    print_arr(arr,size);
    
    weighted_union(arr, 1, 2);
    cout<<"union(1,2): ";
    print_arr(arr,size);

    weighted_union(arr, 3, 4);
    cout<<"union(3,4): ";
    print_arr(arr,size);

    weighted_union(arr, 4, 7);
    cout<<"union(4,7): ";
    print_arr(arr,size);

    weighted_union(arr, 3, 8);
    cout<<"union(3,8): ";
    print_arr(arr,size);

    weighted_union(arr, 1, 8);
    cout<<"union(1,8): ";
    print_arr(arr,size);

    cout<<"isConnected(2,7): ";
    if(isConnected(arr, 2, 7))
    
        cout<<"Connected"<<endl;
        
    else
    
        cout<<"Disconnected"<<endl;

   cout<<"isConnected(7,9): ";
   
   if(isConnected(arr, 7, 3))
   
        cout<<"Connected"<<endl;
        
    else
    
        cout<<"Disconnected"<<endl;
        

    return 0;
    
}


