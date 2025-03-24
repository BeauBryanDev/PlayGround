import heapq
from typing import List

def kClosest(puntos: List[List[int]], K: int) -> List[List[int]]:
   # Tu código aquí [ Bellow ]. ...
   
   minHeap  = [ ] 

   for ( x, y ) in puntos :

      dist = x**2 + y**2 

      heapq.heappush( minHeap , ( dist, [ x,y ] ) ) 


   closePoints =[ ] 

   for v in range( K ) :

      closePoints.append( heapq.heappop( minHeap)[1] ) 



   return closePoints

response = kClosest([[1,3], [3,4], [5,6]], 1)
print(response)

response = kClosest([[13,-8], [1,20], [-5,5]], 2)
print(response)




