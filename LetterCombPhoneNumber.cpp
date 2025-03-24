#include<iostream>
#include<vector>
#include<string.h>

using namespace std ; 

int p = 0;

vector<string> letterComb( string cellNumbers ) {

    unorder_map<char string> keyboard ;

    keyboard['2'] = "abc";
    keyboard['3'] = "def";
    keyboard['4'] = "ghi";
    keyboard['5'] = "jkl";
    keyboard['6'] = "mno";
    keyboard['7'] = "pqrs";
    keyboard['8'] = "tuv";
    keyboard['9'] = "wxyz";

    vector<string> wordList ; 
    
    getComb( 0 , cellNumber, "", worldList ,keyboard ) ;  

    return wordList;

}

void getComb( int i , string CellNumber, singleWord , vector<string> wordList , unordered_map<char, string> keyboard ) {

    if (  i == cellNumber.length() ) {

        if ( singleWord != "" )  { 
            
            wordList.push_back( singleWord ) ;
            
        }

        return ; 

        for ( chr :  keyboard[cellNumber[i] ] ) {
            
            getComb( i+1, CellNumber, singleWord + chr , wordList, keyboard ) ;
            
            }

        }
    }

int main ( void )  {


return 0 ; 

}


