#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "seleccion_menu.h" /* incluir header de seleccion_menu */


void ejercicio_1();
void ejercicio_2();
void ejercicio_3();
void ejercicio_4();
void ejercicio_5();

int main()
{
    int opt;
    bool seguir = true;

    while (seguir)
    {
        opt= selectopt();

        switch(opt)
        {
        case EJERCICIO_1:
            ejercicio_1();
            break;
        case EJERCICIO_2:
            ejercicio_2();
            break;
        case EJERCICIO_3:
            ejercicio_3();
            break;
        case EJERCICIO_4:
            ejercicio_4();
            break;
        case EJERCICIO_5:
            ejercicio_5();
            break;
        case SALIR:
            seguir=false;
            break;
        }
    }
    return 0;
}


void ejercicio_1()
{
    printf("Ejercicio 1\n");

}
void ejercicio_2()
{
    printf("Ejercicio 2\n");

}
void ejercicio_3()
{
    printf("Ejercicio 3\n");

}
void ejercicio_4()
{
    printf("Ejercicio 4\n");

}
void ejercicio_5()
{
    printf("Ejercicio 5\n");
}
