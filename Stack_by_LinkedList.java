//Stack By Using Linked List ....


class Node
{   
    int data;
    Node next;
}

public class Stack
{
    Node head = null;

    public void push(int val)
    {
        Node newNode = new Node();
        newNode.data = val;
        newNode.next = head;

        head = newNode;
    }

    public void pop()
    {
        if(head == null)
        
            System.out.println("Stack is Empty");
            
        else
        {
        
            System.out.println("Popped element = "+head.data);
            
            head = head.next;
        }
    }
    
      public void print()
    {
        Node temp = head;

            System.out.println("LinkedLink_Stack");
            
        while(temp != null)
        {
        
            System.out.println(temp.data);
            temp = temp.next;

        }
    }

    public static void main(String args[])
    
    {

          Stack list = new Stack();

          list.pop();

          System.out.println("Pushing element: "+10);
          list.push(10);
          System.out.println("Pushing element: "+20);
          list.push(20);
          System.out.println("Pushing element: "+30);
          list.push(30);
          System.out.println("Pushing element: "+30);
          list.push(40);
          System.out.println("Pushing element: "+30);
          list.push(50);
          System.out.println("Pushing element: "+30);
          list.push(60);

          list.pop();
          list.pop();
          list.pop();
          list.pop();
          list.push(65);
          list.push(75);
          list.push(85);
          list.push(95);
          list.push(195);
          list.pop();
          
          list.print();
          
    }
    
}

    

