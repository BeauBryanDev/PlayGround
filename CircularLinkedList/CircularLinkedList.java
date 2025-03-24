// Circlular Linked List ,....

class Node
{   
    int data;
    Node next;
}

public class CircularLinkedList  
{

    public void display()  {


  if ( head == null )   
		
     return ; 
		
  Node temp = head ; 
	
   do {
	
	System.out.println(temp.data);
	temp = temp.next ;
		 
   }while ( temp != head ) ;
	
  }

  Node head;

    public void addFirst(int val)
    {
        Node newNode = new Node();
        newNode.data = val;

        if(head == null)
        {
            newNode.next = newNode;
            head = newNode;
        }
        else
        {
             Node last = head;

             while(last.next != head)
             {
                 last = last.next;
             }

             last.next = newNode;
             newNode.next = head;
             head = newNode;
        }
    }
    
    
    public void addLast(int val)
    {
        Node newNode = new Node();
        newNode.data = val;

        if(head == null)
        {
            newNode.next = newNode;
            head = newNode;
        }
        else
        {
            Node last = head;

            while(last.next != head)
            {
                last = last.next;
            }

            last.next = newNode;
            newNode.next = head;
        }
    }
    
    public boolean search(int key)
    {
        if(head == null)
        
            return false;

        Node temp = head;

        do
        {
            if( temp.data == key)
                return true;
                
            temp = temp.next;

        } while(temp != head);

        return false;
    }
      
    public void delete(int key)
    {
        if(head == null)
            return;

        if(head.data == key && head.next == head)
        {
            head = null;
        }
        else if(head.data == key)
        {
            Node last = head;

            while(last.next != head)
            {
                last = last.next;
            }
            last.next = head.next;
            head = head.next;
        }
        else
        {
            Node current = head;

            while(current.next != head)
            {
                if(current.next.data == key)
                {
                    current.next = current.next.next;
                    break;
                }
                current = current.next;
            }
        }
    }

    public void print()
    {
        if(head == null)
            return;

        Node temp = head;

        do
        {
            System.out.println(temp.data);
            temp = temp.next;
        }while(temp != head);
    }

 public static void main(String args[])
    {

        CircularLinkedList list = new CircularLinkedList();
        list.addLast(10);
        list.addLast(20);
        list.addLast(30);
        list.addFirst(5);
        list.addLast(40);
        list.addLast(50);
        list.addLast(60);
        list.addLast(70);
        list.addLast(80);

        System.out.println("Circular Linked List: 10->20->30->10");

        int key = 20;
        System.out.println("Deleting Element: "+key);
        list.delete(key);

        System.out.println("After Deletion");
        list.print();
    
        System.out.println("Searching Element: "+20);
        if(list.search(20))
            System.out.println("Search Found");
        else
            System.out.println("Search Not Found");

        System.out.println("Searching Element: "+100);
        if(list.search(100))
            System.out.println("Search Found");
        else
            System.out.println("Search Not Found");
            
            
       }
          
}


























