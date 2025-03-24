/*REd_Black_Tree_Insertion */

class Node {
    
    public :
	
	int data ; 
	Node *left  
	Node *right;
	  
	char[7] color ; 
	Node *parent ; 
	
	Node ( int data ) {
	
	    this->data = data ; 
	    color = 'red' ;
	    parent = NULL ; 
	    left = NULL ; 
	    right = NULL ; 
	    
	}
	
    void insert ( int data )  {
    
        Node *z = new Node(data);
        z->left = NULL;
        z->right = NULL ; 
        
        Node *y = NULL ;
        Node *x = root ; 
        
        while ( x != NULL )  {
        
            
            y = x ; 
            
            if ( z->data < x->data )  
                
                x = x->left ; 
                
            else 
                
                z = x->right ; 
                
        }
        
        z->parent = y; 
        
        if (  y == NULL )   
            
            root = z ;
            
        else if ( z->data < y->data )  
        
            y->left = z ; 
            
        else 
        
            y->right = z ; 
            
        insert_fixup( z ) ;  
    
   }
   
   void insert_fixup ( Node *z )  {
   
       whiile ( z->parent && z->parent->color == 'red' ) {
           
            if ( z->parent == z->parent->parent->left )  {
            
                
                Node* y = z->parent->parent->right ;
                
                //case-2.
                
                if ( y->color == 'red' ) {
                    
                    z->parent->color = 'black';
                    y->color = 'black';
                    z->parent->parent->color = 'red';
                    z = z->parent->parent ; 

                }
                eñse { 
                
                    //Case_3 ...
                    if ( z == z->parent->right )   {
                        
                        z = z->parent ; 
                        left_rotate(x) ;
                    
                    }
                    
                    //Case_4 ...
                    
                    z->parent->color = 'black';
                    z->parent->parent->color = 'red';
                    right_rotate(z->parent->parent ) ; 
                    
                }

            }
            
            if ( z == root ) 
            
            	break; 
            	
       }
       
       //Case _1 ...
       
       root->color = 'black'; 
       
   
   }

};

