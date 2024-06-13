#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 6

void ingresar_datos(double vec[], int dim);
double sumatoria_total(double vec[], int dim);
void listar_datos(double vec[], int dim);
double sum_ponderada(double vec[], int dim);

int main()
{
    int opc;
    bool datos_cargados = false;
    double resultado;
    double miVector[TAM];

    do
    {
        printf("\nMenu de Opciones:\n");
        printf("1) Ingresar datos\n");
        printf("2) Listar datos \n");
        printf("3) Calcular sumatoria total\n");
        printf("4) Calcular sumatoria ponderada\n");
        printf("5) Salir\n");
        printf("\nElija una opcion: ");
        scanf("%d",&opc);

        switch (opc)
        {
        case 1:
            ingresar_datos(miVector, TAM);
            datos_cargados = true;
            break;
        case 2:
            if (datos_cargados)
            {
                listar_datos(miVector, TAM);
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case 3:
            if (datos_cargados)
            {
                resultado = sumatoria_total(miVector, TAM);
                printf("La sumatoria total es: %.2f\n", resultado);
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case 4:
            if (datos_cargados)
            {
                resultado = sum_ponderada(miVector, TAM);
                printf("La sumatoria ponderada es: %.2f\n", resultado);
            }
            else
            {
                printf("Primero debe ingresar datos al vector \n");
            }
            break;
        case 5:
            printf("Saliendo...\n\n");
            break;
        default:
            printf("Opcion incorrecta, vuelva a intentar\n\n");
        }
    } while (opc != 5);

    return 0;
}

void ingresar_datos(double vec[], int dim)
{
    int pos;
    for (pos = 0; pos < dim; pos++)
    {
        printf("Ingrese el valor para la posicion %d: ", pos);
        scanf("%lf", &vec[pos]);
    }
}

void listar_datos(double vec[], int dim)
{
    int pos;
    for (pos = 0; pos < dim; pos++)
    {
        printf("Elemento en la posicion %d: %.2f\n", pos, vec[pos]);
    }
}

double sumatoria_total(double vec[], int dim)
{
    double resultado_sumatoria = 0;
    int pos;

    for (pos = 0; pos < dim; pos++)
    {
        resultado_sumatoria += vec[pos];
    }
    return resultado_sumatoria;
}

double sum_ponderada(double vec[], int dim)
{
    double suma = 0;
    int pos;

    for (pos = 0; pos < dim; pos++)
    {
        suma += pos * vec[pos];
    }
    return suma;
}
