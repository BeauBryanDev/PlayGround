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

    void addLast(int val)
    {
        Node *newNode = new Node();

        newNode->data = val;
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else
        {
            Node *lastNode = head;

            while(lastNode->next != NULL)
            {
                lastNode = lastNode->next;
            }

            lastNode->next = newNode;
        }
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
    list.addLast(5+60);

    cout<<"The LinkedList Elements Are:"<<endl;
    list.print();
    cout << "\n";


}
