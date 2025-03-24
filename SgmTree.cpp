/*Segement Tree */ 

#include <iostream>
#include <math.h>
using namespace std;

int buildSTUtil(int arr[], int ss, int se, int *stree, int sindex)
{
    if(ss == se)
    {
        stree[sindex] = arr[ss];
        return stree[sindex];
    }
    else
    {
        int mid = (ss + se) / 2;
        int left = 2 * sindex + 1;
        int right = left + 1;
        stree[sindex] = buildSTUtil(arr, ss, mid, stree, left) +
                       buildSTUtil(arr, mid + 1, se, stree, right);
        return stree[sindex];
    }
}
int* buildST(int arr[], int n)
{
    int h = (int)(ceil(log2(n)));
    int max_size = 2 * (int)pow(2, h) - 1;
    int *st = new int[max_size];
    buildSTUtil(arr, 0, n-1, st, 0);
    return st;
}
void updateUtil(int stree[], int ss, int se, int index, int diff, int sindex)
{
    if(index < ss || index > se)
        return;
    stree[sindex] = stree[sindex] + diff;
    if(ss != se)
    {
        int mid = (ss + se) / 2;
        int left = 2 * sindex + 1;
        int right = left + 1;
        updateUtil(stree, ss, mid, index, diff, left);
        updateUtil(stree, mid+1, se, index, diff, right);
    }
}
void update(int arr[], int stree[], int n, int index, int new_val)
{
    if(index < 0 || index > n - 1)
        return;
    int diff = new_val - arr[index];
    arr[index] = new_val;
    updateUtil(stree, 0, n-1, index, diff, 0);
}
int queryUtil(int stree[], int ss, int se, int qs, int qe, int sindex)
{
    if(qs <= ss && qe >= se)
        return stree[sindex];
    if(se < qs || ss > qe)
        return 0;
    int mid = (ss + se) / 2;
    int left = 2 * sindex + 1;
    int right = left + 1;
    return queryUtil(stree, ss, mid, qs, qe, left) +
           queryUtil(stree, mid + 1, se, qs, qe, right);
}
int query(int *stree, int n, int qs, int qe)
{
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        cout<<"Invalid Input";
        return -1;
    }
    return queryUtil(stree, 0, n-1, qs, qe, 0);
}
void printArr(int arr[], int size)
{
    cout<<"The array elements are:"<<endl;
    for(int i = 0; i < 6; i++)
        cout<<arr[i]<<" ";
        
    cout<<endl;
}

int main()

{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printArr(arr,6);
    cout<<"Constructing Segment Tree..."<<endl;
    int *st = buildST(arr,6);
    cout<<"Sum of Range(1,3) = "<<query(st,6,1,3)<<endl;
    cout<<"Update: arr[3] = 10"<<endl;
    update(arr, st, 6, 3, 10);
    printArr(arr,6);
    cout<<"After the Update:"<<endl;
    cout<<"Sum of Range(1,3)= "<<query(st,6,1,3)<<endl;
    return 0;
    
}



