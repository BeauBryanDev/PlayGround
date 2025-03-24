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

    void del(int key)
    {
        Node *temp;

        if(head->data == key)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *current = head;

            while(current->next != NULL)
            {
                if(current->next->data == key)
                {
                    temp = current->next;
                    current->next = current->next->next;
                    delete temp;
                    break;
                }
                else
                    current = current->next;
            }
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

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);

    cout<<"The LinkedList Elements Are [Before Deletion]:"<<endl;
    list.print();

    cout<<"Deleting Element: "<<30<<endl;
    list.del(30);

    cout<<"The LinkedList Elements Are [After Deletion]:"<<endl;
    list.print();

    cout << endl;

    return 0;
}
