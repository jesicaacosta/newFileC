#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que permita el ingreso de un n�mero entero positivo y que imprima por
pantalla todos los n�meros enteros positivos menores que �l. E.g.: Si el usuario ingres� 4 se
deber� mostrar: 1, 2 y 3. */


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
