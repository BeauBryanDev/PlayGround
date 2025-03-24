//STACK BY USING ARR[n] ....

class Stack
{
    static final int SIZE = 5;
    int arr[] = new int[SIZE];
    int top = -1;
    
    public void push(int val)
    {
        if(top == SIZE - 1)
            System.out.println("Stack Is Full");
        else
        {
            ++top;
            arr[top] = val;
        }   
    }   
    
    public void pop()
    {
        if(top == -1)
            System.out.println("Stack Is Empty");
        else
        {
            System.out.println("Popped element = "+arr[top]);
            top--;
        }   
    }
        
    public static void main(String args[])
    {
        Stack s = new Stack();
        
        System.out.println("Pushing element: "+10);
        s.push(10);
        System.out.println("Pushing element: "+20);
        s.push(20);
        System.out.println("Pushing element: "+30);
        s.push(30);
        System.out.println("Pushing element: "+40);
        s.push(40);
        System.out.println("Pushing >Element: "+50);
        s.push(50);
        System.out.println("Pushing >Element: "+60);
        s.push(60);
        System.out.println("Pushing >Element: "+80);
        s.push(80);
        s.pop();
        System.out.println("Pushing element: "+40);
        s.push(40);
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.push(75);
        s.pop();
        
        
    }   
}  



