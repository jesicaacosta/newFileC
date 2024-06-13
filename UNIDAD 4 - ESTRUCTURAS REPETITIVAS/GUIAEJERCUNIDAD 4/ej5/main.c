#include <stdio.h>
#include <stdlib.h>
/*Sabiendo que la clave de acceso de un sitio web es 6919. Crear un programa que permita
al usuario ingresar una clave. Si la clave es ingresada correctamente emitir el mensaje
“Bienvenido al sitio”, si la clave ingresada es errónea emitir el mensaje “Clave incorrecta,
intente nuevamente”. Si se ingresa incorrectamente la clave 3 veces emitir el mensaje
“Acceso bloqueado” y terminar el programa.
*/

#define CLAVE 6919

int main() {
    int nroIngresado;
    int intento = 0;
    int bloqueado = 0;

    do {
        printf("Ingrese la clave: ");
        scanf("%d", &nroIngresado);

        if (nroIngresado == CLAVE) {
            printf("Bienvenido al sitio\n");
            break; // salgo del bucle
        } else {
            printf("Clave incorrecta, intente nuevamente\n");
            intento++;
            if (intento < 4) {
                bloqueado = 1;
                break; // salgo del bucle si es 3 veces incorrecto
            }
        }
    } while (1); // Bucle infinitio

    if (bloqueado) { //si bloqueado me da true
        printf("Acceso bloqueado\n");
    }

    return 0;
}

