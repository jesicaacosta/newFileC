#include <stdio.h>
#include <stdlib.h>

//1. Escribir un programa que emita por pantalla todos los números pares menores a 20.
int main()
{
    for (int i = 0; i < 21 ; i++) {
            if ( i % 2 == 0 ) {
            printf("%d\n", i);
            }
    }
    return 0;
}
