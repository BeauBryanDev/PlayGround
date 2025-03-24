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

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);
    list.addLast(60);
    list.addLast(15);
    list.addLast(45);
    list.addLast(35);
    list.addLast(25);
    list.addLast(55);
    list.addLast(85);
    list.addLast(70);
    list.addLast(80);

    cout<<"The LinkedList Elements Are:"<<endl;

    list.print();

    cout<<"Searching Element: "<<30<<endl;

    if(list.search(30))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    cout<<"Searching Element: "<<80<<endl;

    if(list.search(80))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

    cout<<"Searching Element: "<<90<<endl;

    if(list.search(90))
        cout<<"Search Found"<<endl;
    else
        cout<<"Search Not Found"<<endl;

  //  int Siz3 =  (sizeof(list)/sizeof(list[0]));
   // cout << "Number of Elelments in LinkedLikst :\t" << Siz3 << endl;
    cout << "\n";

    return 0;
}
