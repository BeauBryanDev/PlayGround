# Search 2D Array Matrix  .....

from typing import List

def searchInMatrix(matrix: List[List[int]], Target  : int ) -> bool:

  m  = len(matrix)
  n  = len(matrix[0])
    
  left  = 0 
  right = m * n - 1
    
  while ( left <= right ) :
    
    mid = left + ( right - left ) // 2
        
    row_mid = mid // n
        
    column_mid = mid % n
        
    if  ( Target == matrix[row_mid][column_mid] )  :
        
      return True
            
    if ( Target < matrix[row_mid][column_mid]  )  : 
        
      right = mid - 1
            
    else:
        
      left  = mid + 1

  return False
  
  

matrix = [
  [1,3,5,7],
  [10,11,16,20],
  [23,30,34,60],
]

print(matrix)

response = searchInMatrix(matrix, 3)

print(response)

response2 = searchInMatrix(matrix,  12)

print(response2)


    
    
