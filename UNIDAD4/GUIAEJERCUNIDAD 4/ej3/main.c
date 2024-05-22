#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que permita el ingreso de un número entero positivo y que imprima por
pantalla todos los números enteros positivos menores que él. E.g.: Si el usuario ingresó 4 se
deberá mostrar: 1, 2 y 3. */


int main()
{
    int nro ;
    scanf("%d", &nro);
    for ( int i = 0; i < nro ; i++)
    {
        printf ("%d",i);
    }
    return 0;
}
