#include <stdio.h>
#include <stdlib.h>

#include "funciones.h" //archivo con definiciones de funciones va en funciones.h


int main()
{
    int a = 2; // Creo variable 'a'
    int *apt = &a; // Creo un puntero tipo int y le asigno la dirección de memoria de 'a'
    // Con '&' obtengo la dirección de memoria de una variable.
    void *pgen; // Declaro un puntero genérico 'pgen' de tipo void, genérico porque no tiene un tipo de dato especifico
    pgen = apt;  // pgen se asigna a la dirección de memoria a la que apt está apuntando en ese momento.
    // La variable apt es un puntero que almacena una dirección de memoria (la de a)
    // Después de esta asignación, ambos punteros pgen y apt apuntan a la misma dirección de memoria.

    printf("APT VALE: %i\n", *apt);
    printf("LA DIRECCION DE MEMORIA DE APT ES: %p\n", (void *)apt); /*aunque la dirección de memoria es simplemente un número entero sin signo que representa una posición de memoria, C
     no tiene un especificador de formato específico para este tipo de dato. Por lo tanto, %p espera un puntero de tipo void *, que es un tipo de puntero genérico que puede apuntar a cualquier tipo de dato.*/

    int b = 10;  // Declaración de una nueva variable 'b' con valor 10
    apt = &b;    // Asignación de la dirección de memoria de 'b' al puntero 'apt'

    printf("APT VALE AHORA: %i\n", *apt);
    printf("LA DIRECCION DE MEMORIA DE APT AHORA ES: %p\n", (void *)apt);


    printf ("\n\n ******* EJEMPLO INTERCAMBIO CON PUNTEROS *********** \n\n");

    int j= 5;
    int i = 4;
    printf (" i vale: %d y j vale: %d \n", i,j);

    intercambio ( &i, &j) ; //llamo a la funcion, mando como parametros direcc mem i j
    printf (" Ahora i vale: %d y j vale: %d \n", i , j) ;

    return 0;
}



