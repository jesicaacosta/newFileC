#include <stdio.h>
#include <stdlib.h>
#define tam 7 // Cambio el tamaño a 7 ya que hay 7 num en la tabla del 5 entre 0 y 30
/*Cree y relle3e un vector con los números de la tabla del 5 comprendidos entre 0 y 30 y luego mostrar
en pantalla en orden ascendente.
Vector numérico: 0,5,10,15,20,25,30. */

int main()
{
    int vec[tam] ;
    int pos = 0;

    for(pos =0 ; pos<tam; pos++)
    {
            vec[pos] = (pos*5);
            printf("%d\n ", vec[pos]);
    }


    printf("\n");

    return 0;
}
