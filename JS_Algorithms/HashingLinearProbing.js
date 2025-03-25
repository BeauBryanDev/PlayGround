/* Hashing over JS */
/* Implement Hash Table with Linear Probing - Insert */ 

const SIZE = 5;
var arr = [];

function init()
{
    var i;
    
    for(i = 0; i < SIZE; i++)
    
        arr[i] = -1;
}
//INSERTION  ::::......
function insert(value)
{
    var key = value % SIZE;
    var index = key;

    while(arr[index] != -1)
    {
        index = (index + 1) % SIZE;

        if(index == key)
        {
            document.write("Hash Table Full");
            
            return 0;
        }
    }

    arr[index] =  value;

    return 1;
}
//DELETE FROM HASH TABLE FUNCTION ....
function del(value) 
{
    var key = value % SIZE;
    var index = key;

    while(arr[index] != value)
    {
        index = (index + 1) % SIZE;

        if(index == key)
            return 0;
    }

    arr[index] = -1;

    return 1;
}
//Searching in Hash Table within Linear Probing-......
function search(value)
{
    var key = value % SIZE;
    var index = key;
    
    while(arr[index] != value)
    {
        index = (index + 1) % SIZE;
        
        if(index == key)
            return 0;
    }
    
    return 1;
}

//Main Body .....
init()

// INSERT

if(insert(10) == 1)

    document.write("10 is inserted");
    
if(insert(4) == 1)

    document.write("4 is inserted");
    
if(insert(2) == 1)

    document.write("2 is inserted");
    
if(insert(15) == 1)

    document.write("15 is inserted");
    
if(insert(5) == 1)

    document.write("5 is inserted");
    
if(insert(1) == 1)
 
 document.write("Elements 10, 4, 2, 15, 5 , 1, were inserted into the hash table");
 
// DELETing ......

if(del(5) == 1)
    document.write("5 is deleted");
if(del(50) == 1)
    document.write("50 is deleted");

// SEARCHing ....

if(search(4) == 1)
    document.write("4 - Search Found");
else
    document.write("4 - Search Not Found");

if(search(12) == 1)
    document.write("12 - Search Found");
else
    document.write("12 - Search Not Found");




 
