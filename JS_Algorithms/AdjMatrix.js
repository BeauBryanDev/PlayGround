
/* Adjacency Matrix for Graph Depiction */ 
/* Directed && Undirected Graph */ 
/* Graph Representation */

function addEdge(arr, src, dest)
{
    arr[src][dest] = 1;
}

function printAdjMatrix(arr)
{
    var i, j;

    for(i = 0; i < V; i++)
    {
        for(j = 0; j < V; j++)
        {
            document.write(arr[i][j]+" ");
        }
        document.write("<br>");
    }
}

function hasEdge(arr, src, dest)
{
    if(arr[src][dest] == 1)
        return 1;

    return 0;
}

function removeEdge(arr, src, dest)
{
    arr[src][dest] = 0;
}

const V = 5;

//Create a 2D array and initialize it to 0.........
var adjMatrix = new Array(V);

for (var i = 0; i < adjMatrix.length; i++)
{
    adjMatrix[i] = new Array(V).fill(0);
}

document.write("Adding Edge From 0 to 1<br>");
addEdge(adjMatrix,0,1);
document.write("Adding Edge From 0 to 2<br>");
addEdge(adjMatrix,0,2);
document.write("Adding Edge From 0 to 3<br>");
addEdge(adjMatrix,0,3);
document.write("Adding Edge From 1 to 3<br>");
addEdge(adjMatrix,1,3);
document.write("Adding Edge From 1 to 4<br>");
addEdge(adjMatrix,1,4);
document.write("Adding Edge From 2 to 3<br>");
addEdge(adjMatrix,2,3);
document.write("Adding Edge From 3 to 4<br>");
addEdge(adjMatrix,3,4);

document.write("Adjacency Matrix Representation of the Graph<br>");

printAdjMatrix(adjMatrix);


