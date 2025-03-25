/* Insert @New Node at last Position */ 

var head = null;

class Node
{
    constructor(val)
     {
            this.data = val;
            this.next = null;
      }
}

function print()
{
    var temp = head;
    while(temp != null)
    {
        document.write(temp.data+"<br>");
        temp = temp.next;
    }
}

function addLast(val)
{
    var newNode = new Node(val);

    if(head == null)
        head = newNode;
    else
    {
        var lastNode = head;

        while(lastNode.next != null)
        {
            lastNode = lastNode.next;
        }

        lastNode.next = newNode;
    }
}

document.write("Inserting Element: "+10+"<br>");
addLast(10);
document.write("Inserting Element: "+20+"<br>");
addLast(20);
document.write("Inserting Element: "+30+"<br>");
addLast(30);
document.write("Inserting Element: "+40+"<br>");
addLast(40);

document.write("The LinkedList Elements Are:<br>");

print();



