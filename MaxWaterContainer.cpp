#include <iostream>

using namespace std;

int main() {

    int array[] = {1,8,6,2,5,4,8,3,7};

    int lngth = sizeof(array)/sizeof(array[0]);

    int maxW = 0;

    for (int i = 0; i < lngth ; i++) {

        int elmt1 = array[i];

        for (int j = i + 1; j <= lngth ; j++) {

            int elmt2 = array[j];

            int base = j - i;

            int area;

            if (elmt2 < elmt1 ) { 

                area = base * elmt2;

            } else {

                area = base * elmt1;

            }

            cout << i << " " << j << ": " << area << endl;

            if (area > maxW ) {

                maxW = area;

    

            }

        }

    }  

    cout << maxW << endl;

    return 0;
    
    
}

//EOF


