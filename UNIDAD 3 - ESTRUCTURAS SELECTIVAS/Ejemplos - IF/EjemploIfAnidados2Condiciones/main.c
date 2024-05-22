#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    printf ("Ingrese el valor numerico: ");
    scanf("%d", &numero1);

    if (numero1<0 && numero1>-10)
    {
        printf("El valor es menor a 0 y mayor a -10");
    }
    else if (numero1==5 || numero1>10)
    {
        printf("El valor es igual a 5 o mayor a 10");
    }
    else
    {
        printf("El valor es otro");
    }
    return 0;
}
