/* Recursive Binary Search */ 
/* Divide and Conquer Approach 4 Binary Search */ 

function BinarySearch(arr, start, end, key)
{
    if(start <= end)
    {
        var mid = Math.floor((start + end) / 2);
        
        if(arr[mid] == key)
        
            return 1;
            
        if(arr[mid] < key)
        
            return BinarySearch(arr,mid+1,end,key);
            
        else
        
            return BinarySearch(arr,start,mid-1,key);
            
    }
    
    else
    
        return 0;
        
}

//Main Code Body ........

var arr = [10,23,45,70,90,100,111,123];

var key = 45;

if(BinarySearch(arr,0,arr.length-1,key) == 1)

    document.write("45 - Search Found");
    
else

    document.write("45 - Search Not Found");
    




