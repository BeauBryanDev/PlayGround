/* SEARCHING ALGORITHMS */ 

function linearSearch(arr, size, key)
{
    var i;
    
    for(i = 0; i < size; i++)
        if(arr[i] == key)
            return i;
        
        return -1;
}

function binarySearch(arr, start, end, key) 
{
    while(start <= end)
    {
        var mid = Math.floor((start + end) / 2);
        
        if(arr[mid] == key)
            return mid;
        
        if(arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return 0;
}


var arr = [86,91,34,50,0];

var key = 50;

if(linearSearch(arr,arr.length,key) != -1 )
    document.write(key + "Search Found at Position: "+ linearSearch(key) <br>");
else
    document.write(key + "Search Not Found<br>");

var arr = [10,23,45,70,90,100,111,123];

var key = 45;

if(binarySearch(arr,0,arr.length-1,key) == 1)
    document.write( key + "Search Found at Position :" + BinarySearch(key) <br>");
else
    document.write("45 - Search Not Found<br>");

