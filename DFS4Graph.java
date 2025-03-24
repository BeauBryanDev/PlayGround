/* DEPTH FIRST SEARCH <DFS> BY Stack DSA */

import java.util.Stack;

class Graph {

    static final int V = 9;
    
    public void dfs(int arr[][], int source)
    {
        Stack<Integer> s = new Stack<>();
        boolean isVisited[] = new boolean[V];
        
        s.push(source);
        
        isVisited[source] = true;
        
        while(!s.empty())
        {
            int node = s.pop();
            
            System.out.println("Visited Node: " + node);
            
            for(int index = 0; index < V; index++)
            {
                if(arr[node][index] == 1 && isVisited[index] == false)
                {
                    s.push(index);
                    
                    isVisited[index] = true;
                }
            }
            
        }
    }

    public static void main(String[] args) 
    {
        int arr[][] = {
                            {0, 1, 1, 1, 0,0,0,0,0},
                            {1, 0, 1, 0, 0,0,0,0,0},
                            {1, 1, 0, 1, 1,0,0,0,0},
                            {1, 0, 1, 0, 1,0,1,0,0},
                            {0, 0, 1, 1, 0,1,0,1,0},
                            {0, 0, 0 ,0 , 1,0,1,1,1},
                            {0, 0, 0, 1, 0,1,0,1,1},
                            {0, 0, 0, 1, 0,1,0,1,1},
                            {0, 0, 0, 0, 1,1,0,0,1},
                            {0, 0, 0, 0 ,0,1,1,1,0}
                        };
        
        Graph obj = new Graph();
        
        System.out.println("DFS of the given graph is : ");
        obj.dfs(arr,0);
        
    }  
    
}



