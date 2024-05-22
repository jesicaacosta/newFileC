#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf ("Ingrese un numero: ");
    scanf("%d", &numero);

    if (numero>0 && numero<100)
    {
        printf("El valor esta entre cero y 100");
    }
    else if (numero<=0 || numero>=100)
    {
        printf("El valor es menor o igual a cero o mayor o igual a 100");
    }
    return 0;
}


