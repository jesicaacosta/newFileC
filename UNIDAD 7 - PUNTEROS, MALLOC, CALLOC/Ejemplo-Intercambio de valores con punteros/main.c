#include <stdio.h>
#include <stdlib.h>

void intercambio ( int *i , int *j ); //declaro la funcion que voya usar

int main()
{
    int i=5;
    int j=7;

    printf("Valores antes del intercambio: \n");
    printf("i: %d \n",i);
    printf("j: %d \n",j);

    intercambio(&i,&j);

    printf("\nValores despues del intercambio: \n");
    printf("i: %d \n",i);
    printf("j: %d \n",j);
    return 0;
}

void intercambio (int *i,int *j) //creo la funcion
{
    int aux;

    aux = *i;
    *i=*j;
    *j=aux;
}
