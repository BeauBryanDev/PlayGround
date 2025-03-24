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

    void addFirst(int val)
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
             
                last = last->next;
             

            last->next = newNode;
            newNode->next = head;
            head = newNode;
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
            cout<<temp->data<< "=> ";
            temp = temp->next;

        }while(temp != head);

        cout << " Head\n";
    }
};

int main()
{
    CircularLinkedList list;

    cout<<"Inserting Element: "<<10<<endl;
    list.addFirst(10);
    cout<<"Inserting Element: "<<20<<endl;
    list.addFirst(20);
    cout<<"Inserting Element: "<<30<<endl;
    list.addFirst(30);
    cout<<"Inserting Element: "<<50<<endl;
    list.addFirst(50);
    cout<<"Inserting Element: "<<60<<endl;
    list.addFirst(60);

    cout<<"Circular LinkedList Elements Are:"<<endl;
    list.print();

    return 0;
}
