#include <iostream>

using namespace std ; 


int sum(int n)
{
    
    int sume = 0; 
    
    if ( n == 1 )
    
        return n;
    
    else 
    
        sume = n + sum(n-1);
        
    
    return sume;
    
}

int main ( void )  {

    int Z = 0;
    printf("Please Enter a natural Number\t:");
    cin >> Z >> endl;
    
    sum4 = sum(Z);
    
    cout << "Sum of "<< Z << "is : " sum4 << endl;
	
return 0 ;

}

