#include<iostream>
#include<cstring>

using namespace std ; 

char strgg[25]; 
int n = 0 ; 

void reverser( char str[] , int i , int n ) ; 
void swapper( char *str1 , char *str2) ; 

int  isPalindrome( char str[], int start, int end ) ;
int countVowels(char str[], int  n );
int isVowel( char ch ) ;

int main ( void )  {

    strcpy( strgg , "Paralelepipedo");
    n = strlen(strgg);

    reverser( strgg, 0, n ) ; 
    
    cout<<"REversed String "<< strgg << endl; 

    
return 0; 

}

void reverser( char str[] , int i ,int n ) {
    
    if ( i>= n/2 ) 

        return ;

    swapper( &str[i] , &str[n-i-1] ) ;

    reverser(str, i+1 , n );

}

void swapper(char *str1 , char *str2 ) {

    char tmp ;
    tmp  = *str1 ; 
    *str1 = *str2 ; 
    *str2 = tmp ; 

}

int isPalindrome(char str[], int start, int end)
{
    
    if ( start >= end ) {
        
        return 1;
    }
    else if ( str[start] == str[end] ) {
        
        isPalindrome( str, start+1, end -1);
    }
    else 
    
        return 0;
        
}

int countVowels(char str[], int n)
{
    static int cnt = 0; 
    
    if ( n < 0 ) {
        
        return cnt;
        
    }
    
    if ( isVowel( str[n] ) ) 
    
        cnt ++;
    
    else 
    
        countVowels( str, n-1 );
    
}

int isVowel( char ch ) {
    
    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||  ch == 'u' ) 
    
        return 1;
    
    else 
    
        return 0;
        
}





