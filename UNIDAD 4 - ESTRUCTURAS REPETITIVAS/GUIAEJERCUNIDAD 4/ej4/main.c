#include <stdio.h>
#include <stdlib.h>


/*. Escribir un programa que permita el ingreso de un número entero positivo y que imprima el
resultado de la suma de todos los enteros positivos que le anteceden. E.g.: Si el usuario
ingresó 7 se deberá mostrar: 21 (1+2+3+4+5+6).
*/
int main()
{
    int nro , acumulador;
    scanf("%d", &nro);
    for ( int i = 0; i < nro ; i++)
    {
        printf ("%d\n",i);
        acumulador += i;
    }
    printf ("Resultado: %d",acumulador);
    return 0;
}
