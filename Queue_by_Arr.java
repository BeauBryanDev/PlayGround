//QUEUE BY USING ARR[SIZE] ....
//Build a Queue in >Java by Using an array as aux data sgtructure , then enqueue and dequeue element from this one.

class Queue
{ 
    static final int SIZE = 3;
    int arr[] = new int[SIZE];

    int front = 0;
    int rear = 0;

    public void enqueue(int val)
    {
        if(rear == SIZE)
        
            System.out.println("Queue is Full");
        else
        {
            arr[rear] = val;
            rear++;
        }
    }

    public void dequeue()
    {
        if(front == rear)
            System.out.println("Queue is Empty");
        else
        {
            System.out.println("Dequeued element = "+arr[front]);
            front++;
        }
    }
    
    public void printElements() {
    	
    	System.out.println("Ramaing Queue\n");
        // Print the array elements
        for (int i = 0; i < SIZE ; i++) {
        
            System.out.println("arr[" + i + "] = " + arr[i]);
        }
    }
    
    

    public static void main(String args[])
    {
        Queue q = new Queue();

        System.out.println("Enqueuing element: "+10);
        q.enqueue(10);
        System.out.println("Enqueuing element: "+20);
        q.enqueue(20);
        System.out.println("Enqueuing element: "+30);
        q.enqueue(30);
        System.out.println("Enqueuing element: "+50);
        q.enqueue(50);
        System.out.println("Enqueuing element: "+40);
        q.enqueue(40);
        System.out.println("Enqueuing element: "+69);
        q.enqueue(69);
        System.out.println("Enqueuing element: "+35);
        q.enqueue(35);
        

        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        
        q.printElements();
    }
}


