/*Insertin Sort Algorithm */ 

class InsertionSort {
    static void insertionSort(int arr[],int size)
    {
        int i,value,index;

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

    public static void main(String[] args) {
        
        int[] arr = new int[] {40, 10, 50,65,34,13,94,25,56,47,24,38,86,76,42 ,30,39, 20,72};
        int n = arr.length;
        
        System.out.println("Array in sorted order : ");
        insertionSort(arr,n);
        
        for(int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
            
    }
    
}




