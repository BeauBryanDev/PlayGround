#include<stdio.h>

//Iteractive >Find the sqrt Root of Given Number ....

int i, n, sum;

float findRoot(int) ;

int main ( void )  {

    int number = 0 ; 
    printf("Engter a Number to dind out SQRT()\t:\t");
    scanf("%d", &number);
    n = findRoot(number);
    printf("sqrt of %d is %d", number,n);
    
    printf("\nENdof Line}\n");


return 0 ; 

}

float findRoot( int number )  {

    float k = 0; 
    float dlt = 0.1;
    float rslt = 0.0;

    for ( k = 0; k*k <= number ; k++ )  {


    }

    return k;

}
