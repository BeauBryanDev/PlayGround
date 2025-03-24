/* SLOW && FAST POINTERS */ 

#include<stdio.h>
#include<bits/stdc++.h>

int p = 0; 

//Get The Middle of the Linkedlist
int getMiddleNode(struct node *head) ;
//DETECT LINKEDlIST lOOP.
int hasLoop(struct node *head) ;
// Get the Length of the LinkedList Loop ...
int loopLength(struct node *head)
//Calculate the length of the loop in Linked list...
int calculateLoopLength( struct node * slow ) ;

// Definition for a linked list node.
struct node
 {
    int data;
    struct node *next;
};


int main ( void )  {

//BODY OF THE MAIN FUNCTION hERE ....

return 0; 

}


int getMiddleNode(struct node *head)
{
    
    if ( head == NULL )  
    
        return -1 ; 
        
    struct node *slow , *fast ;
    
    slow = fast =  head ; 
    
    while ( fast != NULL && fast->next != NULL )  {
        
        slow = slow->next ;
        fast = fast->next->next ;
    }
        
    return slow->data ; 
    
}
//DOES LINKED LIST HAS A LOOP....
int hasLoop(struct node *head)
{

    struct node *slow , *fast ;
    slow = fast = head ; 
    
    while ( fast != NULL && fast->next != NULL ) {
        
        slow = slow->next ; 
        fast = fast->next->next ;
        
        /*If slow and fast point to the same pointer 
        THen LinkedList has a Lopp Insde */
        
        if ( slow == fast )  
        
            return (1);
            
    }
    
    return (0) ; 
    
}

int loopLength(struct node *head)
{
    
    struct node *slow, *fast ; 
    slow = fast = head ; 
    
    while (  slow != NULL && fast != NULL && fast->next != NULL )  {
        
        slow = slow->next ; 
        fast = fast->next->next ; 
        
        if ( slow == fast )  {
        
            return calculateLoopLength( slow ) ;
        }
    }
    
    return (0); 
    
}

int calculateLoopLength( struct node * slow )  {
    
    struct node *current = slow ; 
    
    int length = 0; 
    
    do {
        
        current = current->next ; 
        length ++ ; 
        
    } while ( current != slow )  ; 
    
    return length ; 

}

node* findLoopStart(struct node *head)
{
   node *slow , *fast ; 
   slow = fast = head ; 
   
   while (  slow != NULL && fast != NULL && fast->next != NULL )  {
       
       slow = slow->next ; 
       fast = fast->next->next ;
       
       if ( slow == fast )  {
           
           return getLoopStart(  head, slow , fast ) ; 
       }
   }
   
}

node *getLoopStart( node *head, node *slow, node * fast )  {
    
    slow = head ; 
    
    while ( slow != fast )  {
        
        slow = slow->nect ; 
        fast = fast->next ; 
        
    }   
    
    return slow ; 
    
}

int isHappyNumber(int num)
{
    
    int fast, slow ;
    slow = num, fast = num ; 
    
    do {
        
        slow = digitSquareSum( slow )  ;
        fast = digitSquareSum( digitSquareSum( fast ) ) ;
        
    } while ( slow != fast )  ; 
    
    return ( slow == 1 ) ; 

}

int digitSquareSum( int num )  {
    
    int sum = 0, mod = 0 ; 
    
    while ( num >= 1 ) {
        
        mod = num % 10 ; 
        sum = sum + ( mod * mod ) ; 
        num = num / 10 ; 
        
    }
    
    return sum ; 
}



