/*Open Hashing Separete Chaining . */ 

class Node 
{
    int data;
    Node next;
}

public class HashTableChaining {
    static final int size = 7;
    Node chain[] = new Node[size];

    public void insert(int value)
    {
        Node newNode = new Node();
        newNode.data = value;
        newNode.next = null;
        int key = value % size;

        if(chain[key] == null)
            chain[key] = newNode;
        else
        {
            Node temp = chain[key];

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    public void print()
    {
        int i;

        for(i = 0;i < size;i++)
        {
            Node temp = chain[i];
            System.out.printf("chain[%d]-->",i);
            while(temp != null)
            {
                System.out.printf("%d -->",temp.data);
                temp = temp.next;
            }
            System.out.printf("null\n");
        }
    }

    int search(int value)
    {
        int key = value % size;
        
        Node temp = chain[key];
        
        while(temp != null)
        {
            if(temp.data == value)
            
                return key;
                
            temp = temp.next;
        }
        
        return -1;
    }

    public int del(int value)
    {
        int key = value % size;
        Node temp = chain[key];

        if(temp != null)
        {
            if(temp.data == value)
            {    
                temp = temp.next;
                chain[key] = temp;
                return 1;
            }
            else
            {
                while(temp.next != null)
                {
                    if(temp.next.data == value)
                    {
                        temp.next = temp.next.next;
                        return 1;
                    }
                    else
                        temp = temp.next;
                }
            }
        }
        return 0;
    }
    
    public static void main(String[] args) {
        HashTableChaining obj = new HashTableChaining();
        
        obj.insert(7);
        obj.insert(0);
        obj.insert(3);
        obj.insert(10);
        obj.insert(4);
        obj.insert(5);
        obj.insert(14);
        obj.insert(21);
        obj.insert(37);
        obj.insert(65);
        obj.insert(79);
        obj.insert(86);
        obj.insert(23);
        obj.insert(45);
        obj.insert(56);
        obj.insert(29);
        obj.insert(32);
        obj.insert(9);
        obj.insert(8);
        obj.insert(31);
        obj.insert(93);
        obj.insert(24);
        obj.insert(25);
        obj.insert(40);
        obj.insert(75);
        obj.insert(92);
        obj.insert(13);
        obj.insert(20);
        obj.insert(49);
        obj.insert(27);
        obj.insert(62);
        
        obj.print();
        
        if(obj.search(29)  != -1 )
            System.out.println(29+"Search Found at Index: "+obj.search(29));
        else 
            System.out.println("Search Not Found");
            
        if(obj.search(45) != -1 )
            System.out.println(45+"Search Found at Index: "+obj.search(45));
        else 
            System.out.println("Search Not Found");
            
        if(obj.search(31) != -1 )
            System.out.println(31+"Search Found at Index: "+obj.search(31));
        else 
            System.out.println("Search Not Found");
            
        int key = 86;
        if(obj.del(key) == 1) {
            System.out.println("Deleted Node: " + key);
            obj.print();
        }
        else
            System.out.println(key + " Not Found");
    }
    
}




