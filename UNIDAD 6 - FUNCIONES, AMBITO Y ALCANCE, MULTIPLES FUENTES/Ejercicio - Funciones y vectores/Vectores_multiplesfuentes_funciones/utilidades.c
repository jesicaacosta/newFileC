#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int selectopt()
{
    int r;
    int cuantos;
    bool deboSeguir;

    do
    {
        printf ("\n\nIngrese una opcion\n");
        printf ("1 - Ingresar Datos al Vector\n");
        printf ("2 - Listar Vector\n");
        printf ("3 - Sumar elementos y mostrar total\n");
        printf ("4 - Calcular maximo\n");
        printf ("### PLUS ###\n");
        printf ("5 - Suma triples\n");
        printf ("6 - Contar solo si el proximo valor es mayor\n");
        printf ("7 - Salir\n");
        printf ("8 - Elemento por su posicion \n");
        printf ("==> ");
        cuantos = scanf ("%d",&r);
        deboSeguir =  true;
        if (cuantos == 0)
            printf("Debe ingresar una opción\n");
        else
        {
            if ((r < 1) || (r > 7))
            {
                printf ("Las opciones son de 1 a 5 solamente\n");
            }
            else
            {
                deboSeguir = false;
            }
        }
    }
    while (deboSeguir);
    return r;
}

//creacion de las funciones

void ingresar_datos(int vector[], int dim) //void porque no retorna nada (dim es TAM despues)
 {
    for (int i = 0; i < dim; i++) {
        printf("valor para la posicion %d: ", i);
        scanf("%d", &vector[i]);
    }
}

void listar_datos(int vector[], int dim)
 {
    for (int i = 0; i < dim; i++) {
        printf(" Eemento que tiene la posicion: %d es %d\n", i, vector[i]);
    }
}


float sumatoria_total(int vector[], int dim)
 {
    int suma = 0;
    for (int i = 0; i < dim; i++) {
        suma += vector[i];
    }
    return "La suma es: %f" ,suma;
}

void calcula_maximo(int vector[], int dim)  {
 /* A COMPLETAR */
}


int sumar_elementos_triples(int vector[], int dim) {
    int suma = 0;
    for (int i = 0; i < dim; i += 3) {
        suma += vector[i];
    }
    return suma;
}

int contar_elementos_siguiente_mayor(int vector[], int dim)
{

 /* A COMPLETAR */
}


void suma_ponderada(double vec[], int dim) {
    double suma_ponderada = 0.0;
    for (int i = 0; i < dim; i++) {
        suma_ponderada += vec[i] * i;
    }
    printf("La suma ponderada del elemento por su posición es: %.2f\n", suma_ponderada);
}


