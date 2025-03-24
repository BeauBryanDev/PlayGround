//Overall LinkedList ....

class Node
{ 
    int data;
    Node next;
}

public class oLinkedList
{
    Node head;

    public void addLast(int val)
    {
        Node newNode = new Node();
        newNode.data = val;
        newNode.next = null;

        if(head == null)
            head = newNode;
        else
        {
            Node lastNode = head;

            while(lastNode.next != null)
            {
                lastNode = lastNode.next;
            }

            lastNode.next = newNode;
        }
    }
    
    public void delete(int key)
    {
        if(head.data == key)
        {
            head = head.next;
        }
        else
        {
            Node temp = head;

            while(temp.next != null)
            {
                if(temp.next.data == key)
                {
                    temp.next = temp.next.next;
                    break;
                }
                else
                    temp = temp.next;
            }
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

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public static void main(String args[])
    {

          oLinkedList olist = new oLinkedList();
          olist.addLast(10);
          olist.addLast(20);
          olist.addLast(30);
          olist.addLast(40);

          System.out.println("The LinkedList Elements Are [Before Deletion]:");
          olist.print();

          System.out.println("Deleting Element: "+30);
          olist.delete(30);

          System.out.println("The LinkedList Elements Are [After Deletion]:");
          olist.print();
          
           System.out.println("The LinkedList Elements Are:");
          olist.print();

          System.out.println("Searching Element: "+30);
          if(olist.search(30))
              System.out.println("Search Found");
          else
              System.out.println("Search Not Found");

          System.out.println("Searching Element: "+100);
          if(olist.search(100))
              System.out.println("Search Found");
          else
              System.out.println("Search Not Found");
              
    }
}




