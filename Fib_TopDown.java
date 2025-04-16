/*Fibonnacci as Top-Down Approach */ 
/* Use Dynamic Programming to run the fibonacci serie from top to bottom in 
order to reduce memory overhead and improve code optimization */

import java.util.Arrays;

class Fib {

    static int[] result = new int[100];
    
    Fib() {
    
        Arrays.fill(result,-1);
    }
    
    static int Fibonacci(int N)
    {
        if(result[N] == -1)
        {
            if(N <= 1)
                result[N] = N;
            else
                result[N] = Fibonacci(N-1) + Fibonacci(N-2);
        }
        return result[N];
    }
    
    public static void main(String[] args)
    {
        int i;
        Fib fib = new Fib();
        int n = 24;

        if(n == 1)
        
            System.out.println("n = " + n + ": Answer = " + n);
            
        else
        
            System.out.println("n = " + n + ": Answer = " + fib.Fibonacci(n));
            
    }
    
}




