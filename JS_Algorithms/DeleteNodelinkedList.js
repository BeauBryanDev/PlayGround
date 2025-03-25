/* Delete @Node in a Singly LinkedList */

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

function del(key)
{
    if(head.data == key)
    {
        head = head.next;
    }
    else
    {
        var temp = head;

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

addLast(10);
addLast(20);
addLast(30);
addLast(40);


document.write("The LinkedList Elements Are [Before Deletion]:<br>");
print();

document.write("Deleting Element: "+30+"<br>");
del(30);

document.write("The LinkedList Elements Are [After Deletion]:<br>");

print();




