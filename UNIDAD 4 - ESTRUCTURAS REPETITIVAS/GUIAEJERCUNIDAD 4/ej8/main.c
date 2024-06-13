#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion, edad, menor18, entre18y30, entre30y70, mayores70;

    do {
        printf("\n\nMENU\n");
        printf(" 1. Ingresar edad de persona\n 2. Mostrar Cantidad de personas menores a 18 años\n 3. Mostrar Cantidad de personas entre 18 y 30 años\n 4. Mostrar Cantidad de personas entre 30 y 70 años\n 5. Mostrar Cantidad de personas mayores a 70\n 0. Salir\n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese la edad de la persona: ");
                scanf("%d", &edad);
                if (edad < 18) {
                    menor18++;
                } else if (edad >= 18 && edad <= 30) {
                    entre18y30++;
                } else if (edad > 30 && edad <= 70) {
                    entre30y70++;
                } else {
                    mayores70++;
                }
                break;
            case 2:
                printf("Cantidad de personas menores a 18 anios: %d\n\n\n", menor18);
                break;
            case 3:
                printf("Cantidad de personas entre 18 y 30 anios: %d\n\n\n", entre18y30);
                break;
            case 4:
                printf("Cantidad de personas entre 30 y 70 anioos: %d\n\n\n", entre30y70);
                break;
            case 5:
                printf("Cantidad de personas mayores a 70 anios: %d\n\n\n", mayores70);
                break;
            case 0:
                printf("Salir del programa\n\n");
                break;
            default:
                printf("Opcion ivalida vuelva  a intentar .\n\n\n");
        }
    } while (opcion != 0);

    return 0;
}
