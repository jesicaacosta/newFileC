#include <stdio.h>
#include <stdlib.h>
#define max 5

/*(Mecatr�nica) En un proyecto mecatr�nico se necesita utilizar un vector para almacenar lecturas de
temperatura de 5 puntos diferentes de un sistema de refrigeraci�n. Los sensores utilizados informan
los valores de temperatura con valores enteros en d�cimas de grados cent�grados, por ejemplo para
una temperatura de 25 �C (25 grados cent�grados) los sensores informan "250" y para una
temperatura de 23,4 �C el sensor indica 234. Los valores enteros tomados por el sensor deben
guardarse en un vector de enteros. El software debe indicar la temperatura promedio del sistema
mecatr�nico en grados cent�grados.*/

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











