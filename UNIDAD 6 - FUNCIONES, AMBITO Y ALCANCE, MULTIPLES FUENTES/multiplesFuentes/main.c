#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*Hacer un programa que presente al usuario un menu de opciones para implementar una calculadora.
Las opciones deben ser Suma, Resta, Multiplicación, División y Salir.
Implementar una función por cada operación matemática.
Utilizar múltiples fuentes para tener las funciones en un archivo .c separado.*/

int main()
{
    int opc  = 1;
    int nro1;
    int result;
    int nro2, suma;

        printf ("Ingrese el primer valor : ");
        scanf("%d", &nro1);
        printf ("Ingrese el segundo valor : ");
        scanf("%d", &nro2);
    do
    {
        printf("1- Suma \n2- Resta \n3- Multiplicacion \n4- Division \n0- Salir ");
        scanf("%d",&opc);

        if (opc > 4)
        {
            break;
        }

        switch(opc)
        {
        case 1:
            result = functionSuma (nro1,nro2);
            printf ("%d", result);
            break;
        case 2:
            result = functionResta (nro1,nro2);
            printf ("%d", result);
            printf("\n");
            break;
        case 3:
            result = functionMultiplicacion (nro1,nro2);
            printf ("%d", result);
                        printf("\n");
            break;
        case 4:
            result = functionDivision (nro1,nro2);
            printf ("%.2f", (float)result);
                        printf("\n");
            break;
        default:
            printf("Invalido");
            break;
        }
    }
    while ( opc != 0 );
    return 0;
}
