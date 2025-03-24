class HeapSort {
    static void BuildHeap(int arr[],int size)
    {
        int i = size / 2;
        for(; i >= 0; i--)
            Heapify(arr,i,size);
    }
    
    static void Heapify(int arr[],int index,int size)
    {
        int left = 2 * index + 1;
        int right = left + 1;
        int max = index;
        if(left <= size && arr[left] > arr[max])
            max = left;
        if(right <= size && arr[right] > arr[max])
            max = right;
        if(index != max)
        {
            int temp = arr[max];
            arr[max] = arr[index];
            arr[index] = temp;
            Heapify(arr,max,size);
        }
    }
    
    static void HeapSort(int arr[],int size)
    {
        BuildHeap(arr,size);

        while(size >= 0)
        {
            int t = arr[0];
            arr[0] = arr[size];
            arr[size] = t;
            size--;
            Heapify(arr,0,size);
        }
    }
 
    public static void main(String[] args) {
        
        int[] arr = new int[] {80,15 , 30,25,45, 60, 10,65, 20,85, 40,95, 50,35,75,55,90};
        int n = arr.length;
        
        System.out.println("Array in sorted order : ");
        HeapSort(arr,n-1);
        
        for(int i = 0; i < arr.length; i++)
        
            System.out.print(arr[i] + " ");
    }
    
}

