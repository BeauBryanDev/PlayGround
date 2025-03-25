/* LINKED LIST CLAS JS */ 

class Node {

  constructor(value) {
  
    this.value = value;
    this.next = null;
    
  }
}

class linked_list {

  constructor() {
  
    this.head = null;
    this.tail = null;
    this.length = 0;
  }

  insert_node_at_start(value) {
  
    let new_node = new Node(value);
    
    new_node.next = this.head;
    
    this.head = new_node;

    this.length ++;
    
  }

  insert_node_at_end(value) {
  
    let new_node = new Node(value);
    
    if (this.head == null) {
    
      this.head = new_node;

      this.length ++;
      
      return;
      
    }
    
    let last = this.head;
    
    while (last.next) {
    
      last = last.next;
      
    }
    
    last.next = new_node;

    this.length ++;
    
  }

  print_list() {
  
    let temp = this.head;
    
    while (temp) {
    
      console.log(temp.value);
      
      temp = temp.next;
      
    }
    
  }

  delete_start_node() {
  
    if (this.head == null) {
    
      return "The list is empty";
      
    }
    this.head = this.head.next;
    
    this.length -- ;
  }

  delete_last_node() {
  
    if (this.head == null) {
    
      return "The list is empty";
      
    }
    
    if (this.head.next == null) {
    
      this.head = null;
      this.length -- ;

      return;
    }
    
    let temp = this.head;
    
    while (temp.next.next) {
    
      temp = temp.next;
      
    }
    
    temp.next = null;
    
    this.length -- ;

  }

  search(search_value) {
  
    let current = this.head;
    
    let position = 0;
    
    while (current) {
    
      if (current.value == search_value) {
      
        console.log("Valor encontrado: ", current.value);
        
        return current.value;
        
      }
      
      current = current.next;
      
      position++;
      
    }
    
    return console.log("Valor no encontrado\n");
    
  }
  
  insert_node_value(after_value, new_node_value) {
    // create the new Node
    let new_node = new Node(new_node_value);
    
    // First , >Check if the LinkedList might be empty. 
    if (this.head === null) {
    
        console.log("La lista está vacía. No se puede insertar.");
        return;
    }

    let current_node = this.head;

    // Buscar el nodo con el valor `after_value`
    while (current_node !== null && current_node.value !== after_value) {
    
        current_node = current_node.next;
    }

    // Si no se encuentra el valor `after_value`
    if (current_node === null) {
        console.log(`El valor ${after_value} no existe en la lista.`);
        
        return;
    }

    // Insertar el nuevo nodo después del nodo encontrado
    new_node.next = current_node.next;
    current_node.next = new_node;

    // Incrementar la longitud de la lista
    this.length++;
    
    console.log(`Nodo con valor ${new_node_value} insertado después de ${after_value}.`);
}

 
  delete_value(value) {
  
    if (this.head == null) {
    
      return console.log("Empty list");
      
    }
    
    let current = this.head;
    
    while (current) {
    
      if (current.next && current.next.value === value) {
      
        current.next = current.next.next;
        
        return;
        
      }
      
      current = current.next;
      
    }
    
    return console.log("Valor no encontrado en la lista");
    
  }

  reverse_list() {
  
    this.print_list();
    
    let previous = null;
    
    let current = this.head;
    
    while (current !== null) {
    
      let temp = current.next;
      
      current.next = previous;
      
      previous = current;
      
      current = temp; //current.next;
      
      this.head = previous;
      
    }
    
    return console.log("Head: ", previous.value);
    
  }

  odd_even() {
  
    if (this.head == null || this.head.next == null) {
    
      return this.head;
      
    }
    
    let odd = this.head;
    
    let head = odd;
    
    let even = this.head.next;
    
    let even_head = even;
    
    while (even != null && even.next != null) {
    
      odd.next = even.netx;
      odd = even.next;
      
      event.next = odd.next;
      even = even.next;
      
    }
    
    odd.next = even_head;
    
    return head.value;
    
  }
}


const llist = new linked_list();

llist.insert_node_at_start("4");
llist.insert_node_at_start("3");
llist.insert_node_at_start("2");
llist.insert_node_at_start("1");
llist.insert_node_at_start("6");
llist.insert_node_at_start("9");
llist.insert_node_at_start("8");
llist.insert_node_at_start("5");
llist.print_list()
llist.insert_node_value(2, 10);
llist.reverse_list();
llist.print_list();
llist.reverse_list();
llist.print_list();

console.log("\n");



