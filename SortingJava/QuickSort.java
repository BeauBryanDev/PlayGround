/*Quick Sort */

class QuickSort {

    static int partition(int arr[],int start,int end)
    {
        int pIndex = start;
        int pivot = arr[end];
        int i;
        
        for(i = start; i < end; i++)
        {
            if(arr[i] < pivot)
            {
            
                int t = arr[i];
                arr[i] = arr[pIndex];
                arr[pIndex] = t;
                pIndex++;
            }
        }
        
        int t = arr[end];
        arr[end] = arr[pIndex];
        arr[pIndex] = t;
        
        return pIndex;
    }
 
    static void quickSort(int arr[],int start,int end)
    {
        if(start < end) 
        {
        
            int pi = partition(arr,start,end);
            quickSort(arr,start,pi-1);
            quickSort(arr,pi+1,end);
            
        }
    }
 
    public static void main(String[] args) {
        
        int[] arr = new int[] {10, 45,75,15,25, 35,65,55,85,70,20,10, 50,95, 90};
        int n = arr.length;
        
        
        System.out.println("Array in sorted order : ");
        
        quickSort(arr,0,n-1);
        
        for(int i = 0; i < arr.length; i++)
        
            System.out.print(arr[i] + " ");
            
    }
    
}



