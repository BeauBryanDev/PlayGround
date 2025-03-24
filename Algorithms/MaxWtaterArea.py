#FIND THE CONTAINER THAT HOLDS THE MOST WATER ....

def mostWaterContainer( heights )  : 

    maxWater = 0 
    
    p1 = 0
    p2 = ( len(heights) - 1 ) 
    
    while ( p1 < p2 ) : 
    
        wHeight = min( heights[ p1 ] , heights[ p2 ] ) 
        
        wBase   =  abs( p2 - p1 ) 
        
        wArea   =  wBase*wHeight  
        
        maxWater = max( maxWater, wArea ) 
        
        if ( heights[ p1 ] > heights[ p2 ] ) : 
        
            p2 -= 1 
            
        elif ( heights[p1] <= heights[p2] ) :  
        
            p1 += 1  
            
            
    return maxWater 
    
    
if __name__ == '__main__' : 

    containerHeights = [ 1,8,6,2,5,4,8,3,7 ] 
    
    Max_Water = mostWaterContainer( containerHeights ) 
    
    print(f"The largest Water Area is { Max_Water } u2 ")
    
    
    
