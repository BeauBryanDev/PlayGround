/*Has Table with Linear_Probing.*/ 

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
    
    public static void main(String[] args) {
        HashTable hash_table = new HashTable();                
     
        // INSERT
        if(hash_table.insert(10) == 1)
             System.out.println("10 is inserted");
             
        if(hash_table.insert(4) == 1)
             System.out.println("4 is inserted");
             
        if(hash_table.insert(2) == 1)
             System.out.println("2 is inserted");
             
        if(hash_table.insert(15) == 1)
             System.out.println("15 is inserted");
             
        if(hash_table.insert(5) == 1)
             System.out.println("5 is inserted");
             
        if(hash_table.insert(1) == 1)
             System.out.println("1 is inserted");
    }    
}

/*
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

        return index;
    }
    
    public static void main(String[] args) {
        HashTable hash_table = new HashTable();                
     
        // INSERT
        if(hash_table.insert(10) != 0 )
             System.out.println("10 is inserted @Index: "+hash_table.insert(10));
             
        if(hash_table.insert(4) != 0 )
             System.out.println("4 is inserted "+hash_table.insert(4));
             
        if(hash_table.insert(2) != 0 )
             System.out.println("2 is inserted "+hash_table.insert(2));
             
        if(hash_table.insert(15) != 0 )
             System.out.println("15 is inserted "+hash_table.insert(15));
             
        if(hash_table.insert(5) != 0 )
             System.out.println("5 is inserted "+hash_table.insert(5));
             
        if(hash_table.insert(1) != 0 )
             System.out.println("1 is inserted "+hash_table.insert(1));
    }    
}
/*





