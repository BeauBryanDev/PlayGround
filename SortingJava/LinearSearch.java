//Linear Search Java.Algorithms ....

public class LinearSearch
{
    public int linearSearch(int arr[], int size, int key)
    {
        int i;

        for(i = 0; i < size; i++)
            if(arr[i] == key)
                return i;

        return -1;
    }

    public static void main(String args[])
    {
        int arr[] = {86,91,34,50,10,45,39,22,13,67,64,32,78,93,24,56};
        int key = 50;
        int n = arr.length;

        LinearSearch obj = new LinearSearch();

        System.out.println("Searching Element: "+key);
        
        int d = obj.linearSearch(arr, n, key);

        if( d != -1 )   {
            System.out.println("Search Found @Position : "+d);
            //System.out.print(obj.linearSearch(arr,n,key) );
            
        } else {
        
            System.out.println("Search Not Found");
            
        }
    }
    
}

