"""DFS Resolved Challenges """

# Reemplazar un Color en una Sección de la Imagen

def colorearSector(self, imagen: List[List[int]], sr: int, sc: int, nuevoColor: int) -> List[List[int]]:

   if not imagen or not imagen[0]:
   
       return imagen
       
   if imagen[sr][sc] == nuevoColor:
   
       return imagen
  
   def dfs(imagen, i, j, colorActual):
   
       imagen[i][j] = nuevoColor   
               
       for x, y in direcciones:
       
           if 0 <= x+i < len(imagen) and 0 <= j+y < len(imagen[0]) and imagen[x+i][j+y ] == colorActual:
           
               dfs(imagen, x+i, j+y,  colorActual)
               
   direcciones = [[1,0],[0,1],[-1,0],[0,-1]]    
   
   dfs(imagen, sr, sc, imagen[sr][sc])
   
   return imagen
   
   
#Construir una cadena a partir de un árbol binario....

"""Dada la raíz de un árbol binario, construya una cadena formada por paréntesis y enteros a partir de un árbol binario con el modo de recorrido de preorden, y devuélvala. Omita todos los pares de paréntesis vacíos que no afecten a la relación de mapeo uno a uno entre la cadena y el árbol binario original."""

# class TreeNode:

#     def __init__(self, val=0, izquierda=None, derecha=None) :

#         self.val = val
#         self.izquierda = izquierda
#         self.derecha = derecha


class Solution :

   def tree2str(self, t: TreeNode) -> str :
   
       def dfs(raiz):
       
           if not raiz: return ''
           
           string = str(raiz.val)
           
           if not raiz.izquierda and not raiz.derecha:
           
               return string
               
           string += '(' + str(dfs(raiz.izquierda)) + ')'
           
           if raiz.derecha:
           
               string += '(' + str(dfs(raiz.derecha)) + ')'
               
           return string
           
       return dfs(t)



#Ancestro común más bajo de un árbol binario ...

"""
Dado un árbol binario, encuentre el ancestro común más bajo (LCA) de dos nodos dados en el árbol.

ICA : El mínimo común antecesor se define entre dos nodos p y q como el nodo más bajo de T que tiene tanto p como q como descendientes (donde permitimos que un nodo sea descendiente de sí mismo).
"""

def LCA(self, raiz: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode' :

   if not raiz or raiz == p or raiz == q:
   
       return raiz
       
   izquierda = self.LCA(raiz.izquierda,p,q)
   
   derecha = self.LCA(raiz.derecha,p,q)
   
   if izquierda and derecha:
   
       return raiz
       
   return izquierda or derecha
   
   
#Batalla Naval - Contar Barcos ...


"""
Dado un tablero de m x n donde cada celda es un acorazado ‘X’ o un vacío ‘.’, devuelva el número de los barcos en el tablero. Los barcos sólo pueden colocarse horizontal o verticalmente en el tablero. En otras palabras, sólo pueden tener la forma 1 x k (1 fila, k columnas) o k x 1 (k filas, 1 columna), donde k puede ser de cualquier tamaño. Al menos una celda horizontal o vertical separa dos barcos (es decir, no hay barcos adyacentes).
"""

def countBattleships(self, tablero: List[List[str]]) -> int:

   def dfs(i,j):
   
       if 0 <= i < len(tablero) and 0 <= j < len(tablero[0]) and tablero[i][j] == 'X':
           tablero[i][j] = '.'
           
           dfs(i+1,j)
           dfs(i-1,j)
           dfs(i,j-1)
           dfs(i,j+1)
           
   cantidad = 0
   
   for i in range(len(tablero)):
   
       for j in range(len(tablero[0])):
       
           if tablero[i][j] == 'X':
           
               dfs(i,j)
               
               cantidad+=1
               
   return cantidad
   
#Número de Islas Cerradas ....

"""
Dada una cuadrícula 2D formada por 0s (tierra) y 1s (agua). Una isla es un grupo máximo de 0s conectado en 4 direcciones y una isla cerrada es una isla totalmente (toda a la izquierda, arriba, derecha, abajo) rodeada de 1s. Devuelve el número de islas cerradas.
"""

def closedIsland(self, mapa: List[List[int]]) -> int: 

   if len(mapa) == 0: return 0
   
   def dfs(i,j):
   
       if not(0<=i<len(mapa) and 0<=j<len(mapa[0])): 
       
           return False
           
       if mapa[i][j] == 1:
       
           return True
           
       mapa[i][j] = 1
       
       A = dfs(i+1,j)
       B = dfs(i-1,j)
       C = dfs(i,j+1)
       D = dfs(i,j-1)
       
       return ( A and B and C and D ) 
       
   cantidad = 0
   
   for i in range(len(mapa)):
   
       for j in range(len(mapa[0])):
       
           if mapa[i][j] == 0 and dfs(i,j):
           
               cantidad += 1
               
   return cantidad
   
   
   
          
       
       
       






   















   
   
