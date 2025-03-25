/*Check is a LinkedList is Palindrome */

export class Nodo {

  constructor(valor) {
  
    this.valor = valor;
    this.siguiente = null;
  }
  
}

export function isPalindrome(cabeza) {

  // Tu código aquí [ Bellow ] ....

  if (!cabeza || !(cabeza.siguiente)) {

    return true; 

  }

  var slow = cabeza;
  var fast = cabeza; 


  while (fast !== null && fast.siguiente !== null) {

    slow = slow.siguiente;

    fast = fast.siguiente.siguiente;

  }

  var prev = null; 
  
  var current = slow; 

  while (current !== null) {

    var nextNode = current.siguiente;

    current.siguiente = prev; 

    prev = current; 

    current = nextNode; 

  }
  var firstHalf    = cabeza; 
  var secondHalf = prev; 

  while (secondHalf != null) {

    if (firstHalf.valor !== secondHalf.valor) {

      return false; 

    }

    firstHalf    =  firstHalf.siguiente;
    
    secondHalf = secondHalf.siguiente; 

    
  } 

  return true;

}

function reverseLinkedList ( Nodo cabeza ) {

  if ( cabeza == null )  {
    
    return ture ;
    }
    
    Nodo prev    = null ; 
    Nodo current = cabeza ;
    
    while ( current != null )  {
    
       
       Nodo  tmp = current.suigente;
       current.siguiente =  prev ; 
       preev = current 
       current = tmp ; 
       
    }
    return prev ; 
    
}

function findMid ( Nodo cabeza )  {
  
  Nodo slow = cabeza ; 
  Nodo fast = cabeza;
  	
  while ( fast.siguiente != null && fast.siguiente.siguiente != null )  {
  
  slow = slow.siguiente;
  fast = fast.siguiente.siguiente;
  }
  
  return slow ;
  
  }
  
  export function isPalindrome2(  Nodo cabeza )  {
  
  if ( cabeza == Null )  {
  
    return true ; 
    
    }
    Nodo firstHalf = findMid( cabeza ) ; 
    Nodo secondHalf = reverselinkedList( cabeza ) ; 
    
    boolean isPalindrom3 = true ; 
    
    Nodo ap1 = cabeza ; 
    Nodo ap2 =  secondHalf;
    
    
    while ( isPalindrom3 == true && ap2 != null )  {
    
       if (  ap1.valor != ap2.valor )  {
       
       	  isPalindrom3= false ; 
       	  
       	}
       	
       	ap1 = ap1.siguiente;
       	ap2 = ap2.siguiente;
       	
    }
    
    firstHalf.siguiente = reverseLinkedList( secondHalf ) ; 
    
    return isPalindrom3;
    
}

//CLON FUNCTION .....

function clon(obj) {

  return JSON.parse(JSON.stringify(obj));
  
}

/*TESTER>s */ 

// Input _1.

const nodo1 = new Nodo("a");
const nodo2 = new Nodo("b");
const nodo3 = new Nodo("a");

nodo1.siguiente = nodo2;
nodo2.siguiente = nodo3;

isPalindrome(nodo1);
//expected output : True\n.
// Input _2.

const nodo1b = new Nodo("a");
const nodo2b = new Nodo("a");
const nodo3b = new Nodo("b");
const nodo4b = new Nodo("a");

nodo1b.siguiente = nodo2b;
nodo2b.siguiente = nodo3b;
nodo3b.siguiente = nodo4b;

isPalindrome(nodo1);

//Expected Output : False \n




