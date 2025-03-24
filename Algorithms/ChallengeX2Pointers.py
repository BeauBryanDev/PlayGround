#Move All Zero Elelments to the end of the list ....

def moveZeros( nums ) :

    p1 = 0 
    p2 = len( nums ) - 1 

    pSort = 0

    while ( p1 < p2 ) : 

        if ( nums[p1] == 0 ) : 

            nums[ p1 ] , nums[ p2 ] = nums[ p2 ] , nums[ p1 ] 

            p2 -= 1 

        else :

            p1 += 1 


        if ( nums[ p1 ] != 0 ) : 

            if ( nums[ pSort ] > nums[ p1 ] ) : 

                nums[ pSort ] , nums[ p1 ] = nums[ p1 ] , nums[ pSort ] 

                pSort += 1 

        
    return nums 

def invString( s ) : 

    p1 = 0 
    p2 = len( s ) -1 

    while ( p1 < p2 ) : 

        s[ p1 ] , s[ p2 ] = s[ p2 ] , s[ p1 ] 

        p1 += 1
        p2 -= 1 

    
    return s 

def Sort_RGB( nums ) : 

    Red   = 0
    Green = 1
    Blue  = 2 

    p1 = 0 
    p2 = len(nums) -1 


def revers_vowels( Stng ) : 

    vowels = 'aeiouAEIOU' 

    Stng = list(Stng) :  

    p1 = 0
    p2 = len( s ) -1 

    while ( p1 < p2 ) : 

        if ( Stng[ p1 ] in vowels and Stng[ p2 ] in vowels ) : 

            if Stng[ p1 ] != Stng[ p2 ] ) : 

                Stng[ p1 ] , Stng[ p2 ] = Stng[ p2 ] , Stng[ p1 ] 
                
                p1 += 1
                p2 -= 1 

            elif ( Stng[ p1 ] == Stng[ p2 ] ) : 

                p1 += 1
                p2 -= 1

        else : 

            if Stng[ p1 ] not in vowels : 

                p1 += 1
            
            if Stng[ p2 ] not in vowels : 

                p2 -= 1 

    
    return ''.join(Stng) 


def sqrt_Sorted_Array( nums ) : 

    nums = [ (x)**2 for x in nums ] 

    p1 = 0 
    p2 = len( nums) -1 

    SortedArray = [0]  * len(nums)

    pSortedArray = len(nums) -1 

    while ( pSortedArray >= 0 ) : 

        if ( nums[ p1 ] > nums[ p2 ] ) : 

            SortedArray[ pSortedArray] = nums[ p1 ] 
           
            p1 += 1

        else : 

            SortedArray[ pSortedArray ] = nums[ p2 ]

            p2 -= 1

        pSortedArray -= 1 
    
    
    return SortedArray 


def isPalindrome( Stng ) : 

    p1 = 0
    p2 = len( Stng ) - 1 

    while ( p1 < p2 ) :

        if ( Stng[ p1 ] != Stng[ p2 ] ) : 

            s1, s2 = Stng[ p1:p2 ] , Stng[ p1+1:p2+1 ] 

            return ( s1 == s1[::-1] or s2  == S2[::-1] 

        p1 += 1
        p2 -= 1

    
    return True 






if __name__ == '__main__' : 


