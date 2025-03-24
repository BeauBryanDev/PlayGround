#Find the Shortest Bridge Block between two Islands ....

from typing import List

class Bridge:

    def shortestBridge(self, imap: List[List[str]]) -> int :
    
        def dfs(i, j) :
        
            if 0 <= i < len(imap) and 0 <= j < len(imap[0]) and imap[i][j] == 1:
            
                imap[i][j] = 2
                queue.append((i, j))
                
                [dfs(x, y) for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]]

        queue = []
        islandFound = False

        # DFS to mark the first island..
        
        for i in range(len(imap[0])):
        
            for j in range(len(imap[i])):
            
                if islandFound:
                
                    break
                    
                if imap[i][j] == 1:
                
                    dfs(i, j)
                    
                    islandFound = True
                    
                    break

        # BFS to find the shortest bridge.......
        
        bridgeSize = 0

        while queue:
        
            currentQueue = []
            
            while queue:
            
                currentCell = queue.pop(0)
                
                for x, y in [[0, 1], [0, -1], [1, 0], [-1, 0]]:
                
                
                    newX = x + currentCell[0]
                    newY = y + currentCell[1]

                    if (newX < 0 or newX >= len(imap)
                        or newY < 0 or newY >= len(imap[newX])                  
                        or imap[newX][newY] == 2):
                        
                        continue
                        
                    if imap[newX][newY] == 1:
                    
                        return bridgeSize
                        
                    currentQueue.append([newX, newY])
                    
                    imap[newX][newY] = 2
                    
            queue = currentQueue
            
            bridgeSize += 1

        return -1

map1 = [
  [1,1,1,1,1],
  [1,0,0,0,1],
  [1,0,1,0,1],
  [1,0,0,0,1],
  [1,1,0,0,1],
]
response1 = Bridge().shortestBridge(map1)
print(response1)

map2 = [
  [1,1,0,0,1],
  [1,1,0,0,1],
  [1,0,0,0,1],
  [1,0,0,0,1],
  [1,0,0,1,1],
]
response2 = Bridge().shortestBridge(map2)
print(response2)

map4 = [ 
  [1,0,0,0,0,0,1,1],
  [1,1,0,0,0,1,1,1],
  [1,1,1,1,0,0,1,1],
  [1,1,1,0,0,0,0,1],
  [1,0,1,0,0,0,0,1],
  [1,1,1,0,0,1,0,0],
  [1,1,0,0,1,1,1,0],
  [1,1,0,0,0,1,1,1]
  ]
  
response4 = Bridge().shortestBridge(map4)
print(response4)

  
map8 = [ 
  [1,0,0,0,0,0,1,1,1,1],
  [1,1,0,0,0,1,1,1,1,0],
  [1,1,1,1,0,0,1,1,0,0],
  [1,1,1,0,0,0,0,1,0,0],
  [1,0,1,0,0,0,0,1,0,0],
  [1,1,1,1,0,0,0,1,0,0],
  [1,1,0,0,0,0,1,1,1,0],
  [1,1,0,0,0,0,0,1,1,1],
  [1,0,0,0,1,0,0,1,1,1],
  [0,0,0,1,1,1,0,0,0,0]
  ]
  
response8 = Bridge().shortestBridge(map8)
print(response8)  
  
map12 = [ 
  [1,0,0,0,0,0,0,0,1,1,1,1],
  [1,1,0,0,0,0,0,1,1,1,1,0],
  [1,1,1,1,1,0,0,0,1,1,0,0],
  [1,1,1,0,0,0,0,0,0,1,0,0],
  [1,1,1,0,0,0,0,0,0,0,0,0],
  [1,1,1,1,0,0,0,1,1,0,0,0],
  [1,1,0,0,0,0,0,0,1,1,1,0],
  [0,1,0,0,0,0,0,0,1,1,1,1],
  [0,0,0,0,0,1,0,0,0,1,1,1],
  [0,0,0,1,1,1,0,0,0,0,1,1],
  [1,0,0,0,1,1,1,1,0,0,0,1],
  [1,1,0,0,0,1,1,1,1,0,0,0]
  ]
  
response12 = Bridge().shortestBridge(map12)
print(response12)  

map16 =  [
  [ 1,0,0,0,1,1,1,1,1,1,0,0,0,1],
  [ 1,1,1,0,0,0,1,1,1,1,0,0,1,1],
  [ 1,1,1,1,0,0,0,0,0,1,1,0,0,1],
  [ 1,1,0,0,0,1,1,1,1,1,1,0,0,0], 
  [ 1,0,0,0,0,1,1,1,1,0,0,0,0,0],
  [ 0,0,0,0,0,1,1,1,0,0,0,0,1,1],
  [ 0,0,0,0,0,1,1,1,0,0,0,1,1,1],
  [ 1,1,0,0,0,1,1,0,0,1,0,0,0,1],
  [ 1,1,1,0,0,0,0,0,1,1,1,0,0,0],
  [ 1,1,1,0,0,1,1,0,0,1,0,0,0,0],
  [ 1,0,0,0,1,1,1,1,0,0,0,0,1,1],
  [ 0,1,1,1,1,1,0,0,0,0,1,1,1,1],
  [ 0,0,1,1,1,0,0,0,1,0,1,1,1,1],
  [ 0,0,0,1,0,0,0,0,1,1,0,0,1,1],
  [ 1,0,0,1,0,0,1,1,1,0,0,0,1,1],
  [ 1,1,0,0,0,0,1,1,1,1,0,0,1,1]
    ]
    
response16 = Bridge().shortestBridge(map16)
print(response16)    

map16a =  [
  [1,1,0,1,1,0,0,0,0,0,1,1,1,1,1],
  [1,1,0,0,0,0,1,1,0,0,0,1,1,1,1],
  [1,1,1,0,0,0,1,1,1,0,0,0,0,0,1],
  [1,1,0,0,0,1,1,1,1,0,0,0,0,0,0], 
  [1,1,0,0,0,1,1,1,1,0,0,0,0,0,0],
  [1,0,0,0,0,0,1,1,1,0,0,0,0,1,1],
  [0,0,0,0,0,0,1,1,1,0,0,0,1,1,1],
  [0,1,1,1,0,0,1,0,1,0,0,0,0,1,1],
  [0,1,1,1,1,0,0,1,1,1,0,0,0,0,1],
  [0,1,1,1,0,0,0,1,1,0,0,0,0,1,1],
  [0,1,1,1,0,0,1,1,1,1,0,0,0,0,1],
  [0,1,1,1,0,0,0,1,0,1,0,0,0,1,1],
  [1,1,1,1,0,0,0,0,0,1,0,0,1,1,1],
  [1,1,1,1,1,0,0,0,0,1,1,0,0,0,1],
  [1,1,1,0,0,0,0,1,0,1,1,0,0,1,1],
  [1,1,1,0,0,0,0,0,1,1,0,0,1,1,1]
    ]
    
response16a = Bridge().shortestBridge(map16a)
print(response16a)       
    
    
    
  
  


