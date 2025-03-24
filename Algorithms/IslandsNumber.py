#Count Number of Inslands in a given Grid as Map[i,j] , water is : 0 , Land : 1 .

from typing import List

def IslandNumber(Grid: List[List[str]]) -> int:

    def DFS(i: int, j: int):
    
        # Check boundaries and if the cell is water or already visited
        if i < 0 or i >= len(Grid) or j < 0 or j >= len(Grid[0]) or Grid[i][j] != 1:
            return

        # Mark the cell as visited
        Grid[i][j] = 2

        # Visit all neighboring cells (up, down, left, right)
        DFS(i + 1, j)
        DFS(i - 1, j)
        DFS(i, j + 1)
        DFS(i, j - 1)

    # Main logic for counting islands
    islandNmbr = 0

    for i in range(len(Grid)):
    
        for j in range(len(Grid[0])):
        
            if Grid[i][j] == 1:  # If we find land
                DFS(i, j)         # Perform DFS to mark the entire island
                islandNmbr += 1   # Increment island count

    return islandNmbr


# Test cases
if __name__ == '__main__':

    mapa1 = [
        [1, 1, 0, 0, 0],
        [1, 1, 0, 0, 0],
        [0, 0, 1, 0, 0],
        [0, 0, 0, 1, 1],
    ]
    response = IslandNumber(mapa1)
    print("Number of islands in mapa1:", response)

    mapa2 = [
        [1, 1, 0, 0, 1],
        [1, 1, 1, 0, 1],
        [0, 0, 1, 0, 1],
        [0, 0, 0, 0, 1],
        [0, 0, 0, 0, 1],
    ]
    response2 = IslandNumber(mapa2)
    print("Number of islands in mapa2:", response2)
    
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
  
    response8 = IslandNumber(map8)
    print("Number of islands in mapa8:", response8) 
  
    map12 = [ 
  [1,0,0,0,0,0,0,0,1,1,1,1],
  [1,1,0,0,0,0,0,1,1,1,1,0],
  [1,1,1,1,1,0,0,0,1,1,0,0],
  [1,1,1,0,0,0,0,0,0,1,0,0],
  [1,1,1,0,0,0,0,0,0,0,0,0],
  [1,1,1,1,0,0,0,1,1,0,0,0],
  [1,1,0,0,0,0,0,0,1,1,1,0],
  [1,1,0,0,0,0,0,0,1,1,1,1],
  [1,0,0,0,0,1,0,0,0,1,1,1],
  [0,0,0,1,1,1,0,0,0,0,1,1],
  [1,0,0,0,1,1,1,1,0,0,0,1],
  [1,1,0,0,0,1,1,1,1,0,0,0]
  ]
  
    response12 = IslandNumber(map12)
    print("Number of islands in mapa12:", response12)

    map16 =  [
  [ 1,0,0,0,1,1,1,1,1,1,0,0,0,1],
  [ 1,1,1,0,0,0,1,1,1,1,0,0,1,1],
  [ 1,1,1,1,0,0,0,0,0,1,1,0,0,1],
  [ 1,1,0,0,0,1,1,1,1,1,1,0,0,0], 
  [ 1,0,0,0,0,1,1,1,1,0,0,0,0,0],
  [ 0,0,0,0,0,1,1,1,0,0,0,0,1,1],
  [ 0,0,0,0,0,1,1,1,0,0,0,1,1,1],
  [ 1,1,0,0,0,1,0,0,0,1,0,0,0,1],
  [ 1,1,1,0,0,0,0,0,1,1,1,0,0,0],
  [ 1,1,0,0,0,1,1,0,0,1,0,0,0,0],
  [ 1,0,0,0,1,1,1,1,0,0,0,0,1,1],
  [ 0,0,1,1,1,1,0,0,0,0,1,1,1,1],
  [ 0,0,1,1,1,0,0,0,1,0,1,1,1,1],
  [ 0,0,0,1,0,0,0,0,1,1,0,0,1,1],
  [ 1,0,0,1,0,0,1,1,1,0,0,0,1,1],
  [ 1,1,0,0,0,0,1,1,1,1,0,0,1,1]
    ]
    
    response16 = IslandNumber(map16)
    print("Number of islands in mapa12:", response16)



