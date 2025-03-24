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

    void print()
    {
        if(head == NULL)
            return;
    
        Node *temp = head;
        cout << "Head =>" ;
        do
        {
            cout<<temp->data<< " ==> ";
            temp = temp->next;

        }while(temp != head);

        cout << " Head\n";
    }
};

int main()
{
    CircularLinkedList list;

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
    cout<<"Inserting Element: "<<80<<endl;
    list.addLast(80);

    cout<<"Circular LinkedList Elements Are:"<<endl;
    list.print();

    return 0;
}
