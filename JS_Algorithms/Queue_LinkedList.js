/* Queue by Using Linked List */ 
/* Dynamic Size Queue */ 
/* Larger Queue */ 

var front = null;
var rear = null;

class Node
{
     constructor(val)
     {
            this.data = val;
            this.next = null;
      }
}

function enqueue(val)
{
    var newNode = new Node(val);
    newNode.next = null;

    if(front == null && rear == null)
    
        front = rear = newNode;
    else
    {
        rear.next = newNode;
        rear = newNode;
    }
}

function dequeue()
{
    if(front == null)
    
        document.write("Queue is Empty<br>");
    else
    {
        document.write("Dequeued Element = "+front.data+"<br>");

        front = front.next;

        if(front == null)
        
            rear = null;
    }
}


dequeue();

document.write("Enqueuing element: "+10+"<br>");
enqueue(10);
document.write("Enqueuing element: "+20+"<br>");
enqueue(20);
document.write("Enqueuing element: "+30+"<br>");
enqueue(30);

dequeue();
dequeue();
dequeue();
dequeue();


