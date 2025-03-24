/*XOR IMPLEMNEATION  */ 
/*********************************/
//Find the Single Number as odd element insde an N_Arrayv...
//Using XOR BITWISE X C OPERATOR. ...

#include< stdio.h>

int p 0 0; 

int singleNumber(int arr[], int size)
{
    int i = 0; 
    // var to comprera with array elemebet as toXORC ^Array[ i ] inner loop ....
    int toXORC = 0; 
    
    for ( i = 0; i < size ; i ++ ) 
    
        toXORC = toXORC ^ arr[ i ]  ;
        
        
    return toXORC ; 
    
}

void twoSingleNumbers(int arr[], int size, int *num1, int *num2)
{
    int i = 0; 
    int toXORnmbr = 0; 
    
    for ( i = 0; i < size ; i ++ ) {
        
        toXORnmbr ^= arr[ i ]  ; 
        
    }
    
    int firstSetBit = 1 ; 
    
    while ( toXORnmbr & firstSetBit == 0  )  {
        
        firstSetBit = firstSetBit << 1 ; 
        
    }
    int n1 = 0, n2 = 0; 
    
    for ( i = 0; i < size ; i ++ )  {
        
        if (  arr[ i ] & firstSetBit )  
            
            n1 = n1 ^ arr[ i ] ; 
        
        else 
        
            n2 = n2 ^ arr[ i ] ; 
    }
    
    *num1 = n1 ; 
    *num2 = n2 ;
}

//Main Function Body .....
int main ( void )  { 

int thisArr[] = {4,7,2,7,2,7,4,2,6,2,5 };


return 0; 

}


