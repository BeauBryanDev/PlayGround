/* SORTING ALGORITHMS */ 

/* Selection Sort */ 

function selectionSort(arr, size)
{
    var i,j;

    for(i = 0; i < size-1; i++)
    {
        for(j = i+1; j < size; j++) 
        {
            if(arr[i] > arr[j])
            {
                [arr[i], arr[j]] = [arr[j], arr[i]];
            }
        }
    }
}

/* Bubble Sort */ 

function bubbleSort(arr, size)
{
    var i,j;
    for(i = 0; i < size-1; i++)
    {
        for(j = 0; j < size-1-i; j++) 
        {
            if(arr[j] > arr[j+1])
                [arr[j], arr[j+1]] = [arr[j+1], arr[j]];
        }
    }
}
/* Insertion Sort */ 

function insertionSort(arr, size)
{
    var i,value,index;

    for(i = 1; i < size; i++)
    {
        value = arr[i];
        index = i;

        while(index > 0 && arr[index-1] > value)
        {
            arr[index] = arr[index-1];
            index--;
        }

        arr[index] = value;
    }
}

/* Heap Sort */ 
function BuildHeap(arr, size)
{
    var i = Math.floor(size / 2);
    
    for(; i >= 0; i--)
    
        Heapify(arr,i,size);
}

function Heapify(arr, index, size)
{
    var left = 2 * index + 1;
    var right = left + 1;
    
    var max = index;
    
    if(left <= size && arr[left] > arr[max])
    
        max = left;
        
    if(right <= size && arr[right] > arr[max])
    
        max = right;
        
    if(index != max)
    {
        [arr[max], arr[index]] = [arr[index], arr[max]];
        
        Heapify(arr,max,size);
    }
}

function HeapSort(arr, size)
{
    BuildHeap(arr,size);

    while(size > 0)
    {
    
        [arr[0], arr[size]] = [arr[size], arr[0]]
        
        size--;
        
        Heapify(arr,0,size);
    }
}
/* Quick Sort Algorithm  by 2 */ 
// Implementation of Partition Function - Quick Sort ...
function partition(arr, start, end)
{
    var pIndex = start;
    var pivot = arr[end];
    var i;
    
    for(i = start; i < end; i++)
    {
        if(arr[i] < pivot)
        {
            [arr[i], arr[pIndex]] = [arr[pIndex], arr[i]];
            
            pIndex++;
        }
    }
    
    [arr[end], arr[pIndex]] = [arr[pIndex], arr[end]];
    
    return pIndex;
}

function quickSort(arr, start, end)
{
    if(start < end) 
    {
        var pi = partition(arr,start,end);
        quickSort(arr,start,pi-1);
        quickSort(arr,pi+1,end);
    }
}
/* MergeSort Algorithm */ 
//Implementation of Merge Sorting */ 
function merge(arr, start, mid, end)
{
    var temp = [end-start+1];

    var i,j,k;
    
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

function mergeSort(arr, start, end)
{
    if(start < end)
    {
        var mid = Math.floor((start + end) / 2);
        
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

// SORTING RSLTS // 
// Main Code Body ......
//Check Selection Sorting....
var n1 = 5;
var arr1 = [180, 165, 150, 170, 145];

document.write("Array in sorted order : ");
selectionSort(arr1,n1);

for(var i = 0; i < arr1.length; i++)

    document.write(arr1[i]);
    
//Check for Bubble Sorting ...
var n2 = 5;
var arr2 = [50, 25, 5, 20, 10];

document.write("Array in sorted order : ");
bubbleSort(arr2, n2);

for(var i = 0; i < arr2.length; i++)

    document.write(arr2[i]);

//Check for Insertion Sorting ......

var 3n = 5;
var arr3 = [40, 10, 50, 30, 20];

document.write("Array in sorted order : ");
insertionSort(arr3, n3);

for(var i = 0; i < arr3.length; i++)

    document.write(arr3[i]);
  
//Check for HeapSorting Algorithm .....

var n4 = 7;
var arr4 = [80, 30, 60, 10, 20, 40, 50];

document.write("Array in sorted order : ");
HeapSort(arr4, n4-1);

for(var i = 0; i < arr4.length; i++)
    document.write(arr4[i]);
    
// Check for Quick Sorting Algorithm .....

var n5 = 5;
var arr5 = [10, 25, 3, 50, 20];

document.write("Array in sorted order : ");
quickSort(arr5,0,n5-1);

for(var i = 0; i < arr5.length; i++)
    document.write(ar5r[i]);

//Check for Merge Sorting Algorithms ....

var n8 = 8;
arr8 = [5, 20, 30, 45, 10, 25, 28, 40];

document.write("Array in sorted order : ");
mergeSort(ar8r,0,n8-1);

for(var i = 0; i < arr8.length; i++)
    document.write(arr8[i]);


//EOF ....

  
    
    



    


