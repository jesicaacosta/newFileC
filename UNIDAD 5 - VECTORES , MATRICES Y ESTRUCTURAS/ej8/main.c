#include <stdio.h>
#include <stdlib.h>

/*Cree un programa que pida 5 números enteros por teclado y guarde dichos datos en un vector.
Luego muestre por pantalla el resultado de la suma de todos ellos.
Vector numérico: 1,1,1,2,3.
Suma: 8*/

#define TAM 5

int main()
{
int vec[TAM] ={0};
int i=0,suma;
for(i=0;i<TAM;i++){

    scanf("%d",&vec[i]);
    suma=suma+vec[i];
}
printf("Suma: %d",suma);

    return 0;
}
