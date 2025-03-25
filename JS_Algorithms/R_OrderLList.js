/*Code aims to re order a linked List from this way 
OriginaList : L0 -> L1 -> L2 -> ... -> Ln - 2 -> Ln - 1 -> Ln
OutputList   :  L0 -> Ln -> L1 -> Ln -1 -> L2 -> Ln - 2 -> ... */

export class Node {

    constructor( value ) {

        this.value = value ;
        this.next  =  null ; 

    }
}

export function ROrderList(  head ) {

    if ( head === null )  {

        return head ;

    }
    
    if ( head.next === null || head.next.next === null )  {

        return head ; 
    }

    let slow = head ; 
    let fast = head.next ; 

    while ( fast !== null && fast.next !== null )  {

        slow = slow.next ;
        fast = fast.next.next ; 

    }

    const start2Mid = slow.next;
    
    let current = start2Mid ; 

    slow.next = null ;

    let prev = null ; 

    while ( current !== null )  {

        let following = current.next ; 
        current.next  = prev ;
        prev          = current;
        current       = following;

    }

    let ptr1 = head ; 
    let ptr2 = prev ; 

    let prevTmp =  null ; 

    while ( ptr1 !== null )  {

        if ( ptr2 == null ) {

            prevTmp.next = ptr1 ;

            ptr1 = ptr1.next ;
        }
        else {

            let tmp1 = ptr1.next ;
            let tmp2 = ptr2.next ;
            
            ptr1.next = ptr2;
            ptr2.next = tmp1;

            ptr1 = tmp1 ;

            prevTmp = ptr2;
            ptr2    = tmp2;

        }

    }

    return head ;


}

function clon(obj) {

    return JSON.parse(JSON.stringify(obj));

  }

  
// Input (1->2->3)
const nodo1 = new Node(1);
const nodo2 = new Node(2);
const nodo3 = new Node(3);
nodo1.siguiente = nodo2;
nodo2.siguiente = nodo3;

// Output
reorderList(nodo1) // 1->3->2

// Input (1->2->3->4)
const nodo1 = new Node(1);
const nodo2 = new Node(2);
const nodo3 = new Node(3);
const nodo4 = new Node(4);
nodo1.siguiente = nodo2;
nodo2.siguiente = nodo3;
nodo3.siguiente = nodo4;

// Output
reorderList(nodo1) // 1->4->2->3

