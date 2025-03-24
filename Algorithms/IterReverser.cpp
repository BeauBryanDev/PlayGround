/*String Reverse*/

#include <iostream>
#include <cstring> // Include the cstring header for string functions

using namespace std;

char strgg[25]; // Define the array size before initializing
int n = 0;

void reverse(char str[], int n);
void swap(char *str, int i, int j);

int main() {

    strcpy(strgg, "Paralelepipedo"); // Use strcpy to copy the string
    n = strlen(strgg); // Get the string length using strlen

    reverse(strgg, n);

    cout << "Reversed String: " << strgg << "\n";

    return 0;
}

void reverse(char str[], int n) {

    int i;
    
    for (i = 0; i < n / 2; i++) {
    
        swap(str, i, (n - i - 1) ) ;
    }
}

void swap(char *str, int i, int j) {

    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
}


