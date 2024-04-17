#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 10) {
        printf("Verdadero\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}
