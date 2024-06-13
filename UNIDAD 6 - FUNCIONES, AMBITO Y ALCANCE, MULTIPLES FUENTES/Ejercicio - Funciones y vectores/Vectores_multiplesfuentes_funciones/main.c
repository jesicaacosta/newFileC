#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "utilidades.h"

/*********************************************************************
    IMPORTANTE: no se puede modificar ni borrar nada del código
    entregado SOLO se puede agregar !!!
    Nombre: jesica acosta
    DNI: 37769400
    ENUNCIADO
    Se pide armar un programa que resuelva el siguiente enunciado.
    Implementar cada una de las opciones que da el menu de selectopt
    es decir
    1. Ingresar los datos al vector vdatos.
    2. Listar el vector con los datos cargados.
    3. Sumar todos los elementos del vector y mostrar el total en el main.
    4. Calcular el valor máximo del vector, mostrar valor y posición en la que se encuentra.

    PLUS:
    5. Suma los elementos de 3 en 3 del vector. Ej: si es de 10 elementos, suma la posición 0, 3, 6 y 9.
        El resultado se muestra en main
    6. Contar los elementos del vector sólo si el valor de la posición siguiente es mayor al actual.
        Ej: v[0] es 3 y v[1] es 2 esa conteo no se realiza y se sigue con el siguiente grupo v[1] compara v[2].
        El último elemento del vector compara contra el primero.
    7. Salir
*********************************************************************/

#define CANT 3

int main()
{
    int opt;
    bool seguir = true;
    int vdatos[CANT];

    while (seguir)
    {
        opt = selectopt ();


        switch (opt)
        {
        case INGRESAR:
            ingresar_datos(vdatos, CANT);
            break;
        case LISTAR:
            listar_datos(vdatos, CANT);
            break;
        case SUMATORIA_TOTAL:
            sumatoria_total(vdatos, CANT);
            break;
        case CALCULA_MAXIMO:
            /* A COMPLETAR */
            break;
        case SUMA_TRIPLE :
            printf("La suma de los elementos en posiciones mde 3 en 3 es: %d\n", sumar_elementos_triples(vdatos, CANT));
            break;
        case CONTAR_SIG_MAXIMO:
            /* A COMPLETAR */
            break;
        case  SUMA_PONDERADA:
            suma_ponderada(vdatos, CANT);
            break;

        case SALIR:
            seguir = false;
            break;
        }
    }
return EXIT_SUCCESS; //indica q el programa se ejecuto bien y finalizo sin errores igual que el 0
}
