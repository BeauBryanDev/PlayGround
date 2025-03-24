/*Bubble Sorting <Algorithm> */

class BubbleSort {
 
    static void bubbleSort(int arr[],int size)
    {
        int i,j;

        for(i = 0; i < size-1; i++)
        
            int flag = 0; 
        {
            for(j = 0; j < size-1-i; j++) 
            {
                if(arr[j] > arr[j+1])
                {
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                    flag = 1 ; 
                }
            }
            
            if ( flag == 0 ) 
            
                break; 
        }
    }
    
    public static void main(String[] args) {
        
        int[] arr = new int[] {50, 45,37,69,25,13,42,78, 5,35,89,76, 20,27,18,56, 10,84,92};
        int n = arr.length;
        
        System.out.println("Array in sorted order : ");
        bubbleSort(arr,n);
        
        for(int i = 0; i < arr.length; i++)
        
            System.out.print(arr[i] + " ");
            
    }
    
}



