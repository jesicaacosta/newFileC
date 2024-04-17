#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t%c    ASCII   %c\n",186,186);
    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,188);

    printf("Ingrese un numero (mayor a 32) para ver su valor en ASCII: \n");
    scanf("%i",&numero);

    printf("EL valor en ASCII de %i es: %c\n",numero,numero);

    return 0;
}
