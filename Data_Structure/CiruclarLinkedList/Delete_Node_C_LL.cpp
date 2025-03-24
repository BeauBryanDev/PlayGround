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

    void del(int key)
    {
        if(head == NULL)
            return;

        if(head->data == key && head->next == head)
        {
            head = NULL;
        }
        else if(head->data == key)
        {
            Node *last = head;

            while(last->next != head)
            {
                last = last->next;
            }
            last->next = head->next;
            head = head->next;
        }
        else
        {
            Node *current = head;

            while(current->next != head)
            {
                if(current->next->data == key)
                {
                    current->next = current->next->next;
                    break;
                }
                current = current->next;
            }
        }
    }

    void print()
    {
        if(head == NULL)
            return;

        Node *temp = head;

        do
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }while(temp != head);
    }
};

int main()
{
    CircularLinkedList list;

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);

    cout<<"Circular Linked List: 10->20->30->10"<<endl;

    int key = 30;
    cout<<"Deleting Element: "<<key<<endl;
    list.del(key);

    cout<<"After Deletion"<<endl;
    list.print();

    return 0;
    
}
