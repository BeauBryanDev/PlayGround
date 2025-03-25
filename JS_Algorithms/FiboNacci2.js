/*Implementation of Nth Fibonacci: 
   Top-Down Approach with Memoization */ 
   
var result = new Array(100).fill(-1);

function Fibonacci(N)
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

var i;
var n = 4;

if(n == 1)

    document.write("Fib(" + n + ") = " + n);
    
else

    document.write("Fib(" + n + ") = " + Fibonacci(n));


