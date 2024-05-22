#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum opciones {INGRESAR=0, LISTAR, ELIMINAR, SALIR};
    int valor_ingresado = 0;

    printf("Ingrese Opcion: \n");
    printf("0) ingresar \n");
    printf("1) listar \n");
    printf("2) Eliminar \n");
    printf("3) salir \n");

    scanf("%d", &valor_ingresado);

    switch (valor_ingresado)
    {
    case INGRESAR:
        printf("Ingresando... \n");
        break;
    case LISTAR:
        printf("Listando... \n");
        break;
    case ELIMINAR:
        printf("Eliminando... \n");
        break;
    case SALIR:
        printf("Saliendo... \n");
        break;
    default:
        printf("Opcion incorrecta \n");
        break;
    }

    return 0;
}
