/* Stack with LinkedList */

var head = null;

class Node
{
     constructor(val)
     {
            this.data = val;
            this.next = null;
      }
}

function push(val)
{
    var newNode = new Node(val);
    
    newNode.next = head;

    head = newNode;
}

function pop()
{
    if(head == null)
    
        document.write("Stack is Empty<br>");
    else
    {
        document.write("Popped element = "+head.data+"<br>");
        
        head = head.next;
    }
}


pop();

document.write("Pushing element: "+10+"<br>");
push(10);
document.write("Pushing element: "+20+"<br>");
push(20);
document.write("Pushing element: "+30+"<br>");
push(30);

pop();
pop();
pop();
pop();



