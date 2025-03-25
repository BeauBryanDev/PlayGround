/* Queue Data Structure */ 
/*Fixed Size Queue */ 
/* FiFo Model over QUeue */ 


const SIZE = 5;

var arr = [];

var front = 0;
var rear = 0;

function enqueue(val)
{
    if(rear == SIZE)
    
        document.write("EnQueueNot Possiible as Queue is Full<br>");
    else
    {
        arr[rear] = val;
        rear++;
    }
}

function dequeue()
{
    if(front == rear)
    
        document.write("Queue is Empty<br>");
    else
    {
        document.write("Dequeued element = "+arr[front]+"<br>");
        
        front++;
    }
}


document.write("Enqueuing element: "+10+"<br>");
enqueue(10);
document.write("Enqueuing element: "+20+"<br>");
enqueue(20);
document.write("Enqueuing element: "+30+"<br>");
enqueue(30);
enqueue(49);

dequeue();
dequeue();
dequeue();
dequeue();



