#include <stdio.h>
#include <string.h>
int main ()
{
    /*long k = 200; // declaro variable long y la inicializo con 200.
    long *pk = &k; // pk es variable tipo puntero, puntero a long y lo apunto a k., la direccion donde esta k
    void *pgen; // pgen es un puntero genérico, no apunta a ningun lado.
    pgen = pk; /* puedo asignar cualquier tipo de puntero a uno genérico y también puedo asignar un puntero
    genérico a uno “concreto” (hace un cast automático) */
    /* k = pgen; //no se puede hacer porque k es variable a long y pgen es puntero genérico)
     k = *(long*)pgen; /* para tomar lo apuntado por puntero genérico, debo indicar mediante un cast como debo
    interpretar ese puntero genérico.*/

double *dp = malloc (sizeof(int));


void * malloc (size_t size) ;

    void intercambio(int * i, int * j) // *i es la direccion de memoria
    {
        int aux;
        aux = *i;
        *i = *j;  //modifica el valor del puntero
        *j = aux;
    }


    return 0;
}
