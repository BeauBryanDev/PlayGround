#include <stdio.h>

// Funciones de conversión
float ConvertirMetrosAPies(float metros);
float ConvertirKgALibras(float kg);
float ConvertirCelsiusAFahrenheit(float celsius);

// Función principal
int main() {
    int opcion;
    float valor;

    do {
        printf("\n===== MENU DE CONVERSIONES =====\n");
        printf("1. Metros a Pies\n");
        printf("2. Kilogramos a Libras\n");
        printf("3. Celsius a Fahrenheit\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion (1-4): ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("\nIngrese la cantidad de metros: ");
                scanf("%f", &valor);
                if (valor < 0) {
                    printf("La distancia no puede ser negativa.\n");
                } else {
                    printf("%.2f metros = %.2f pies\n", valor, ConvertirMetrosAPies(valor));
                }
                break;

            case 2:
                printf("\nIngrese la cantidad de kilogramos: ");
                scanf("%f", &valor);
                if (valor < 0) {
                    printf("El peso no puede ser negativo.\n");
                } else {
                    printf("%.2f kg = %.2f libras\n", valor, ConvertirKgALibras(valor));
                }
                break;

            case 3:
                printf("\nIngrese la temperatura en Celsius: ");
                scanf("%f", &valor);
                printf("%.2f °C = %.2f °F\n", valor, ConvertirCelsiusAFahrenheit(valor));
                break;

            case 4:
                printf("Saliendo del programa. ¡Hasta pronto!\n");
                break;

            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 4);

    return 0;
}

// Definición de funciones de conversión
float ConvertirMetrosAPies(float metros) {
    return metros * 3.28084;
}

float ConvertirKgALibras(float kg) {
    return kg * 2.20462;
}

float ConvertirCelsiusAFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}
// Fin del programa

