#include<iostream>
#include<stdlib.h>

using namespace std ; 

int i,j;

class Node {

    public : 

    int  data;
    Node * prev;
    Node * next;
    
};

int main ( void  )   {

    Node *head,  *middle,  * last;

    head = new Node();
    middle = new Node();
    last = new Node();

    head->data = 10;
    middle->data = 20 ; 
    last->data = 30; 

    head->next = middle;
    middle->prev = head;
    middle->next = last;
    last->prev = middle;
    last->next = NULL;

    Node *temp = head;

    cout<<"Forward Traversal"<<endl;
    int cnt1 = 0;

    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
        cnt1 ++;
    }

    temp = last;
    int cnt2 = 0;

    cout<<"Backward Traversal"<<endl;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->prev;
        cnt2 ++;
    }

    cout << endl;

    cout << cnt1 << " Number of Elelments of Doubble_Lined_list : " << cnt2 << endl;

    return  0; 

}