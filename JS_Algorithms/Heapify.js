/* Constructiong a Binary Heap */
/Heapify Function */ 

//FUNCTION TO BUILD UP A HEAP BASED ON A NON-SORTED ARRAY....
function BuildHeap(arr, size)
{
    var i = size / 2;
    
    for(; i >= 0; i--)
    
            Heapify(arr,i,size);
}
//FUNCTION TO HEAPUFY AN ARRAY IN ORDER TO CONSTRUCT A COMPLETE MAX - HEAP. ...
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
    //SWAP ELEMENTS TO MATCH HEAPIFY...
            var temp = arr[max];
            arr[max] = arr[index];
            arr[index] = temp;
            //CALL HEAPIFY ( )  FUNCTION AGAIN AS RECURSION ....
            Heapify(arr,max,size);
    }
}
//FUNCTION TO PRINT A COMPLETE SORTED HEAP. ...
function print(arr)
{
    for(var i = 0; i < arr.length; i++)
    
        document.write(arr[i]+" ");
        
    document.write("<br>");
}
//DELETE MAX ELEMMENT FROM A BINARY HEAP, THEN HEAPIFY AGAIN ....
function DeleteMax(arr, size)
{
    [arr[0], arr[size]] = [arr[size], arr[0]];

    document.write("Max = "+arr[size]+"<br>");
    arr.pop();

    Heapify(arr, 0, arr.length - 1);
}

var arr = [10, 20, 40, 30, 80, 60, 50];

document.write("The Array Elements Are:<br>");

print(arr);

document.write("Constructing Heap...<br>");

BuildHeap(arr, arr.length - 1);

document.write("The Array Elements Are:<br>");

print(arr);

DeleteMax(arr, arr.length - 1);

document.write("The Array Elements Are:<br>");

print(arr);

DeleteMax(arr, arr.length - 1);

document.write("The Array Elements Are:<br>");

print(arr);




