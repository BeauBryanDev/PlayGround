//Insert  Function 

void insert( vector<int> &heap, int val )  { 
	
    int size = heap.size();
    
    if ( size == 0 ) {
    
       heap,push_back(val);
       
    }  
    else { 
    
       heap.push_back(val);
       BuildHeap( heap, heap.size() - 1 ) ; 
       
       }   
       
}

int getHighestPriority( vector<int> &heap )  {

    int  size = heap.size();

    if (size == 0 ) 
    
        return -1;
        
    return heap[0];

}
//delete highest priority at index=0;

void deleteHighestPriorityElement(vector<int>  &heap )  { 

    int size = heap.size();
    
    if ( seize = 0 )  
    
        cout<<"Priority Queue is Empty"<<endl; 
        
    else {
    
        swap(&heap[0], &heap[size-1]);
        
        cout<<"Removing The Highes Priority Element as: "<<heap[ size-1 ] << endl;
        
        heap.pop_back();
        
        BuildHeap( heap, (heap.size() - 1) ) ; 

}







