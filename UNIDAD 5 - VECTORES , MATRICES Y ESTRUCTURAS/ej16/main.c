#include <stdio.h>
#include <stdlib.h>
#define max 5

/*(Mecatrónica) En un proyecto mecatrónico se necesita utilizar un vector para almacenar lecturas de
temperatura de 5 puntos diferentes de un sistema de refrigeración. Los sensores utilizados informan
los valores de temperatura con valores enteros en décimas de grados centígrados, por ejemplo para
una temperatura de 25 °C (25 grados centígrados) los sensores informan "250" y para una
temperatura de 23,4 °C el sensor indica 234. Los valores enteros tomados por el sensor deben
guardarse en un vector de enteros. El software debe indicar la temperatura promedio del sistema
mecatrónico en grados centígrados.*/

int main()
{
    int temperaturas [max];
    int i = 0;
    int valorSensorIngresado = 0;

    while ( i < 5)
    {
        scanf("%d", &valorSensorIngresado[i]);
        valorSensorIngresado[i] / 10;
        printf ("%d", valorSensorIngresado[i])
        printf("Ingreso: %d \n\n", ingresado);
        i++;
    }

    return 0;
}





/*


RESUELTO EN CLASE

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
float vec[TAM] ={0};
int i= 0,j=0;
float suma=0,val=0,prom=0;
for(i=0;i<TAM;i++){

    scanf("%f",&val);
    vec[i]=val/10;
    suma=suma +vec[i];

}
for(int j=0;j<TAM;j++){

    printf("%0.1f %cC \n",vec[j],248);
}
prom = suma/TAM;
printf("El promedio es %0.2f", prom);


    return 0;
}*/











