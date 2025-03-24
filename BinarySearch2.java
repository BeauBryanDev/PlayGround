/*Binary Search by Using Recursion */

class BinarySearch {
    int BinarySearch(int arr[],int start,int end,int key)
    {
        if(start <= end)
        {
            int mid = (start + end) / 2;
            if(arr[mid] == key)
                return mid;
            if(arr[mid] < key)
                return BinarySearch(arr,mid+1,end,key);
            else
                return BinarySearch(arr,start,mid-1,key);
        }
        else
            return 0;
    }
    
    public static void main(String[] args) {
        int arr[] = {10,23,56,86,35,37,57,65,89,97,24,69,18,64,76,45,28,30,32,106,119,114,113,117,101,94,72,45,70,90,100,111,123};
        int key = 45;
        int n = arr.length;
        
        BinarySearch obj = new BinarySearch();
        int rslt =  obj.BinarySearch(arr,0,n-1,key) ;
        
        if( rslt != 0 )
        
            System.out.println("45 - Search Found at position "+rslt);
            
        else
        
            System.out.println("45 - Search Not Found");
            
            
        System.out.println("Array.Length:\t"+n);      
    }
    

}




