/* Adjacency List as List of LinkedList */ 
/* Depiction of Graph by Adj List */ 

class Node
{
    constructor(val)
     {
            this.data = val;
            this.next = null;
      }
}

const V = 5;

var adjList = [];


function addEdge(src, dest)
{
    var newNode = new Node();
    newNode.data = dest;
    newNode.next = null;

    if(adjList[src] == null)
    
        adjList[src] = newNode;
    else
    {
        var last = adjList[src];

        while(last.next != null)
        {
            last = last.next;
        }

        last.next = newNode;

    }
}

function printGraph()
{
    var i;

    for(i = 0; i < V; i++)
    {
        var temp = adjList[i];

        document.write("adjList["+i+"]->");

        while(temp != null)
        {
            document.write(temp.data+"->");
            
            temp = temp.next;
        }
        
        document.write("null<br>");
    }
}

//Representation of a Graph by Adj List .....
//Adding edges over the Adj List as the Graph... 
document.write("Adding Edge From 0 to 1<br>");
addEdge(0,1);
document.write("Adding Edge From 0 to 2<br>");
addEdge(0,2);
document.write("Adding Edge From 0 to 3<br>");
addEdge(0,3);
document.write("Adding Edge From 1 to 3<br>");
addEdge(1,3);
document.write("Adding Edge From 1 to 4<br>");
addEdge(1,4);
document.write("Adding Edge From 2 to 3<br>");
addEdge(2,3);
document.write("Adding Edge From 3 to 4<br>");
addEdge(3,4);
//Edges added ....
document.write("Adjacency List Representation of the Graph<br>");
//Printing the Graph.....
printGraph();





