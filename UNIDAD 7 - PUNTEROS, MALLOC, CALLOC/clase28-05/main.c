#include <stdio.h>
#include <string.h>
int main ()
{
    /*long k = 200; // declaro variable long y la inicializo con 200.
    long *pk = &k; // pk es variable tipo puntero, puntero a long y lo apunto a k., la direccion donde esta k
    void *pgen; // pgen es un puntero gen�rico, no apunta a ningun lado.
    pgen = pk; /* puedo asignar cualquier tipo de puntero a uno gen�rico y tambi�n puedo asignar un puntero
    gen�rico a uno �concreto� (hace un cast autom�tico) */
    /* k = pgen; //no se puede hacer porque k es variable a long y pgen es puntero gen�rico)
     k = *(long*)pgen; /* para tomar lo apuntado por puntero gen�rico, debo indicar mediante un cast como debo
    interpretar ese puntero gen�rico.*/

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
