"""Check if LinkedList has a Looop """

class Nodo:

   def __init__(self, x):
      self.valor = x
      self.siguiente = None

def hasCycle(cabeza: Nodo) -> bool:
   # Tu código aquí [Bellow]......

   if not cabeza :

      return False 

   slow = cabeza 
   fast = cabeza.siguiente  

   while ( fast is not None and fast.siguiente is not None ) : 

      slow = slow.siguiente 
      fast = fast.siguiente.siguiente 

      if ( slow == fast ) :

         return True 

   return False
   
#Main Function Body() ....

if __name__ =='__main__' :


	nodo1 = Nodo(1)
	nodo2 = Nodo(2)
	nodo3 = Nodo(3)
	nodo4 = Nodo(4)
	nodo5 = Nodo(5)
	
	
	nodo1.siguiente = nodo2
	nodo2.siguiente = nodo3
	nodo3.siguiente = nodo4
	nodo4.siguiente = nodo5
	nodo5.siguiente = nodo2
	

	response = hasCycle(nodo1)
	
	print(response)



