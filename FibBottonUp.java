/*Fibonacci as Top-Down Approach */ 

class Fib {

    static int Fibonacci(int N)
    
    {
        int Fib[] = new int[N+1];
        int i;

        Fib[0] = 0;
        Fib[1] = 1;

        for(i = 2; i <= N; i++)
        
            Fib[i] = Fib[i-1] + Fib[i-2];
        
        return Fib[N];
    }
    
    public static void main(String[] args)
    
    {
        Fib fib = new Fib();
        
        int n = 83;

        if(n == 1)
        
            System.out.println("n = " + n + ": Answer = " + n);
            
        else
        
            System.out.println("n = " + n + ": Answer = " + fib.Fibonacci(n));
            
    }
    
}



