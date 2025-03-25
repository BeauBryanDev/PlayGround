/* Stack Data Structure within Array  */ 

const SIZE = 5;
var arr = [];
var  topp = -1;


function push(val)
{
    if(topp == SIZE - 1)
        document.write("Stack Is Full<br>");
    else
    {
        ++topp;
        arr[topp] = val;
    }
}

function pop()
{
    if(topp == -1)
        document.write("Stack Is Empty<br>");
    else
    {
        document.write("Popped element = "+arr[topp]+"<br>");
        topp--;
    }
}


document.write("Pushing element: "+10+"<br>");
push(10);
document.write("Pushing element: "+20+"<br>");
push(20);
document.write("Pushing element: "+30+"<br>");
push(30);
document.write("Pushing element: "+40+"<br>");
push(40);
pop();
document.write("Pushing element: "+50+"<br>");
push(50);
push(69);
pop();
push(45);
pop();
pop();
pop();


