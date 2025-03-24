/* KnapSack Challenge */
/* Dynamic Programming */ 

#include<stdio.h>

int knapSack(int c, int n, int wt[], int val[])
{
    int i, w = 0; 
    
    int dp[n + 1] [ c + 1 ] ;
    
    int popt1, popt2;
    
    for ( i = 0; i <= n ; i ++ ) {
        
        for ( w = 0; w <= c ; w ++ ) {
            
            if ( i == 0 || w == 0 ) 
            
                dp[i][w] = 0; 
            
            else if (  wt[ i-1 ] <= w )  {
                
                popt1 = val[i-1] + dp[i-1][w -wt[i-1] ]  ; 
                popt2 = dp[i-1][w] ;
                
                if ( popt1 >=  popt2 ) 
                
                    dp[i][w] = popt1;
                    
                else 
                    dp[i][w] = popt2;
                    
                }
                
            else 
            
                dp[i][w] = dp[ i-1 ][w] ;
        }
        
    }
    
    return dp[n][c] ;

}

int main ( void )  {



return 0; 

}




