#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sumando1 , sumando2, res;
    int nro;

    printf("\n\nIngrese el primer sumando\n");
    scanf("%f", &sumando1);

    printf("\n\nIngrese el segundo sumando\n");
    scanf("%f", &sumando2);

    res = sumando1 + sumando2 ;
    printf("\n\nEl resultado es: |%10.2f|", res);
    printf("\n\nEl resultado es: |%10.2f|", res*3);

    return 0;
}
