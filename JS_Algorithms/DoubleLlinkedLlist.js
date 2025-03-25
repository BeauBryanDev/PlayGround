/* Double Linked List JS */

var head = null;

class Node
{
    constructor(val)
     {
            this.data = val;
            this.prev = null;
            this.next = null;
     }
}

function print()
{
      var temp = head;
      var last = null;

      document.write("Forward Traversal<br>");
      while(temp != null)
      {
          document.write(temp.data+"<br>");
          if(temp.next == null)
              last = temp;
          temp = temp.next;
      }

      document.write("Backward Traversal<br>");
      temp = last;
      while(temp != null)
      {
          document.write(temp.data+"<br>");
          temp = temp.prev;
      }
}

function addLast(val)
{
      var newNode = new Node(val);

      if(head == null)
      {
          newNode.prev = null;
          newNode.next = null;
          head = newNode;
      }
      else
      {
          var last = head;

          while(last.next != null)
          {
              last = last.next;
          }

          last.next = newNode;
          newNode.prev = last;
          newNode.next = null;
      }
      
      function addFirst(val)
{
      var newNode = new Node(val);

      if(head == null)
      {
          newNode.prev = null;
          newNode.next = null;
          head = newNode;
      }
      else
      {

          newNode.prev = null;
          newNode.next = head;
          head.prev = newNode;
          head = newNode;
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

function del(key)
{
     if(head == null)
          return;

      var temp = head;

      while(temp != null && temp.data != key)
      {
          temp = temp.next;
      }

      if(temp == null)
          document.write("Key Not Found<br>");
      else if(temp == head)
      {
          head = head.next;
          head.prev = null;
      }
      else if(temp.next == null)
          temp.prev.next = null;
      else
      {
          temp.prev.next = temp.next;
          temp.next.prev = temp.prev;
      }
}

addLast(10);
addLast(20);
addLast(30);
addLast(40);

document.write("Doubly Linked List: null<-10<->20<->30<->40->null<br>");

var key = 20;
document.write("Deleting Element: "+key+"<br>");
del(key);

document.write("After Deletion<br>");

print();




