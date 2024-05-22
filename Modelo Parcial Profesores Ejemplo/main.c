#include <stdio.h>
#include <stdlib.h>

/*
ENUNCIADO:
Se solicita desarrollar un programa que lea distintos valores enteros y en función de eso realicé distintas
acciones.
1) Deberá solicitar cuántos numeros quiere listar. Por ejemplo 10
2) Deberá solicitar si quiere listarlos en forma directa (ascendente) o inversa (descendente). En este caso
se utilizará 1 para forma directa y 2 para forma inversa.
3) Cualquiera sea la opción indicada, deberá listarse de dos en dos. Por ejemplo si se van a listar 10
numeros de forma directa, deberá listar 0, 2, 4, 6, 8, 10.
4) Deberá calcular e informar el promedio de la suma de todos los numeros. Por ejemplo si se ingresó 10,
deberá sumar 1+2+3+4+5+6+7+8+9+10 e informarlo.
Extra: El programa deberá repetirse n cantidad de veces hasta que se ingrese un 0 y salga del programa.
5) Calcular e informar el valor minimo ingresado en el punto 1.
*/


int main()
{
    int continuar = 1;  // Esta variable controla el bucle del programa, permitiendo repetir según la voluntad del usuario
    int n, opcion;  // n almacenará la cantidad de números listar, 'opcion' indica si será ascendente o descendente
    int suma = 0;  // Esta variable acumulará la suma de los números listados
    int minimo=999; // Lo inicializo en un valor muy elevado para asegurarme que con el primer ingreso de "n" asigne un nuevo valor a "minimo"
    float promedio;

    while (continuar) {  // Bucle principal que permite repetir el programa. La variable continuar se incializa en 1 para asegurarnos que al menos ingrese 1 vez al while.
        // Solicitamos al usuario el número de elementos a listar
        printf("Ingrese la cantidad de numeros que desea listar: ");
        scanf("%d", &n);

        // Pregunta al usuario si desea una lista ascendente (1) o descendente (2)
        printf("Ingrese 1 para listar de forma directa (ascendente) o 2 para forma inversa (descendente): ");
        scanf("%d", &opcion);

        printf("Numeros listados: ");

        // Dependiendo de la opción, listamos los números
        if (opcion == 1) {  // Opción ascendente
            for (int i = 0; i <= n; i += 2) {  // Bucle desde 0 hasta n, incrementando de 2 en 2
                printf("%d ", i);  // Imprimimos cada número
            }
        } else {  // Opción descendente
            for (int i = n; i >= 0; i -= 2) {  // Bucle desde n hasta 0, decrementando de 2 en 2
                printf("%d ", i);
            }
        }
        printf("\n");

        // Calculamos el promedio de los números listados: primero sumo los números del 0 hasta el n, luego los divido por n.
        suma = 0;
        for(int j=0;j<=n;j++)
            suma = suma + j;

        promedio = (float)suma / n;  // Dividimos la suma entre el total de números para el promedio. Con (float) casteo el resultado de la división para que no realice la operación matemática trabajando solo con enteros
        printf("Promedio de la suma de todos los numeros: %.2f\n", promedio);

        // Preguntamos al usuario si desea continuar
        printf("Ingrese 0 para salir o cualquier otro numero para continuar: ");
        scanf("%d", &continuar);

        // Si elnumero ingresado es menor que los anteriores, los almaceno en la variable minimo
        if (n < minimo)
            minimo = n;
    }

    // Mostramos el valor mínimo encontrado
    printf("El valor minimo ingresado es: %d\n", minimo);

    return 0;  // Finaliza el programa retornando 0, indicando que terminó sin errores

}
