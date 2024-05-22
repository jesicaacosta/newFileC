#include <stdio.h>
#include <stdlib.h>
#define tam 5
/*Cree un programa que pida 5 números enteros por teclado y guarde dichos datos en un vector.
Luego guardarlos en otro vector divididos por 2. Mostrar por pantalla ambos vectores.
Vector 1: 10, 2, 1, 3.
Vector 2: 5, 1, 0.5, 1.5.
*/
int main()
{

int vector[tam];
int nuevoVector [tam];

    for(int i =0; i<tam; i++)
    {
        scanf("%d",&vector[i]);
        nuevoVector[i] = vector[i] / 2;
    }

    printf("Vector 1: ");
        for(int i =0; i<tam; i++)
    {
        printf("%d ",vector[i]);
    }

    printf("Vector 2: ");
        for(int i =0; i<tam; i++)
    {
        printf("%d ",nuevoVector[i]);
    }

    //printf("El promedio de los valores es:  %.1f",(float)suma/TAM);

    return 0;
}
