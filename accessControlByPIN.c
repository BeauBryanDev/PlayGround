#include <stdio.h>
#include <stdbool.h>

// Prototipos
bool ValidarPIN(int *pinGuardado);
void MostrarMenuDeUsuario(int *pinGuardado);
void CambiarPIN(int *pinGuardado);

// Función principal
int main(void) {
    int pinGuardado = 1234; // PIN inicial
    bool accesoConcedido = ValidarPIN(&pinGuardado);

    if (accesoConcedido) {
        MostrarMenuDeUsuario(&pinGuardado);
    } else {
        printf("\n⚠ Cuenta bloqueada por demasiados intentos fallidos.\n");
    }

    return 0;
}

// ===================== FUNCIONES ======================

// Función para validar el PIN (máx 3 intentos)
bool ValidarPIN(int *pinGuardado) {
    int intentos = 3;
    int pinIngresado;

    while (intentos > 0) {
        printf("\nIngrese su PIN (4 dígitos): ");
        scanf("%d", &pinIngresado);

        if (pinIngresado == *pinGuardado) {
            printf("\nAcceso concedido.\n");
            return true;
        } else {
            intentos--;
            printf("PIN incorrecto. Le quedan %d intento(s).\n", intentos);
        }
    }

    return false;
}

// Función para mostrar el menú de usuario después de validar el PIN
void MostrarMenuDeUsuario(int *pinGuardado) {
    int opcion;

    do {
        printf("\n======= MENU DE USUARIO =======\n");
        printf("1. Consultar datos\n");
        printf("2. Cambiar PIN\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("\nMostrando datos del usuario...\n");
                break;
            case 2:
                CambiarPIN(pinGuardado);
                break;
            case 3:
                printf("\nSaliendo del sistema. ¡Hasta luego!\n");
                break;
            default:
                printf("\nOpción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 3);
}

// Función para cambiar el PIN actual
void CambiarPIN(int *pinGuardado) {
    int nuevoPIN;

    printf("\nIngrese nuevo PIN (4 dígitos): ");
    scanf("%d", &nuevoPIN);

    if (nuevoPIN >= 1000 && nuevoPIN <= 9999) {
        *pinGuardado = nuevoPIN;
        printf("PIN actualizado exitosamente.\n");
    } else {
        printf("PIN inválido. Debe tener 4 dígitos.\n");
    }
}
// Fin del programa



