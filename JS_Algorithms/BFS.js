/* BREADTH FIRST SEARCH AS BFS */
/*GRAPH TRAVERSAL BY USING QUEUE DSA */
/* isVISITED NODE AS AUX ARRAY */

const V = 5;

function bfs(arr, source) {

  var q = [];
  
  var isVisited = new Array(V).fill(false);

  q.push(source);
  
  isVisited[source] = true;

  while (q.length > 0) {
  
    var node = q.shift();
    
    document.write("Visited Node: " + node);
    //SHOW JUST VISITED NODE ON SCREEN ...

    for (var index = 0; index < V; index++) {
    
      if (arr[node][index] === 1 && !isVisited[index]) {
      
        q.push(index);
        
        isVisited[index] = true;
        
      }
      
    }
    
  }
  
}

var arr = [  
             [0, 1, 1, 1, 0],
  	     [1, 0, 0, 1, 1],
             [1, 0, 0, 1, 0],
             [1, 1, 1, 0, 1],
             [0, 1, 0, 1, 0]
          ];

document.write("BFS of the given graph is : ");

bfs(arr, 0);



