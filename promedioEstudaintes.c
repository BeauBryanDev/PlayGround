#include <stdio.h>

// Funciones
double IngresarCalificacion(void);
float CalcularPromedio(int cantNotas, float totalNotas);
void MostrarResultado(float promedio);

int main(void) {
    int continuar = 1;
    
    while (continuar == 1) {
        int cantidadNotas = 0;
        float sumaNotas = 0;
        float promedio;

        char opcion;

        printf("\n-- INGRESO DE CALIFICACIONES --\n");
        do {
            float nota = IngresarCalificacion();
            sumaNotas += nota;
            cantidadNotas++;

            printf("¿Desea ingresar otra calificación? (s/n): ");
            scanf(" %c", &opcion);

        } while (opcion == 's' || opcion == 'S');

        promedio = CalcularPromedio(cantidadNotas, sumaNotas);
        
        printf("\nResumen:\n");
        printf("Total de calificaciones ingresadas: %d\n", cantidadNotas);
        printf("Suma total de calificaciones: %.2f\n", sumaNotas);
        printf("Promedio: %.2f\n", promedio);
        MostrarResultado(promedio);

        printf("\n¿Desea evaluar a otro estudiante? (1 = Sí, 0 = No): ");
        scanf("%d", &continuar);
    }

    printf("\nPrograma finalizado. ¡Hasta luego!\n");
    return 0;
}

// Función que pide una calificación válida entre 0 y 20
double IngresarCalificacion(void) {
    double nota;
    do {
        printf("Ingrese una calificación (0 - 20): ");
        scanf("%lf", &nota);
        if (nota < 0 || nota > 20) {
            printf("✘ Calificación inválida. Intente de nuevo.\n");
        }
    } while (nota < 0 || nota > 20);
    return nota;
}

// Función para calcular el promedio
float CalcularPromedio(int cantNotas, float totalNotas) {
    return totalNotas / cantNotas;
}

// Función que muestra si el promedio es suficiente para aprobar
void MostrarResultado(float promedio) {
    if (promedio >= 12) {
        printf("✔ El estudiante ha APROBADO.\n");
    } else {
        printf("✘ El estudiante ha REPROBADO.\n");
    }
}
// Fin del programa


