#include <stdio.h>
#include <stdlib.h>
/*Declarar un vector denominado vector_numerico, de tamaño 16 y rellenarlo con los primeros 16
números enteros (empezando del 1) y luego mostrar dicho vector por pantalla, en orden ascendente.
La salida debe ser:}
Vector numérico: 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16.*/
#define TAM 16

int main()
{
    int vector_numerico[TAM] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
    for ( int i =0 ; i < TAM ; i++){
           printf("%d,",vector_numerico[i]);
    }

    return 0;
}
