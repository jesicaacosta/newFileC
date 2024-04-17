#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,b, interseccionX, interseccionY;

    printf("Ingrese la pendiente de la funci%cn\n",162);
    scanf("%f",&m);

    printf("Ingrese la ordenada al origen\n"); //
    scanf("%f",&b);

    interseccionX = -b /m;
    interseccionY = b;

    printf("Su funci%cn lineal qued%c expresada: y= %.2fx+ %.2f\n",162,162, m , b);

    printf ("La intersecci%cn en x esta dada por el punto: (%.2f,0) \n",162,interseccionX);//valor de x => y=0
    printf ("La intersecci%cn en y esta dada por el punto: (0, %.2f) \n",162, interseccionY); //valor de y => x= 0


    return 0;
}
