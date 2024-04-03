#include <stdio.h>
#include <stdlib.h>

//constantes

#define saludo "hola"

int nro = 10 ;
int nro2 = 2;
int nro3 = 5;
float nroFloat = 5.21;
int dato;


int main()
{
    printf ("El numero es: %d  \n y el otro es %f. El primer numero es: %d y el segundo %d Un numero literal es 500 ",nro,nroFloat,nro3,nro2);

    // Ingreso de datos
    printf("Ingrese el valor del dato:%d",dato);
    scanf ("%d" , &dato);
    printf("Se ingreso: %d",dato);







    return 0;
}
