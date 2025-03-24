//ADjacency_List 4 Graphs ....


class Node
{   
    int data;
    Node next;
}

public class AdjList

{
    static final int V = 5;
    
    Node adjList[] = new Node[V];
    

    public void addEdge(int src, int dest)
    {
    
        Node newNode = new Node();
        
        newNode.data = dest;
        newNode.next = null;

        if(adjList[src] == null)
        
            adjList[src] = newNode;
            
        else
        {
        
            Node last = adjList[src];

            while(last.next != null)
            {
                last = last.next;
            }

            last.next = newNode;

        }
    }

    public void printGraph()
    {
        int i;

        for(i = 0; i < V; i++)
        {
            Node temp = adjList[i];

            System.out.print("adjList["+i+"]->");

            while(temp != null)
            {
                System.out.print(temp.data+"->");
                temp = temp.next;
                
            }
            System.out.println("null");
            
        }
    }

    public static void main(String args[])
    {
        AdjList obj = new AdjList();

        System.out.println("Adding Edge From 0 to 1");
        obj.addEdge(0,1);
        System.out.println("Adding Edge From 0 to 2");
        obj.addEdge(0,2);
        System.out.println("Adding Edge From 0 to 3");
        obj.addEdge(0,3);
        System.out.println("Adding Edge From 1 to 3");
        obj.addEdge(1,3);
        System.out.println("Adding Edge From 1 to 4");
        obj.addEdge(1,4);
        System.out.println("Adding Edge From 2 to 3");
        obj.addEdge(2,3);
        System.out.println("Adding Edge From 3 to 4");
        obj.addEdge(3,4);

        System.out.println("Adjacency List Representation of the Graph");
        obj.printGraph();
        
    }
    
}




