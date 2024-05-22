#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, numB, mayor;
    printf("Ingrese valor a para numA: \n");
    scanf("%d", &numA);
    printf("Ingrese valor a para numB: \n");
    scanf("%d", &numB);
    mayor = numA>numB ? numA : numB;
    printf("El valor mayor es: %d \n", mayor);
    return 0;
}
