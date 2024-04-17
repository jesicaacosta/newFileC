#include <stdio.h>
#include <stdlib.h>


#define PI 3.14159265358979323846

int main()
{

    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,71,69,79,77,69,84,82,214,65,32,66,181,83,73,67,65,32,32,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,32,32,32,32,67,73,82,67,85,76,79,32,32,32,32,32,32,32,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

    float radio;


    printf("\n\n\nIngrese el radio de la circunferencia: ");
    scanf("%f", &radio);

    float perimetro = 2 *(PI*radio);
    float area = PI * (radio*radio);

    printf("\n\n\tINFORMACION DEL CIRCULO INGRESADO\n\n");
    printf("Radio: %.2f\n", radio);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);

    printf("\n\n\n\n\n\n\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",32,32,32,32,175,32,70,73,78,32,68,69,76,32,80,82,79,71,82,65,77,65,32,174);

    return 0;
}

