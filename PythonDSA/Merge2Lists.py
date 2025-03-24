#Merge x2*Sroted Lists ...

def mergeLists( list1, list2, n,m ) : 

    if ( m > n  ) : 
    
        n,m =  m,n 
        list1, list2 = list2, list1 
        
    pntr1 =  m-1 
    pntr2 =  n-1 
    lng   =  m+n -1
    
    for  mp in range( lng , 0 , -1 )  : 
    
        if ( pntr1 < 0 or list2[pntr2] > list1[pntr1] or list1[pntr1] == None ) :
    	
    	
            list1[mp] = list2[pntr2] 
            pntr2 = pntr2 - 1 
    	    
        else :
        
            list1[mp]  = list1[ pntr1 ] 
             
            pntr1 = pntr1 - 1 ; 
    	     
    	     
    return list1  
    
    
if __name__ =='__main__':

    
     list2 = [5,7,9,None,None,None,None]
     n = 3
     list1 = [ 12,14,16,18]
     m = 4
     print( end = " \n")
     print(mergeLists(list1, list2,n,m))
     print( end = " \n")
 
 
 
     	
