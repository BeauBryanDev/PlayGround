/*Selection _ Sort */ 

class SelectionSort {
    static void selectionSort(int arr[],int size)
    {
        int i,j;

        for(i = 0; i < size-1; i++)
        {
            for(j = i+1; j < size; j++) 
            {
                if(arr[i] > arr[j])
                {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
    }
    
    
    public static void main(String[] args) {
        
        int[] arr = new int[] {180, 165, 150, 170, 145,156,175,134,127,113,106,170,153,161,183,194};
        int n = arr.length;
        
        System.out.println("Array in sorted order : ");
        selectionSort(arr,n);
        
        for(int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
            
    }
    
}


