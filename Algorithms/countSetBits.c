#include<stdio.h>

//counting set bits in binary number ....

   int countSetBits(int n)
    {
    int cnt = 0; 
    
    while ( n )  {
        
        n = n & n-1 ;
        cnt ++;
        
     }
    
    return cnt ; 
    
}

int main ( void )  {
    
    printf("Count the number of set bits\n");
    int number = 0; 
    printf("\nEnter a Decimal Number:\t");
    scanf("%d", &number);
    
    printf("Number of SET_Bits as>> 1:\t%i\n",countSetBits(number));

return 0;

}
