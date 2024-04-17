#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",186,32,32,  70,79,82,77,65,84,69,79,32 ,68,69,32, 83,67,65,78,70 ,32,32,186);
    printf("\t %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


    float nota1,nota2,nota3;

    printf ("Ingrese la primer nota: ");
    scanf("%f",&nota1);
    printf ("Ingrese la segunda nota: ");
    scanf("%f",&nota2);
    printf ("Ingrese la tercer nota: ");
    scanf("%f",&nota3);

    float promedio = (nota1 + nota2 + nota3) /3;
    printf ("El promedio es:%.2f", promedio);

    return 0;
}
