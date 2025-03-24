//Binary_Search () <algorithm>....

public class BinarySearch
{
    public int binarySearch(int arr[],int start,int end,int key)
    {
        while(start <= end)
        {
            int mid = (start + end) / 2;
   
            if(arr[mid] == key)
                return mid;
            
            if(arr[mid] < key)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }

    public static void main(String args[])
    {
    
        int arr[] = {9,13,15,17,19,21,23,25,27,33,37,39,43,45,47,51,54,59,63,65,67,75,76,79,81,84,85,86,92,94,96,98};
        int key = 45;
        int n = arr.length;
        
        System.out.println("SIze of Arr: "+n);

        BinarySearch obj = new BinarySearch();

        System.out.println("Searching Element: "+key);
        
        int start = 0; 
        int end   = n - 1 ;
        
        int searching = obj.binarySearch(arr,start, end, key );

        if (searching != -1 )
        
            System.out.println("Search Found @Index :"+searching);
        else
            System.out.println("Search Not Found");

        key = 84;
        
        searching = obj.binarySearch(arr,start, end, key );

        System.out.println("Searching Element: "+key);

        if ( searching != -1)
        
            System.out.println("Search Found @Index: "+searching);
        else
            System.out.println("Search Not Found");
            
    }
}






