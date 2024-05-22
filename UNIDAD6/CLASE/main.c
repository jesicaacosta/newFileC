#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

double division (double dividendo, double divisor) //
{
    printf("PROGRAMA DIVISION !\n");
    return dividendo /divisor;
}


int main()
{
    /*
    FUNCIONES

        los nombres en la declaracion no son obligatorios
    */
    printf("PROGRAMA MAIN !\n");


    double a = 2.1;
    double b  = 3.4;
    double z = 4.5;

    z =division (a,b);
    printf ("%4.2f %4.2f = % 4.2f\n ", a,b,z);


    return 0;
}



/*PROCEDIMIENTO ES FUNCION SIN RETURN  */
