
import heapq
from collections import defaultdict

def reorganizeString(text: str) -> str:

  dicMap = { } 
  
  outPut = ""
  
  for i in range ( 0, len( text ) ) : 
  
     dicMap[ text[ i ] ] = dicMap.get( text[ i ] , 0 ) - 1 
     
   
  qu3qu3 = list( zip ( dicMap.values() , dicMap.keys() ) ) 
  
  heapq.heapify( qu3qu3 ) 
  
  if   abs( qu3qu3[0][0] > round( len( text ) ) / 2 + 0.5 ) :
  
    return ""
    
  while ( len( qu3qu3 ) > 1 ) : 
  
    c1, v1 = heapq.heappop( qu3qu3 ) 
    c2, v2 = heapq.heappop( qu3qu3 ) 
    
    outPut = outPut + v1 + v2
    
    c1 = c1 + 1 
    c2 = c1 + 1
   
    if ( c1 < 0 ) : 
    
      heapq.heappush( qu3qu3 , ( c1, v1 ) ) 
      
    if ( c2 < 0 ) : 
    
      heapq.heappush( qu3qu3 , ( c2, v2 ) ) 

  if ( len( qu3qu3 ) == 1 ) : 
  
    c, v = heapq.heappop( qu3qu3 ) 
    
    outPut = outPut + v 
  
  return outPut

#Second Method ...

def reorganizeString2(text: str) -> str:

  charFrq = defaultdict( int ) 
  
  for char in text  : 
  
    char  
    




response = reorganizeString("aacab")
print(response)

response = reorganizeString("aaab")
print(response)


