#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nro, primerIteracion, segundaIteracion, tercerIteracion;
    int i = 0;
    do {
    i = 1;
    scanf ("%f",&nro);
    primerIteracion = nro * 1;
    segundaIteracion = nro * 2;
    tercerIteracion = nro * 4;

    printf ("El resultado de la multiplicacion por 1 es: %.3f\n", primerIteracion);
        i++;
    printf ("El resultado de la multiplicacion por 2 es: %.3f\n",segundaIteracion);
        i++;
    if ( i == 3 ) {
        printf ("Salteando la iteracion 3\n");
            i--;
    }
    printf ("El resultado de la multiplicacion por 4 es: %.3f\n",tercerIteracion);

    } while(0);

    return 0;
}
