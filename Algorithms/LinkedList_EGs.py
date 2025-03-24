"""Sumar dos números

Se dan dos listas enlazadas no vacías que representan dos enteros no negativos. Los dígitos están almacenados en orden inverso, y cada uno de sus nodos contiene un solo dígito. Suma los dos números y devuelve la suma como una lista enlazada.

"""
 # Definition for singly-linked list.
 
class ListNode:

     def __init__(self, val=0, next=None):
     
         self.val = val
         self.next = next
         
class Solution1:

   def sumarDosNumeros(self, nodo1: ListNode, nodo2: ListNode) -> ListNode :
   
       cabezaTemporal = ListNode()
       apuntador1 = nodo1
       apuntador2 = nodo2
       nodoActual = cabezaTemporal
       carrier = 0
       
       while apuntador1 or apuntador2:
       
           x = apuntador1.val if apuntador1 else 0
           y = apuntador2.val if apuntador2 else 0

           current_sum = carrier + x + y
          
           carrier = current_sum // 10
           nodoActual.next = ListNode(current_sum % 10)
           nodoActual = nodoActual.next
          
           if apuntador1: apuntador1 = apuntador1.next
           if apuntador2: apuntador2 = apuntador2.next
      
       if lleva: nodoActual.next = ListNode(carrier)
       
       return cabezaTemporal.next
       
"""Dada una lista enlazada, intercambia cada dos nodos adyacentes y devuelve su cabeza. Debe resolver el problema sin modificar los valores de los nodos de la lista (es decir, sólo se pueden cambiar los propios nodos).
"""       
             
class Solution2:

   def swapPairs(self, cabeza: ListNode) -> ListNode:
   
       nodoActual = cabeza
       
       if nodoActual == None :
       
           return None
           
       while nodoActual != None and nodoActual.next != None:

           if nodoActual.val == nodoActual.next.val:
               nodoActual = nodoActual.next.next
               
           else:
           
               nodoActual.val, nodoActual.next.val = nodoActual.next.val, nodoActual.val
               
               nodoActual = nodoActual.next.next
               
       return cabeza
       
       

#BROSWER HISTORY ....

""" 
BrowserHistory(string homepage): inicializa el objeto con la página de inicio del navegador.
void visit(string url): visita la url de la página actual. Borra todo el historial de avance.
string back(int steps): mueve los pasos hacia atrás en el historial. Si sólo puede devolver x pasos en el historial y pasos > x, devolverá sólo x pasos. Devuelve la url actual después de retroceder como máximo pasos en el historial.
string forward(int steps): mover pasos hacia adelante en el historial. Si sólo puede avanzar x pasos en el historial y pasos > x, avanzará sólo x pasos. Devuelve la url actual después de avanzar en el historial como máximo pasos.

"""

class BrowserHistory:

   def __init__(self, homepage: str):
   
       self.home = homepage
       self.main = []
       self.temporal = []
 
   def visit(self, url: str) -> None:
   
       self.main.append(url)
       if self.temporal :
           self.temporal.clear()
 
   def back(self, pasos: int) -> str:
   
       while(self.main and pasos):
           pasos -= 1
           x = self.main.pop()
           self.temporal.append(x)
       if self.main:
           return self.main[-1]
       return self.home   
 
   def forward(self, pasos: int) -> str:
   
       while(self.temporal and pasos):
           pasos -= 1
           x = self.temporal.pop()
           self.main.append(x)
       if self.main:
           return self.main[-1]
       return self.home 
       
       
       
       
       
