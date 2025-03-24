#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
    Node *head;

    public:

    LinkedList()
    {
        head = NULL;
    }

    void addFirst(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = head;

        head = newNode;
    }

    void print()
    {
        Node *temp = head;

        while(temp != NULL)
        {
            cout<<temp->data<< "=>\t";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    LinkedList list;

    cout<<"Inserting Element: "<<10<<endl;
    list.addFirst(10);
    cout<<"Inserting Element: "<<20<<endl;
    list.addFirst(20);
    cout<<"Inserting Element: "<<30<<endl;
    list.addFirst(30);
    cout<<"Inserting Element: "<<50<<endl;
    list.addFirst(50);
    cout<<"Inserting Element: "<<40<<endl;
    list.addFirst(40);
    cout<<"Inserting Element: "<<25<<endl;
    list.addFirst(25);
    cout<<"Inserting Element: "<<35<<endl;
    list.addFirst(35);
    cout<<"Inserting Element: "<<45<<endl;
    list.addFirst(45);
    cout<<"Inserting Element: "<<15<<endl;
    list.addFirst(15);
    cout<<"Inserting Element: "<<60<<endl;
    list.addFirst(60);

    cout<<"The LinkedList Elements Are\n:"<<endl;
    list.print();
    cout << "\n";

    return 0;
}