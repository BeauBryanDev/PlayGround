/*  Longest Commond SubSequences */
#include<stio.h>

//Dynamic Programming ......
//FIND THE LONGEST COMMON SEQUENCES......
int lcs(int m, char *x, int n, char *y) ;
//CHECK IS TWO BINARY TRESS ARE THE SAME .... 
//CAREFULL WITHIN THE STRUCT NODE FIRST DECLARATION IN A DIFFERENT .C FILE....
int identicalTree(struct node* a, struct node* b)  ;
//FIND THE LONGEST COMMON SUBSTRING BY DYNAMIC PROGRAMMING ...
int lcst(int m, char *x, int n, char *y) ;
//Minimum Number of Jumps to Reach End ....
int minJump(int n, int arr[])
//Convert One String to Another Using Minimum Number of Operations ...
void findMinDelInsert(int m, char x[], int n, char y[]) ;
// Count Number of Ways to Reach N'Th Stair .........
int findSteps(int n) ;
// Cutting a Rod to Maximise Profit .......
int rod_cutting( int n, int price[] ) ;

// Main Program Function .....
int main ( void )  {

/* It is to call Dynamic Programming Declared Functions above */ 

return 0 ; 

}

int lcs(int m, char *x, int n, char *y) 
{ 
    int dp[m + 1][ n + 1 ]; 
    int i, j = 0; 
    int dp_o1 , dp_o2 = 0;
    
    for (  i = 0;  i <= m ; i ++ )  {
        
        for (  j = 0; j <= n ; j ++ )   {
            
            if ( i == 0 ||  j == 0 ) 
                
                dp[i][j] = 0;
            
            else if ( x[i-1]  == y[j-1] ) 
            
                dp[i][j] = dp[i-1][j-1] + 1 ; 
                
            else {
                
                dp_o1 = dp[i-1][j] ;
                dp_o2 = dp[i][j-1] ;
                
                if ( dp_o1 >= dp_o2 ) 
                
                    dp[i][j] = dp_o1;
                    
                else 
                
                    dp[i][j] = dp_o2;
                    
            }
        }
    }
    
    return dp[m][n] ;
    
}

struct node {

   int data = data;
   node left = left ;
   node right =ritht ;
   
}

int identicalTree(struct node* a, struct node* b) 
{
    if ( a == NULL && b == NULL ) 
        
        return (1);
    
    else if ( a != NULL && b != NULL )   {
        
        if ( a->data == b->data )  {
            
            if ( identicalTree( a->left , b->left) == identicalTree ( a->right , b->right ) ) 
            
                return (1) ;
            
            else 
                 return (0);
                 
        }
    }
    else 
    
        return (0);
        

}

int lcst(int m, char *x, int n, char *y) 
{

    int dp[ m+1 ][ n+1 ] ;
    int rslt = 0; 
    
    int i, j = 0; 
    
    for ( i = 0; i <= m ; i ++ ) {
        
        for ( j= 0; j<= n ; j ++ )  {
            
            if ( i == 0 ||  j == 0 ) 
                
                dp[i][j] = 0; 
                
            else if ( x[i-1] ==  y[j-1]  )  {
                
                dp[i][j] = dp[i-1][j-1] + 1 ;
                
                if ( dp[i][j] > rslt )  
                
                    rslt = dp[i][j] ;
                    
            }
            else 
            
                dp[i][j] = 0;  
                
        }
    }
    
    return rslt ;
}

int minJump(int n, int arr[])
{       
    int jump[n] ;
    int i, j = 0; 
    jump[0] = 0;
    
    for ( i = 1 ; i < n; i ++)  
    
    jump[i] = INT_MAX ; 
    
    for ( i = 1;  i < n; i ++ ) {
        
        for ( j = 0; j < i ;  j ++ )  {
            
            if ( ( arr[j] + j) >= i ) {
                
                if ( ( jump[j] +1 ) < jump[i] ) 
                    
                    jump[i] = jump[j] + 1 ; 
            }
        }
    }

    return jump[ n-1 ] ; 
    
}

int findSteps(int n)
{
    
    int upSteps[ n+1 ] , i ;
    
    upSteps[1] = 1 ; 
    upSteps[2] = 2 ; 
    
    for ( i = 3 ; i <= n ; i ++ )  {
        
        upSteps[ i ] = upSteps[ i-1 ] + upSteps[ i-2 ] ;    
    }
    
    return upSteps[ n ] ; 
    
}

void findMinDelInsert(int m, char x[], int n, char y[])
{

    int lngth = lcs( x,y,m,n ) ;
    
    printf("Minimum Deletion = %d\n", m-lngth )  ;
    printf("Minumum Insertion = %d\n", n - lngth ) ; 

}
// Cutting a Rod to Maximise Profit .....

int rod_cutting(int n, int price[])
{
    int i, j = 0;
    int MaxProfit[ n+1 ] ;
    
    for ( i = 0 ; i <= n ; i ++ ) 
        
        MaxProfit[ i ] = 0 ; 
 
    
    for ( i = 1 ; i <= n ; i ++ )  {
        
        for ( j = 1 ; j <= i ; j ++ ) {
            
            if ( ( price[ j-1 ] + MaxProfit[ i-j ] ) > MaxProfit[ i ]  ) 
            
                MaxProfit[ i ] = price[ j-1 ] + MaxProfit[ i-j ] ;
                
        }
    }
 
    return MaxProfit[ n ] ; 
    
}








