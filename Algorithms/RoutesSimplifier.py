#!/usr/bin/python
"""Simplificador de Rutas Unix //"""

def simplificar(ruta: str) -> str:

   St4ck = []
   
   lista_rutas = ruta.split('/')
   
   for fragmento in lista_rutas:
   
       if fragmento == '..':
       
           if St4ck:
           
               St4ck.pop()
               
       elif fragmento == '.' or fragmento == '':
       
           continue
           
       else:
       
           St4ck.append(fragmento)
           

   nueva_ruta = '/'
   
   for i in range(len(St4ck)):
   
       nueva_ruta += St4ck[i]
       
       if i < len(St4ck) - 1:
       
           nueva_ruta += '/'
           
   return nueva_ruta
   

if __name__ == '__main__' :
    
    UnixRoute1 = '../Documents/SandBox/'
    
    simplificado = simplificar(UnixRoute1)
    
    print("Ruta Simplificada : \n")
    
    print(simplificado)
   
    print("\n")
    
    R0ute3 = input("Please Provide a New /Route to Simplyfied :\n")
    
    edit3d = simplificar(R0ute3) 
    
    print("Ruta Simplificada ahora es :\n")
    
    print(edit3d , end="\n")
    
       
    
    
    
   
