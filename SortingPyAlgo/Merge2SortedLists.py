"""Code to Merge to Sorted List into the first sorte list by expanding it zeros size up to n + m  + 1 at the end """

def merge_lists(nums1, m, nums2, n):
   # Tu código aquí [Bellow ].....
   #check dor nums1 Size ...
   if ( n+m < len(nums1) ) :

      return -1

   p1 = m-1 
   p2 = n -1 

   itr = m + n -1 
   
   if ( itr != ( len( nums1 ) - 1 ) ) : 
   
   	return -1 
   	

   while ( p1 >= 0 and p2 >= 0 )  : 

      if ( nums1[ p1 ] > nums2[ p2 ] ) :

         nums1[ itr ] = nums1[ p1 ]
         p1 = p1 - 1 

      else : 

         nums1[ itr ] = nums2[ p2 ] 
         p2 = p2 - 1 

      itr = itr -1 

   while ( p1 >= 0 ) :

      nums1[ itr ] = nums1[ p1 ] 

      p1 = p1 -1 
      itr = itr -1

   while ( p2 >= 0 ) : 

      nums1[ itr ] = nums2[ p2 ] 
      
      p2 = p2 - 1 
      itr = itr -1
   
   return nums1 


# Arrays de prueba 1
nums1 = [3,5,7,0,0,0]
m = 3
nums2 = [4,6,8]
n = 3
response = merge_lists(nums1, m, nums2, n)
print(response)

# Arrays de prueba 2
nums1 = [1,2,3,0,0,0,0]
m = 3
nums2 = [-2,1,3,9]
n = 4
response = merge_lists(nums1, m, nums2, n)
print(response)


