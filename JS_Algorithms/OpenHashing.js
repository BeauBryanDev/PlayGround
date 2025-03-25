/*OPEN HASHING */ 
/* Separate Chaining */

//Declare Class Node ...
class Node 
{
    constructor(val)
    {
        this.data = val;
        this.next = null;
    }
}

const size = 7;

var chain = [];

function insert(value)
{
    var newNode = new Node(value);
    
    var key = value % size;

    if(chain[key] == null)
    
        chain[key] = newNode;
    else
    {
        var temp = chain[key];

        while(temp.next != null)
        
        {
            temp = temp.next;
        }
        
        temp.next = newNode;
    }
}

function print()
{
    for(var i = 0;i < size;i++)
    {
        var temp = chain[i];
        
        document.write("chain["+i+"]->");
        
        while(temp != null)
        {
            document.write(temp.data+"->");
            
            temp = temp.next;
        }
        
        document.write("null");
    }
}

function search(value)
{
    var key = value % size;
    
    var temp = chain[key];
    
    while(temp != null)
    {
        if(temp.data == value)
        
            return 1;
            
        temp = temp.next;
    }
    
    return 0;
}

function del(value)
{
    var key = value % size;
    
    var temp = chain[key];

    if (temp != null)
    {
        if (temp.data == value)
        {    
            temp = temp.next;
            
            chain[key] = temp;
            
            return 1;
        }
        else
        {
            while(temp.next != null)
            {
                if(temp.next.data == value)
                {
                    temp.next = temp.next.next;
                    
                    return 1;
                }
                else
                
                    temp = temp.next;
            }
        }
    }
    
    return 0;
}
 
init() 
//Performe Insertion .....  
insert(7);
insert(0);
insert(3);
insert(10);
insert(4);
insert(5);
        
print();
        
if(search(10) == 1)

    document.write("Search Found");
else 
    document.write("Search Not Found");
    
var key = 10;

if(del(key) == 1) {

    document.write("Deleted Node: " + key);
    
    print();
}
else
    document.write(key + " Not Found");




