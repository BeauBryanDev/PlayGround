//DoubleLinkedList .....

class Node
{   
    int data;
    Node prev;
    Node next;
}

public class DoublyLinkedList
{
    Node head;
    
    
    public void addFirst(int val)
    {
        Node newNode = new Node();
        newNode.data = val;

        if(head == null)
        {
            newNode.prev = null;
            newNode.next = null;
            head = newNode;
        }
        else
        {

            newNode.prev = null;
            newNode.next = head;
            head.prev = newNode;
            head = newNode;
        }
    }

    public void addLast(int val)
    {
        Node newNode = new Node();
        newNode.data = val;

        if(head == null)
        {
            newNode.prev = null;
            newNode.next = null;
            head = newNode;
        }
        else
        {
            Node last = head;

            while(last.next != null)
            {
                last = last.next;
            }

            last.next = newNode;
            newNode.prev = last;
            newNode.next = null;
        }
    }

    public void delete(int key)
    {
        if(head == null)
        
            return;

        Node temp = head;

        while(temp != null && temp.data != key)
        {
            temp = temp.next;
        }

        if(temp == null)
        
            System.out.println("Key Not Found");
            
        else if(temp == head)
        
        {
            head = head.next;
            
            head.prev = null;
            
        }
        else if(temp.next == null)
        
            temp.prev.next = null;
            
        else
        
        {
            temp.prev.next = temp.next;
            temp.next.prev = temp.prev;
        }
    }
    
    
    public boolean search(int key)
    {
        Node temp = head;

        while(temp != null)
        {
            if(temp.data == key)
            
                return true;
                
            temp = temp.next;
        }

        return false;
    }

    
    public void print()
    {
        Node temp = head;
        Node last = null;

        System.out.println("Forward Traversal");
        
        while(temp != null)
        {
            System.out.println(temp.data);
            
            if(temp.next == null)
            
                last = temp;
                
            temp = temp.next;
        }

        System.out.println("Backward Traversal");
        
        temp = last;
        
        while(temp != null)
        {
            System.out.println(temp.data);
            
            temp = temp.prev;
        }
    }

    public static void main (String args[])
    
    {
    
        DoublyLinkedList list = new DoublyLinkedList();

        System.out.println("Inserting Element: "+10);
        list.addLast(10);
        System.out.println("Inserting Element: "+20);
        list.addLast(20);
        System.out.println("Inserting Element: "+30);
        list.addLast(30);
        System.out.println("Inserting Element: "+40);
        list.addLast(40);
        list.addFirst(5);
        list.addLast(60);
        list.addLast(70);
        list.addLast(80);

        list.print();


          System.out.println("Doubly Linked List: null<-10<->20<->30<->40->null");

          int key = 20;
          System.out.println("Deleting Element: "+key);
          list.delete(key);

          System.out.println("After Deletion");
          list.print();
          
           System.out.println("Searching Element: "+30);
        if(list.search(30))
            System.out.println("Search Found");
        else
            System.out.println("Search Not Found");

        System.out.println("Searching Element: "+50);
        if(list.search(50))
            System.out.println("Search Found");
        else
            System.out.println("Search Not Found");
    }

}


