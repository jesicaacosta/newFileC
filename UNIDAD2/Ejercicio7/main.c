#include <stdio.h>
#include <stdlib.h>


int main()
{

    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,71,69,79,77,69,84,82,214,65,32,66,181,83,73,67,65,32,32,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,32,32,32,32,32,80,82,73,83,77,65,32,32,32,32,32,32,32,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    float base, longitud, largo;

    printf("\n\n\nIngrese base del prima: ");
    scanf("%f", &base);
    printf("Ingrese longitud del prima: ");
    scanf("%f", &longitud);
    printf("Ingrese largo del prima: ");
    scanf("%f", &largo);

    float volumen = largo * base * longitud;
    float area = (2*base*largo) + (2*largo*longitud) + (2*longitud*base);

    printf("\n\n\tINFORMACION DEL PRISMA INGRESADO\n\n");
    printf("Base: %.2f\n", base);
    printf("Longitud: %.2f\n", longitud);
    printf("Largo: %.2f\n", largo);
    printf("Volumen: %.2f\n", volumen);
    printf("Area: %.2f\n", area);

    printf("\n\n\n\n\n\n\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",32,32,32,32,175,32,70,73,78,32,68,69,76,32,80,82,79,71,82,65,77,65,32,174);

    return 0;
}
