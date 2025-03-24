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

    void addLast(int val)
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
            Node *last = head;

            while(last->next != NULL)
            {
                last = last->next;
            }

            last->next = newNode;
            newNode->prev = last;
            newNode->next = NULL;
        }
    }    
 
    void print()
    {
        Node *temp = head;
        Node *last = NULL;

        cout<<"Forward Traversal"<<endl;
        while(temp != NULL)
        {
            cout<<temp->data<<endl;
            if(temp->next == NULL)
                last = temp;
            temp = temp->next;
        }

        cout<<"Backward Traversal"<<endl;
        temp = last;
        while(temp != NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->prev;
        }
    }
};

int main()
{
    DoublyLinkedList list;

    cout<<"Inserting Element: "<<10<<endl;
    list.addLast(10);
    cout<<"Inserting Element: "<<20<<endl;
    list.addLast(20);
    cout<<"Inserting Element: "<<30<<endl;
    list.addLast(30);
    cout<<"Inserting Element: "<<40<<endl;
    list.addLast(40);
    cout<<"Inserting Element: "<<50<<endl;
    list.addLast(50);
    cout<<"Inserting Element: "<<60<<endl;
    list.addLast(60);
    cout<<"Inserting Element: "<<70<<endl;
    list.addLast(70);
    cout<<"Inserting Element: "<<80<<endl;
    list.addLast(80);

    list.print();

    return 0;

}
