#include <stdio.h>
#include <stdlib.h>


int resultado = 0 , nro;
int main()
{
    do {
            scanf("%d", &nro);
            resultado += nro;
    } while (nro > 0);
    printf ( "La suma total de los numeros ingresados es: %d", resultado);


    return 0;
}
