/*Insert @New Nodde at the Beginning of a LinkedList */

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

function addFirst(val)
{
    var newNode = new Node(val);
    newNode.next = head;

    head = newNode;
}

document.write("Inserting Element: "+10+"<br>");
addFirst(10);
document.write("Inserting Element: "+20+"<br>");
addFirst(20);
document.write("Inserting Element: "+30+"<br>");
addFirst(30);
document.write("Inserting Element: "+40+"<br>");
addFirst(40);

document.write("The LinkedList Elements Are:<br>");
print();



