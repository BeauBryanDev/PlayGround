#Find the Longest SubString Len ....

def lengthOfLongestSubstring(selft, s: str ) -> int :

   # Wirte your code here bellow ....

   p1 = 0
   largestLen = 0

   chars = { }

   for p2 , char in enumerate( s ) : 

      if ( char in chars ) : 

         p1 = max( p1, chars[ char ] + 1 ) 

      largestLen = max( largestLen , ( p2-p1+1) ) 

      chars[ char ] = p2 
      

   return largestLen


response = lengthOfLongestSubstring("abcabcbb")
print(response)

response2 = lengthOfLongestSubstring("jdkafnlcdsalkxcmpoiuytfccv")
print(response2)



