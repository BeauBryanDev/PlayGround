/*BREADTH FIRST SEARCH AS <BFS> */

import java.util.Queue;
import java.util.LinkedList;

class Graph {

    static final int V = 6;
    
    public void bfs(int arr[][], int source)
    {
    
        Queue<Integer> q = new LinkedList<>();
        boolean isVisited[] = new boolean[V];
        
        q.add(source);
        isVisited[source] = true;
        
        while(q.size() != 0)
        {
            int node = q.poll();
            System.out.println("Visited Node: " + node);
            
            for(int index = 0; index < V; index++)
            {
                if(arr[node][index] == 1 && isVisited[index] == false)
                {
                    q.add(index);
                    isVisited[index] = true;
                }
            }
        }
    }
    
    public static void main(String[] args) 
    {
    
        int arr[][] = {
                            {0, 1, 1, 1, 0,0 },
                            {1, 0, 1, 1, 1, 0 },
                            {1, 1, 0, 1, 0, 0 },
                            {1, 1, 1, 0, 1, 1 },
                            {0, 1, 0, 1, 0, 1},
                            { 0 , 0, 0, 1, 1,0 }
                        };
        
        Graph obj = new Graph();
        
        System.out.println("BFS of the given graph is : ");
        obj.bfs(arr,0);
        
    }    
}



