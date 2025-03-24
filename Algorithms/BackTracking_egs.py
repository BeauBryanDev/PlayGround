# Combinación de Sumas ...
"""
Dada una matriz de enteros distintos candidatos y un entero objetivo, devuelve una lista de todas las combinaciones únicas de candidatos en las que los números elegidos suman el objetivo. Puede devolver las combinaciones en cualquier orden. El mismo número puede ser elegido entre los candidatos un número ilimitado de veces. Dos combinaciones son únicas si la frecuencia de al menos uno de los números elegidos es diferente. Los casos de prueba se generan de forma que el número de combinaciones únicas que suman el objetivo sea inferior a 150 combinaciones para la entrada dada.
"""
#Eg :
"""
Entrada: candidatos = [2,3,6,7], objetivo = 7
Salida: [[2,2,3],[7]]
Explicación: 2 y 3 son candidatos, y 2 + 2 + 3 = 7. Nótese que 2 puede usarse varias veces. 7 es un candidato, y 7 = 7. Estas son las dos únicas combinaciones.
"""

def combinationSum(self, candidatos:List[int], target:int) -> List[List[int]] :

   def dfs(sobrante, pila, resultado):
   
       if not sobrante:
       
           resultado.append(pila)
           
           return
           
       for numero in candidatos:
       
           if numero > sobrante:
           
               return
               
           if not pila or pila[-1] <= numero:
           
               dfs(sobrante - numero, pila + [numero], resultado)
               
   resultado = []
   
   candidatos.sort()
   
   dfs(target, [], resultado)
   
   return resultado
   
#Permutaciones ::::

"""
Dado un array nums de enteros distintos, devuelve todas las permutaciones posibles. Puede devolver la respuesta en cualquier orden.

Ejemplo 1:
Entrada: nums = [1,2,3]
Salida: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Ejemplo 2:
Entrada: nums = [0,1]
Salida: [[0,1],[1,0]]

"""

def permute(self, numeros):

   def dfs(listaNumeros, combinaciónActual, permutaciones):
   
       if not listaNumeros:
       
           permutaciones.append(combinaciónActual)
           
       for i in range(len(listaNumeros)) :
       
           dfs(listaNumeros[:i]+listaNumeros[i+1:], combinaciónActual+[listaNumeros[i]], permutaciones)
           
   permutaciones = []
   
   dfs(numeros, [], permutaciones)
   
   return permutaciones
   
   
# Eg:3 -->

def letterCasePermutation(self, S: str) -> List[str] :

   res = []
   
   def dfs(permutacionActual, apuntador):
   
       if apuntador == len(S):
       
           res.append(''.join(permutacionActual))
           
           return
           
       for i in set([S[apuntador].lower(), S[apuntador].upper()]):
       
           permutacionActual.append(i)
           
           dfs(permutacionActual, apuntador+1)
           
           permutacionActual.pop()
           
           
   dfs([],0)
   
   return res



   
   
   
   



   
   


