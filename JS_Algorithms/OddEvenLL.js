/*LinkedList */ 

export function oddEvenList(cabeza) {
  // Escribe tu código aquí [Bellow] ...
  let Odd = cabeza;
  let Even = cabeza.siguiente;
  let FirstEven = Even

  if (cabeza == null && cabeza.siguiente == null) {

    return cabeza

  }

  while (Even !=  null && Even.siguiente != null) {

    Odd.siguiente = Even.siguiente;
    Odd = Odd.siguiente;

    Even.siguiente = Odd.siguiente;
    Even = Even.siguiente

  }

  Odd.siguiente = FirstEven;

  return cabeza;
}

export class Nodo {
  constructor(id) {
    this.id = id;
    this.siguiente = null;
  }
}


