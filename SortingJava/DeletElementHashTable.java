/*Delete Element from Hash Table .*/

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
                return 0;
            }
        }

        arr[index] =  value;

        return 1;
    }
    
    int del(int value) 
    {
        int key = value % SIZE;
        int index = key;
    
        while(arr[index] != value)
        {
            index = (index + 1) % SIZE;
    
            if(index == key)
            }   
                System.out.println("Unable to Delete Element does nto exist in HashTable");
                return 0;
            }
        }
    
        arr[index] = -1;
    
        return 1;
    }
    
    public static void main(String[] args) {
    
        HashTable hash_table = new HashTable();                
     
        // INSERT
        hash_table.insert(10);
        hash_table.insert(4);
        hash_table.insert(2);
        hash_table.insert(15);
        hash_table.insert(5);
        
        System.out.println("Elements 10, 4, 2, 15 are inserted into the hash table");
        
        // DELETE---
        
        if(hash_table.del(5) == 1)
        
             System.out.println("5 is deleted");
             
	if(hash_table.del(50) == 1)
	
             System.out.println("50 is deleted");      
    }    
}


