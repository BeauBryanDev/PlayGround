#Binary Search <Algorithm >

def BinSearch (  arr, key )  : 

    start = 0
    end   = len( arr ) - 1 
    
    
    while ( start <= end )  :
    
        mid = ( start + end ) // 2 
        
        if ( arr[ mid ] == key ) :
        
            return mid 
            
        elif ( arr[ mid ] < key ) : 
        
            start = mid + 1 
            
        else : 
        
            end = mid - 1 
            
    return -1 
    
    
if __name__ == '__main__' : 
	
	print("\n")
	myArr = [ 5,9,13,15,17,19,21,24,27,32,35,36,29,45,49,54,56,65,68,72,76,81,86,82,96 ] 
	
	val2Search = 21
	
	isIndx = BinSearch( myArr, val2Search ) 
	
	if (  isIndx != -1 ) : 
	
	    print(f"Searh Value Found at Index : { isIndx } ")
	    
	else : 
	 
	     print("Search Not Found ")
	     
	
	print("\n")
   	
   	
   	
   	
        
       
