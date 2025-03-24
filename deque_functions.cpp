//DeQue....DSA....

#include<iostream>

using namespace std ; 


struct Node {

    int data ;
    Node *next ;
    Node *prev ; 
    
 };

NOde * front = NULL ;
Node * rear  = NULL ;

Node * getNode ( int val )  {
    
    Node *tmp = new Node ; 
    
    tmp->data = val  ;
    tmp->next = NULL ;
    tmp->prev = NULL ;
    
     
    return tmp; 
    
}

Node *front = NULL;
Node *rear  = NULL; 

bool isEmpty()  {
    
    if ( front == NULL  )  
    
        return true ; 
        
     return false ; 

}

int getFront( )  {
    
    if ( isEmpty() ) 
    
         return -1;
         
     return front->data;
}

int getRear()  {

   if ( isEmpty() ) 
   
       return -1; 
       
    return rear->data ; 
    
}

void insertFront( int val )  {

    Node *newNode = getNode( val ) ; 
    
    if ( front == NULL )  
    
        front = rear = newNode; 
        
    else   {
        
        newNode->next = front;
        front->prev   = newNode; 
        front =  newNode ; 
    
    }
}

void insertRear( int val )  {
    
    Node *newNode =  getNode( val ) ; 
    
    if ( rear == NULL )  
    
        front = rear = newNode ; 
        
    else  {
    
        rear->next = newNode ; 
        newNode->prev = rear ; 
        rear = newNode ; 
    
}

void deleteFront (  )  { 
    
    if ( front == NULL )  
    
        cout<<"DeQue is Empty\n"<<endl; 
        
    else  {
    
        Node *tmp = front ; 
        
        front = front->next ; 
        front->prev = NULL ; 
        
        if ( front == NULL )  
        
            rear = NULL ; 
        
        else 
            
            front->prev = NULL ;
    
        free(tmp) ;
    }

}

void deleteRear ( )  {
    
    if ( front == NULL )  
    
    	cout<<"Deque is Empty\n"<<endl; 
    	
    else  {
    
        Node *tmp = rear ; 
      
        rear =  rear->prev ; 
      
        if ( rear == NULL )   
        
            front = NULL ; 
            
        else  
        
            rear->next = NULL ; 
            
        free( tmp ) ;   

}

void printDeque()
{
    if(front == NULL)
    
        cout<<"Deque is Empty"<<endl;
    else
    {
        cout<<"Deque:";
        
        node *temp = front;
    
        while(temp != NULL)
        {
        
            cout<<temp->data<<" ";
            temp = temp->next;
        }

        cout<<endl;
    }    

}






