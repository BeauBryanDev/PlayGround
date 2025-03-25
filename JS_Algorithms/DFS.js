/* DEPTH FIRST SEARCH AS DFS */ 
/* GRAPH TRAVERSAL BY USING STACK AS DSA */
/* VISITED ARRAY AS AUX LIST TO HANDLE VISITED NODES
AVOID VISIT VERTICES MULTIPLE TIME AS LOOP */ 

const V = 5;

function dfs(arr, source) {

  var mstack = [];
  
  var isVisited = Array(V).fill(false);

  mstack.push(source);
  
  isVisited[source] = true;

  while (mstack.length) {
  
    var node = mstack.pop();
    
    document.write("Visited Node: " + node);

    for (var index = 0; index < V; index++) {
    
      if (arr[node][index] === 1 && isVisited[index] === false) {
      
        mstack.push(index);
        
        isVisited[index] = true;
        
      }
      
    }
    
  }
  
}

// ADJ MATRIX OF GRAPH TRAVERSAL BY DFS ALGORITHM ...

var arr = [  
             [0, 1, 1, 1, 0],
  	     [1, 0, 0, 1, 1],
             [1, 0, 0, 1, 0],
             [1, 1, 1, 0, 1],
             [0, 1, 0, 1, 0]
          ];

document.write("DFS of the given graph is : ");


dfs(arr, 0);




