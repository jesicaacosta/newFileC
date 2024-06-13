#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que permita al usuario ingresar una serie de notas (valores entre 1 y
10) y que al ingresar 0 (cero) la carga de notas se detenga y el programa muestre el promedio
de todas las notas ingresadas.
*/
int main()
{
    int nota =0;
    int notasAcumuladas=0;
    int cantNotasAcumuladas=0;

    do
    {
        printf("Ingrese la nota: \n");
        scanf("%d",&nota);
        if (nota >= 1 && nota <= 10)
        {
            notasAcumuladas  += nota;
            cantNotasAcumuladas++;
        }
        else if (nota == 0)
        {
            break;
        }
        else
        {
            printf ("Valor incorrecto");
        }
    }
    while(nota != 0);
    if (1)
    {
        float promedio = notasAcumuladas / cantNotasAcumuladas;
        printf("Nota promedio: %.1f\n", promedio); //no pudo solucioanr el error en el calculo
    }


    return 0;
}
