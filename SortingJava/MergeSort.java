/*Merge Sort */ 

class MergeSort {

    static void merge(int arr[],int start,int mid,int end)
    {
        int temp[] = new int[end-start+1];

        int i,j,k;
        
        i = start;
        j = mid+1;

        k = 0;

        while(i <= mid && j <= end)
        {
            if(arr[i] < arr[j])
            
            {
                temp[k] = arr[i];
                i++;
                k++;
            }
            else 
            {
                temp[k] = arr[j];
                j++;
                k++;
            }
        }
        
        while(i <= mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }

        while(j <= end) 
        {
            temp[k] = arr[j];
            j++;
            k++;
        }

        k = 0;

        for(i = start; i <= end; i++)
        
            arr[i] = temp[k++];

    }
    
    static void mergeSort(int arr[],int start,int end)
    {
        if(start < end)
        {
            int mid = (start + end) / 2;
            mergeSort(arr,start,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,start,mid,end);
        }
    }
    
    public static void main(String[] args) {
        
        int[] arr = new int[] {5,15,65,25,35,55, 20,60,75,80,45, 30, 70, 10, 95, 85,90, 40};
        int n = arr.length;
        
        System.out.println("Array in sorted order : \n{");
        
        mergeSort(arr,0,n-1);
        
        for(int i = 0; i < arr.length; i++)
        
            System.out.print(arr[i] + " ");
            
        System.out.print(" }\n");
    }
}




