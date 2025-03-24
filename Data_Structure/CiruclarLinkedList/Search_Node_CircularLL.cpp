#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class CircularLinkedList
{
    Node *head;

    public:

    CircularLinkedList()
    {
        head = NULL;
    }

    void addLast(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;

        if(head == NULL)
        {
            newNode->next = newNode;
            head = newNode;
        }
        else
        {
            Node *last = head;

            while(last->next != head)
            {
                last = last->next;
            }

            last->next = newNode;
            newNode->next = head;
        }
    }

    bool search(int key)
    {
        if(head == NULL)
            return false;

        Node *temp = head;

        do
        {
            if(temp->data == key)
                return true;
            temp = temp->next;

        }while(temp != head);

        return false;
    }

    void print()
    {
        if(head == NULL)
            return;

        Node *temp = head;
        cout << "Head =>" ;
        do
        {
            cout<<temp->data<< " => ";
            temp = temp->next;

        }while(temp != head);
        cout << " Head\n";
    }
};

int main()
{
    CircularLinkedList list;

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(28);
    list.addLast(18);
    list.addLast(12);
    list.addLast(16);
    list.addLast(8);
    list.addLast(4);
    list.addLast(26);
    list.addLast(24);
    list.addLast(22);
    list.addLast(32);
    list.addLast(36);

    list.print();

    cout<<"Searching Element: "<<20<<endl;
    if(list.search(20))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    cout<<"Searching Element: "<<26<<endl;
    if(list.search(26))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

       cout<<"Searching Element: "<<45<<endl;
    if(list.search(45))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    return 0;
}
