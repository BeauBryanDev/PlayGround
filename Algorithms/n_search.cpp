/* Search Insert Position of K in a Sorted Array */ 

#include <iostream>
#define SIZE 30
using namespace std ; 

int searchInsertPosition(int arr[], int size, int n)
{   
  //Write your code here......
  int start, end, mid ; 
  
  start = 0 ; 
  end = size - 1 ;
  
  while ( start <= end )  {
      
      mid = ( start + end ) / 2 ; 
      
      if ( arr[mid] == n ) 
      
        return mid ; 
    
    else if ( arr[mid] > n ) 
        
        end = mid - 1 ;
        
    else 
        start = mid + 1 ;
  }
  
  return end + 1 ; 
  
}

int main ( void )  {

	int myArr[SIZE]  = { 3,5,8,9,13,15,16,18,21,24,27,28,35,36,45,48,54,56,64,65,68,72,76,79,81,84,86,90,94,96 };
	
	int numb3r = 25;
	int output2 = searchInsertPosition(myArr, SIZE, numb3r );
	 
	cout <<  numb3r << " was to be Inserted at " << output2 << " Position" << endl;
	
return 0 ; 

}



