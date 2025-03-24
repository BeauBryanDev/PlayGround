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

    bool search(int key)
    {
        Node *temp = head;

        while(temp != NULL)
        {
            if(temp->data == key)
                return true;
            temp = temp->next;
        }

        return false;
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

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);

    cout<<"Doubly Linked List: null<-10<->20<->30<->40->null"<<endl;

    cout<<"Searching Element: "<<30<<endl;
    if(list.search(30))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    cout<<"Searching Element: "<<100<<endl;
    if(list.search(100))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    return 0;
    
}
