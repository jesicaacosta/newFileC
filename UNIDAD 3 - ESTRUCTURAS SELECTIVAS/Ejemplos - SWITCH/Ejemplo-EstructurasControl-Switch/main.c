#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion = 0;

    printf("Ingrese Opcion: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Opcion Ingresada 1 \n");
        break;
    case 2:
        printf("Opcion Ingresada 2 \n");
        break;
    case 3:
        printf("Opcion Ingresada 3 \n");
        break;
    default:
        printf("Otro opcion \n");
        break;
    }

    return 0;
}
