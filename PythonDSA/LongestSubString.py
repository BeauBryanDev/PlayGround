"""Guide ExCode """

caracteresAposicion = {}

s = "abcaibegrcrbrtkhgjleopgkpvkapvhkb"

inicio = 0

mayorLongitud = 0

for fin in range(len(s)):

    if s[fin] in caracteresAposicion and inicio <= caracteresAposicion[s[fin]]:
    
        print("Estamos en la condicion y se encontro: ", s[fin], " como letra repetida")
        
        print("Ahora esa letra: ", s[fin]," que tiene como valor en el diccionaro", caracteresAposicion[s[fin]], "va a tomar el valor de: ", fin)
        
        print("Y el valor de inicio es de ", caracteresAposicion[s[fin]])
        
        print("Valores que se encuentran en el diccionario al validar la condicion", caracteresAposicion)
        
        inicio = caracteresAposicion[s[fin]] + 1
        
        print("Este es el valor de Inicio al sumarle 1: ", inicio)
        
    caracteresAposicion[s[fin]] = fin
    
    print("Valores que se guardan en el diccionario antes y despues de pasar la condicion:", caracteresAposicion)
    
    mayorLongitud = max(mayorLongitud, fin - inicio + 1)
    
print("la cadena con mayor longitud es de: ", mayorLongitud)
    
