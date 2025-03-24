/*Searching for Index in HashTable by linear_Probing*/

class HashTable {
    static final int SIZE = 5;
    int arr[] = new int[SIZE];

    public HashTable() 
    {
        int i;
        for(i = 0; i < SIZE; i++)
            arr[i] = -1;
    }

    int insert(int value)
    {
        int key = value % SIZE;
        int index = key;

        while(arr[index] != -1)
        {
            index = (index + 1) % SIZE;

            if(index == key)
            {
                System.out.println("Hash Table Full");
                return -1;
            }
        }

        arr[index] =  value;

        return index ;
    }
    
    int del(int value) 
    {
        int key = value % SIZE;
        int index = key;
    
        while(arr[index] != value)
        {
            index = (index + 1) % SIZE;
    
            if(index == key)
                return 0;
        }
    
        arr[index] = -1;
    
        return 1;
    }
    
    int search(int value)
    {
        int key = value % SIZE;
        int index = key;
        
        while(arr[index] != value)
        {
            index = (index + 1) % SIZE;
            
            if(index == key)
                return -1;
        }
        
        return index;
    }
    
    public static void main(String[] args) {
        HashTable hash_table = new HashTable();                
     
        // INSERT
        hash_table.insert(10);
        hash_table.insert(4);
        hash_table.insert(2);
        hash_table.insert(15);
        hash_table.insert(5);
        
        // DELETE
        hash_table.del(5);
        hash_table.del(50);
        
        System.out.println("Elements 10, 4, 2, 15 are present in the hash table");
        
        // SEARCH
        if(hash_table.search(15) != -1 )
             System.out.println("15 - Search Found at Index "+hash_table.search(15));
        else
             System.out.println("15- Search Not Found");
             
        
        if(hash_table.search(4) != -1)
             System.out.println("4 - Search Found at Index: "+hash_table.search(4));
        else
             System.out.println("4 - Search Not Found");         
             
    }    
    
}





