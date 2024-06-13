#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MALLOC Nos permite reservar memoria, memory allocation \n");

//    void malloc (size_t size) ;

    double *dp = malloc ( sizeof (double)); /** asigno con malloc al puntero dp el tamaño de memoria que tiene un double en bytes */
    printf ("Memoria asignada a dp: %zu  \n", dp);
    dp = 100;
    printf ("Contenido en dp  %d  \n", dp);
    printf ( "Tamnio de un double  %d \n", sizeof (double ) ) ;
    printf ( "Tamnio de un double dp  %d \n", sizeof (*dp ) ) ;
    printf ( "Tamnio de un int  %d \n", sizeof (int ) ) ;


    int vec_pru [3] = { 2,3,4 };
    printf("Tamano en bytes ( 4 bytes x cant de elem del vector ) vec_pru: %zu \n", sizeof(vec_pru)); /*imprime el tamaño en bytes de int multiplicado
    por el número de elementos en el arreglo (15 * sizeof(int)).   %zu se utiliza para imprimir valores de tipo size_t*/

    int *tam_int = malloc(sizeof(int)); // Asigna memoria para un solo entero

    // Imprime el tamaño en bytes de un entero
    printf ("Memoria asignada a tam_int:  %zu \n", *tam_int);

    return 0;
}
