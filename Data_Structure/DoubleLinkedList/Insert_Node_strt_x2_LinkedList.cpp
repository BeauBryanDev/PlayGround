#include<iostream>

using namespace std;

class Node
{
    public:
    Node *prev;
    int data;
    Node *next;
};

class DoublyLinkedList
{
    Node *head;

    public:

    DoublyLinkedList()
    {
        head = NULL;
    }

    void addFirst(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;

        if(head == NULL)
        {
            newNode->prev = NULL;
            newNode->next = NULL;
            head = newNode;
        }
        else
        {

            newNode->prev = NULL;
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    
    void print()
    {
        Node *temp = head;
        Node *last = NULL;

        cout<<"Forward Traversal......"<<endl;
        cout << "NULL<=\t";
        while(temp != NULL)
        {
            cout<<temp->data << "=>\t";
            if(temp->next == NULL)
                last = temp;
                
            temp = temp->next;
        }
        cout << "NULL\n"  << endl;

        cout<<"Backward Traversal......."<<endl;
        temp = last;
        cout << "NULL<=\t";
        while(temp != NULL)
        {
            cout<<temp->data<< "=>\t";
            temp = temp->prev;
        }
        cout << "NULL\n"  << endl;
    }
};

int main()
{
    DoublyLinkedList list;

    cout<<"Inserting Element: "<<10<<endl;
    list.addFirst(10);
    cout<<"Inserting Element: "<<20<<endl;
    list.addFirst(20);
    cout<<"Inserting Element: "<<30<<endl;
    list.addFirst(30);
    cout<<"Inserting Element: "<<40<<endl;
    cout << "........"  << endl;
    list.addFirst(40);
    list.addFirst(45);
    list.addFirst(65);
    list.addFirst(85);

    list.print();

    return 0;
}