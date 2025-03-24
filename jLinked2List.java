class Node {
    
    protected int Value ;
    protected Node Next;
    protected Node Prev;

    Node ( int x )  {
    
        value = x ;
        Next = null ;
        Prev = null ;

    }
    public void  addFNode ( Node NextNode  )  {

        this.Next = NextNode ;

    }
    public void addPNode (  Node PrevNode )  {

        this.Prev = PrevNode ;

    }
    public int UpdateNode ( int NewNode )  {

        this.value = newNode ;
        
        return this.value ; 

    }

}
