#ReOrder a LinkedList ....

class Node :

    def __init__( self , Value=None, Next=None   ) :
        
        self.Value = Value 
        self.Next = Next  
        
    def __str__( self ) :
        
        return str[self.Value ]

class ReOrderList()  : 

    def __init__( self, head ) :

        self.head   = head 
        self.length = 0 
        
    def addNode ( self, Value ) :
        
        newNode = Node ( Value ) 
        
        if ( self.length == 0  ) :
            
            self.head = newNode 
            
        else : 
            
            current = self.head 
            
            while ( current.Next is not None ) :
                
                current = current.Next
            
            current.Next = newNode 
            
        self.length += 1
        
        return newNode

    def FindMiddleNode( self, head ) : 

        slow = fast = head ; 

        while ( fast and fast.next != None ) :

            slow = slow.Next 
            fast = fast.Next.Next 

        return slow 


    def reverseList( self, head ) : 

        prev = None 
        current = head 

        while ( current != None )  : 

            nextNode      = current.Next 
            current.Next  = prev 
            prev          = current 
            current       = nextNode 

        
        head = prev

        return head 

    def reOrderList( self, head )  : 

        if not head or not head.Next :

            return head 

        middle = self.FindMiddleNode( head ) 
        tail   = self.reverseList( middle.Next ) 
        middle.Bext =  None 

        current = head 
        
        while ( tail != None ) : 

            nextNode      = current.Next 
            current.Next  = tail
            tail          = tail.Next
            current.Next.Next = nextNode 
            current       =  nextNode 


        return head 

    def PrintList( self , head ) :

        current = head 

        while ( current != None ) : 

            print(current.value , end=' ' ) 

            current = current.Next 


if __name__ == '__main__' :
    
    myLList = ReOrderList( None ) 
    
    myLList.addNode(3)
    myLList.addNode(6)
    myLList.addNode(4)
    myLList.addNode(2)
    myLList.addNode(8)
    myLList.addNode(5)
    myLList.addNode(9)
    
    
    myLList.PrintList( myLList )
   
    myLList.reOrderList()
   
    myLList.PrintList()
    
    



