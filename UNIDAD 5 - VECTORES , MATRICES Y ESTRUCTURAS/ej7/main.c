#include <stdio.h>
#include <stdlib.h>
#define TAM 11
/*Cree tres arrays (vectores) denominados vec_tabla1, vec_tabla2, vec_tabla3 y rellene con los
números de la tabla del 1, la tabla del 2 y el último con la tabla del 3 respectivamente. Luego
mostrar en pantalla en orden ascendente la siguiente salida.
Tabla del 1: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.
Tabla del 2: 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20.
Tabla del 3: 0, 3, 6, 9,12, 15, 18, 21, 24, 27, 30.
*/
int main()
{
    int vec_tabla1[TAM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Tabla del 1
    int vec_tabla2[TAM] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20}; // Tabla del 2
    int vec_tabla3[TAM] = {0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30}; // Tabla del 3
    int i = 0;
    int j = 0;
    int k = 0;


    printf("\nTabla del 1: ");
    while (i < TAM )
    {
        vec_tabla1[i] *= 1;
        printf(",%d", vec_tabla1[i]);
        i++;
    }

    printf("\nTabla del 2: ");
    while (j < TAM )
    {
        vec_tabla1[j] = j*  2;
        printf(",%d", vec_tabla1[j]);
        j++;
    }

    printf("\nTabla del 3: ");
    while (k < TAM )
    {
        vec_tabla1[k ] =k * 3;
        printf(",%d", vec_tabla1[k]);
        k ++;
    }
    return 0;
}
