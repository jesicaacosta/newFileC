#include <stdio.h>
#include <stdlib.h>
/*  Enunciado
Se solicita desarrollar un programa que lea distintos valores enteros y en función de eso realicé distintas
acciones.
1) Deberá solicitar cuántos numeros quiere listar. Por ejemplo 10 -
2) Deberá solicitar si quiere listarlos en forma directa (ascendente) o inversa (descendente). En este caso
se utilizará 1 para forma directa y 2 para forma inversa.
3) Cualquiera sea la opción indicada, deberá listarse de dos en dos. Por ejemplo si se van a listar 10
numeros de forma directa, deberá listar 0, 2, 4, 6, 8, 10.
4) Deberá calcular e informar el promedio de la suma de todos los numeros. Por ejemplo si se ingresó 10,
deberá sumar 1+2+3+4+5+6+7+8+9+10 e informarlo.
Extra: El programa deberá repetirse n cantidad de veces hasta que se ingrese un 0 y salga del programa.
5) Calcular e informar el valor minimo ingresado en el punto 1.*/


int main()
{
    int cantidadNumerosAListar, tipoDeOrdenamiento;
    int suma =0;
    float promedio;
    int contador =0; //para guardar la cantidad de iteraciones

    while (1)
    {

        printf("Cuantos numeros quiere listar? \n");
        scanf("%d",&cantidadNumerosAListar);

        if (cantidadNumerosAListar == 0)   //salgo del while
        {
            break;
        }

        printf("Ordenar: \n1 - Manera Ascendente \n2- Manera Descendente  \n\n");
        scanf("%d",&tipoDeOrdenamiento);

        switch (tipoDeOrdenamiento)
        {
        case 1:
            for (int i = 0; i <= cantidadNumerosAListar; i += 2)
            {
                printf("%d\n",i);
                suma += i;
                contador++;
            }
            break;
        case 2:
            for (int i = cantidadNumerosAListar; i >= 0 ; i-=2)
            {
                printf("%d\n",i);
                suma += i;
                contador++;
            }
            break;
        default:
            printf("opcion Incorrrecta, intente nuevamente\n");
            break;
        }
    }
    promedio = (float)suma / contador; //pongo float delante de suma para transformar el alor entero  decimal
    printf("El promedio de la suma de los numeros es: %.2f\n", promedio);




    return 0;
}
