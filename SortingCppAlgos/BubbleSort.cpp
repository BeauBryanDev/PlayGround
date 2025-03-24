#include <iostream>

using namespace std;

int flg = 0;

void showArr( int Arr[] ,  int size ) ; 
void bubbleSort( int arr[],  int siz3 );
void swap( int *a,  int *b);

int i=0, j = 0, n = 0;  

int main ( void )   {   

    cout  << "Please Provide the Size from Your Array+[] n:\t";
    cin >> n;
    int Arr[n];

    for  ( i = 0; i < n ; i ++ )  {

        cout << "Arr[ " << i <<" ] =.\t" ;
        cin >>  Arr[i];
    }
    cout << "Input Array " << endl;
    showArr( Arr , n) ;
    
    cout << "Sorte Array[N]\n" ;

    bubbleSort( Arr, n ) ;
    showArr(Arr, n );
    cout << "\n";

return 0;

}

void showArr( int Arr[] , int size )  {
    
    cout << "\nThis Array[N]:\n[  " ;
    for ( i = 0 ; i < size ; i ++ ) {

        cout << Arr[i] << ",\t";
    }
    cout << " ]\n";

}

void bubbleSort( int array[] , int siz3 ) {

    int i, j, flg = 0; 

    for ( i = 0; i < siz3 - 1 ;  i ++ )  {

        flg = 0;

        for ( j = 0 ; j < siz3 - 1 - i ; j ++ )  {

            if ( array[ j ] > array[ j + 1 ] ) {

                swap(&array[j], &array[ j + 1 ] ) ;
                flg = 1;
            }
        }
        if ( flg == 0 ) {
            break;
        }
    }
}

void swap( int * a, int * b ) {

    int tmp  =  *a;
    *a       =  *b;
    *b       =  tmp;

}



}
