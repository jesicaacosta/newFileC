#include <stdio.h>
#include <stdlib.h>
#define tam 16

int main()
{
    int vector_numerico[tam] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
    int minimo = 0;

    while ( minimo < tam){
        printf("Vector numerico: %d\n",vector_numerico[minimo]);
        minimo += 1;
    }
    return 0;
}

