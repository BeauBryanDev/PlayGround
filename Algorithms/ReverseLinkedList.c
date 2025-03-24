/* Reverse LinkedList */ 

#include<stdio.h>
#include <stdlib.h>


int p = 0; 


//Definition for a linked list node here .....

struct node
{
   int data;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
    //Write your code here....
    struct node *newNode = malloc(sizeof( struct node));
    
    newNode->data = val;
    newNode->next = head;
    
    head = newNode;

}

void deleteNode(struct node **head, int key)
{     
     //Write your code here....
     
     struct node *temp;
     
     if ( (*head)->data ==  key ) {
         
         temp = *head;
         *head = (*head)->next;
         
         free(temp);
         
     }
     else {
         
         struct node *current = *head;
         
         while ( current->next != NULL )  {
             
             if (  current->next->data == key ) {
                 
                 temp = current->next;
                 
                 current->next = current->next->next;
                 
                 free(temp);
                 
                 break;
             }
             
             else {
                 
                 current = current->next;
             }
         }
     }

}

//Don't change the below code
void addLast(struct node **head, int val)
{   
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if(*head == NULL)
         *head = newNode;
    else
    {   
        struct node *lastNode = *head;

        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
    }

}

void printList(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
//Function to Reverse a LinkedList from last element to head ....
void reverse(struct node *head)
{

    struct node *current = head ;
    struct node *prev = NULL ;
    struct node *n3xt = NULL  ;
    
    while ( current != NULL )  {
        
        n3xt = current->next ;
        current->next = prev ;
        
        prev = current ; 
        
        current = n3xt ; 
    }   
    
    head = prev ; 

}

struct node* reverseSubList(struct node *head, int start, int end)
{

    if ( start == end )  
    
        return head ; 
        
    struct node *current = head;
    struct  node *prev    = NULL ;
    int i = 0; 
           
    for ( i = 1 ; current != NULL && i < start ; i ++ )  {
        
        prev = current ; 
        current = current->next ; 
        
    }
    
    struct node *firstPartLastNode = prev; 
    struct node *secondPartLastNode = current ;
    
    struct node *next ; 
    
    for ( i = 1 ; current != NULL && i <= end - start  + 1 ;  i ++ )  {
        
        next = current->next;
        current->next = prev;
        prev = current;
        current = next; 
    }
    
    if ( firstPartLastNode != NULL  ) 
    
        firstPartLastNode->next = prev ; 
    
    else 
        
        head = prev ; 
        
    secondPartLastNode->next = current ; 

}


int main ( void )  {


    struct node *head = NULL;

    addLast(&head,10);
    addLast(&head,20);
    addLast(&head,30);
    addLast(&head,40);
    addLast(&head,50);
    addLast(&head,60);
    addLast(&head,70);
    addLast(&head,80);
    addLast(&head,90);
    
    int key;
    
    scanf("%d",&key);

    deleteNode(&head, key);

    printList(head);
    
    reverse(head) ;
    
    printf("++++++++++++++000\n") ;
    
    printList( head ) ; 
    
    printf("\n");
    
return 0 ; 

}


