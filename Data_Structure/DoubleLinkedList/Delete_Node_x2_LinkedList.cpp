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

    void del(int key)
    {
        if(head == NULL)
            return;

        Node *temp = head;

        while(temp != NULL && temp->data != key)
        {
            temp = temp->next;
        }

        if(temp == NULL)
            cout<<"Key Not Found"<<endl;
        else if(temp == head)
        {
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
        else if(temp->next == NULL)
        {
            temp->prev->next = NULL;
            delete temp;
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
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

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);

    cout<<"Doubly Linked List: null<-10<->20<->30<->40->null"<<endl;

    int key = 20;
    cout<<"Deleting Element: "<<key<<endl;
    list.del(key);

    cout<<"After Deletion"<<endl;
    list.print();

    return 0;
    
}

