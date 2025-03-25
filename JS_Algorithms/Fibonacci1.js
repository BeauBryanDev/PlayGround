/*Implementation of Nth Fibonacci \n
 Bottom-Up Approach  */
 
 function Fibonacci(N)
{
    var Fib = [N+1];
    
    var i;

    Fib[0] = 0;
    Fib[1] = 1;

    for(i = 2; i <= N; i++)
    
        Fib[i] = Fib[i-1] + Fib[i-2];
    
    return Fib[N];
}

var i;

var n = 4;

if(n == 1)

    document.write("Fib(" + n + ") = " + n);
    
else

    document.write("Fib(" + n + ") = " + Fibonacci(n));
    
    




