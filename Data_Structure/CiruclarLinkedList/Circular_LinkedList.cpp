#include<iostream>

using namespace std;

class Node {

    public:

    int data;
    Node *next;
};

int main ( void )  {

    Node * head,  *middle ,  *last;

    head = new Node();
    middle = new Node();
    last = new Node();

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->next = middle;
    middle->next = last;
    last->next = head;

    cout<<"Circular LinkedList Elements Are:"<<endl;

    Node *temp = head;
    
    do
    {
        cout<<temp->data<<endl;
        temp = temp->next;

    }while(temp != head);


    return 0;

}