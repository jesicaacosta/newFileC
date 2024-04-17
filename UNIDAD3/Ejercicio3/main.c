#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que pida el ingreso de un número. Si el valor ingresado es 2, 4 o 6
imprimir “Par”. Si el valor ingresado es 1, 3 o 5 imprimir “Impar”. Para cualquier otro
número imprimir “Error”. Utilizar el operador OR (||).*/

int main()
{
    int nro;

    printf("Ingrese un numero \n");
    scanf ("%d",&nro);

    if (nro == 2 || nro == 4 || nro == 6 ) {
        printf ("Par");
    } else if (nro == 1 || nro == 3 || nro == 5){
    printf ("Impar");
    } else {
    printf ("Error");
    }


    return 0;
}
