/* Circular LinkedList */ 

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
    if(head == null)
    
        return;

    var temp = head;

    do
    {
        document.write(temp.data+"<br>");
        
        temp = temp.next;
        
    }while(temp != head);
}

function addFirst(val)
{
      var newNode = new Node(val);

      if(head == null)
      {
          newNode.next = newNode;
          head = newNode;
      }
      else
      {
           var last = head;

           while(last.next != head)
           
           {
               last = last.next;
           }

           last.next = newNode;
           newNode.next = head;
           head = newNode;
      }
}

function addLast(val)
{
      var newNode = new Node(val);

      if(head == null)
      
      {
          newNode.next = newNode;
          
          head = newNode;
      }
      else
      {
          var last = head;

          while(last.next != head)
          
          {
              last = last.next;
          }

          last.next = newNode;
          newNode.next = head;
      }
}

function search(key)
{
    if(head == null)
    
        return false;

    var temp = head;

    do
    {
        if(temp.data == key)
        
            return true;
            
        temp = temp.next;

    }while(temp != head);

    return false;
}

function del(key)
{
      if(head == null)
      
          return;

      if(head.data == key && head.next == head)
      {
          head = null;
      }
      else if(head.data == key)
      {
          var last = head;

          while(last.next != head)
          {
              last = last.next;
          }
          
          last.next = head.next;
          
          head = head.next;
      }
      else
      {
          var current = head;

          while(current.next != head)
          {
              if(current.next.data == key)
              {
                  current.next = current.next.next;
                  break;
              }
              
              current = current.next;
          }
      }
}

document.write("Inserting Element: "+10+"<br>");
addFirst(10);
document.write("Inserting Element: "+20+"<br>");
addFirst(20);
document.write("Inserting Element: "+30+"<br>");
addFirst(30);
document.write("Inserting Element: "+40+"<br>");
addFirst(40);

document.write("Circular Linked List Elements Are:<br>");

print();

document.write("Inserting Element: "+40+"<br>");
addLast(40);
document.write("Inserting Element: "+50+"<br>");
addLast(50);
document.write("Inserting Element: "+60+"<br>");
addLast(60);
document.write("Inserting Element: "+80+"<br>");
addLast(80);

document.write("Circular Linked List Elements Are:<br>");

print();

document.write("Circular Linked List: 40->30->20->10->40->50->60->80 <br>");

document.write("Searching Element: "+20+"<br>");
if(search(20))
    document.write("Search Found<br>");
else
    document.write("Search Not Found<br>");

document.write("Searching Element: "+100+"<br>");
if(search(100))
    document.write("Search Found<br>");
else
    document.write("Search Not Found<br>");
    
    
 var key = 20;
document.write("Deleting Element: "+key+"<br>");
del(key);

document.write("After Deletion<br>");

document.write("Printing Circular LnkedLisr again<br>");

print();

   




