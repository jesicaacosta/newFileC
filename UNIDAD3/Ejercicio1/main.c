#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que pida el ingreso de dos n�meros enteros y que indique cu�l es el
menor de ellos. (Asuma que los n�meros son distintos).*/

int main()
{
    int nro1,nro2;

    printf("Ingrese el primer numero: \n");
    scanf ("%d",&nro1);

    printf("Ingrese el segundo numero: \n");
    scanf ("%d",&nro2);

    if (nro1 < nro2 ) {
        printf ("El menor es el primer numero ingresado, con valor: %d",nro1);
    } else {
        printf ("El menor es el segundo numero ingresado, con valor: %d",nro2);
    }

    return 0;
}
