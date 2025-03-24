#include<iostream>
#include<stdlib.h>

using namespace std ; 

int i,j;

class Node {

    public : 

    int  data;
    Node * next;
    
};

int main ( void  )   {

    Node * head, *middle, * last;

    head =  new Node();
    middle = new Node();
    last = new Node();

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->next = middle;
    middle->next = last;
    last->next = NULL;

    Node *tmp = head;

    while ( tmp != NULL )
    {
        cout << tmp->data << endl; 
        tmp = tmp->next;
    }
    

    return  0; 

}