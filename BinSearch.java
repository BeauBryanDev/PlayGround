/* Simple Binary Search Algorith */

class BinSearch {

    int Binary_Search( int arr[]  , int start , int end, int key )  {
    
    int  mid ; 
    
    while ( start <= end )   {
    
	mid = ( start + end )  / 2 ;
	
	if ( arr[mid]  == key )  
		
		return 1;
		
	if ( arr[mid] < key )
	
		start = mid + 1;
	else  
		end = mid - 1 ;
				    
    	}
	return 0;
    }
    
        public static void main(String[] args) {
        int arr[] = {10,23,56,86,35,37,57,65,89,97,24,69,18,64,76,45,28,30,32,106,119,114,113,117,101,94,72,45,70,90,100,111,123};
        int key = 45;
        int n = arr.length;
        
        BinSearch obj = new BinSearch();
        
        int rslt =  obj.Binary_Search(arr,0,n-1,key) ;
        
        if( rslt != 0 )
        
            System.out.println("45 - Search Found at position "+rslt);
            
        else
        
            System.out.println("45 - Search Not Found");
            
        System.out.println("Array.Length:\t"+n);
    }

}



