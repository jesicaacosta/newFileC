#include <stdio.h>
#include <stdlib.h>
#define tam 5
/* Cree un programa que pida 5 n�meros enteros por teclado y guarde dichos datos en un vector.
Buscar el valor m�s alto. Mostrar dicho m�ximo por pantalla y en qu� posici�n se encuentra dentro
del vector
Vector: 1, 2, 7, 3.
M�ximo: 7 en posici�n 2.
*/

int main()
{
    int vec [tam];
    int mayor = 0;
    int posicion = 0;
    int i = 0;

    for ( i =0  ; i < tam ; i++)
    {
        scanf("%d", &vec[i]);
        if ( vec[i] > mayor)
        {
            mayor = vec[i];
            posicion = i ;
        }

    }
    printf("Maximo: %d en posicion %d\n", mayor, posicion);
    return 0;
}
