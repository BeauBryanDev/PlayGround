"""Avg of k-SubList in a List by
	SLICING WINDOW METHOD """
	
def promedio_sublistas(k, calificaciones):

  resultado = []
  
  suma_ventana = 0.0
  
  inicio_ventana = 0
  
  for fin_ventana in range(len(calificaciones)):
  
    suma_ventana += calificaciones[fin_ventana]
    
    if fin_ventana >= k - 1:
    
      resultado.append(suma_ventana / k)
      
      suma_ventana -= calificaciones[inicio_ventana]
      
      inicio_ventana += 1

  return resultado


def main():

  resultado = promedio_sublistas(3, [10.0, 7.8, 6.5, 8.0, 9.2])
  
  print("Promedios: " + str(resultado))


main()


