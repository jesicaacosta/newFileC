#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,71,69,79,77,69,84,82,214,65,32, 66,181,83,73,67,65,32,45,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,32,32,82,69,67,84,181,78,71,85,76,79,32,32,32,32,32,32,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    float longitud, ancho;


    printf("Ingrese la longitud del rect%cngulo: ",160); //altura
    scanf("%f", &longitud);

    printf("Ingrese el ancho del rect%cngulo: ",160);
    scanf("%f", &ancho);

    float perimetro = 2 *(longitud+ancho);
    float area = longitud * ancho;

    printf("\n\n\n\tINFORMACION DEL RECT%cNGULO INGRESADO\n\n",181);
    printf("Longitud: %.2f\n", longitud);
    printf("Ancho: %.2f\n", ancho);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);


    return 0;
}
