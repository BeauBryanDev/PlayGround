/* Search for a Node in a singly LinkedList */

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

function search(key)
{
    var temp = head;

    while(temp != null)
    {
        if(temp.data == key)
            return true;
        temp = temp.next;
    }

    return false;
}

addLast(10);
addLast(20);
addLast(30);
addLast(40);

document.write("The LinkedList Elements Are:<br>");

print();

document.write("Searching Element: "+30+"<br>");
if(search(30))
    document.write("Search Found<br>");
else
    document.write("Search Not Found<br>");

document.write("Searching Element: "+100+"<br>");
if(search(100))
    document.write("Search Found<br>");
else
    document.write("Search Not Found<br>");
    
    
    
    
