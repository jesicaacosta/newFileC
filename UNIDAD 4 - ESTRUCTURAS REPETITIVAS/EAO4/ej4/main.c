#include "stdio.h"

int main ()
{
    int nro;
    scanf("%d",&nro);

    switch(nro) {
        case 1:
        printf ("Dia Lunes");
        break;
        case 2:
        printf ("Dia Martes");
        break;
        case 3:
        printf ("Dia Miercoles");
        break;
        case 4:
        printf ("Dia Jueves");
        break;
        case 5:
        printf ("Dia Viernes");
        break;
        case 6:
        printf ("Dia Sabado");
        break;
        case 7:
        printf ("Dia Domingo");
        break;
        default:
        printf ("Dia incorrecto");
        break;
    }

    return 0;
}
