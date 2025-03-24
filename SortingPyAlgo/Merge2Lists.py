"""Merge two Sorted List 2nd Method """

def Merge2Lists( nums1, m, nums2 , n ) : 

    p1 =  m - 1 
    p2 =  n - 1 
    
    pntr = len( nums1 ) - 1 
    
    if ( m > n ) :
    
        n, m = m, n
        
        nums1, nums2 = nums2, nums1
    
    while (  p1 >= 0 and p2 >= 0 ) : 
    
        if ( nums1[ p1 ] > nums2[ p2 ] ) : 
        
            nums1[ pntr ] = nums1[ p1 ] 
            
            p1 -= 1 
            
        else : 
        
            nums1[ pntr ] =  nums2[ p2 ] 
            
            p2 -= 1 
            
        pntr -= 1 
        
        
    if ( n != m ) :
    
        nums1[ : p2 + 1 ] = nums2[ : p2 + 1 ]  
        
    return nums1 
    
    
    
# Arrays de prueba 1
nums1 = [3,5,7,0,0,0]
m = 3
nums2 = [4,6,8]
n = 3
response = Merge2Lists(nums1, m, nums2, n)
print(response)

# Arrays de prueba 2
nums1 = [1,2,3,0,0,0,0]
m = 3
nums2 = [-2,1,3,9]
n = 4
response = Merge2Lists(nums1, m, nums2, n)

print(response)

    
    
    
 
