#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int vec[tam] ;
    int opcion, buscar;
    int mayor, menor;
    int posicion, i;
    int suma;
    float media;

    do {
        printf("---------------------------------------------------------------------------------------");
        printf("\n0) Salir \n1) Cargar el vector \n2) Limpiar el vector\n3) Buscar el mayor elemento\n4) Buscar el menor elemento\n5) Buscar elemento de una posición seleccionada\n6) Calcular la suma\n7) Calcular la media\n");
        printf("Ingrese una opcinn: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 0:
            break;
        case 1:
            printf("Ingrese %d numeros enteros:\n", tam);
            for (i = 0; i < tam; i++)
            {
                scanf("%d", &vec[i]);
            }
            printf("Ingreso: ");
            for (i = 0; i < tam; i++)
            {
                printf("%d ", vec[i]);
            }
            printf("\n");
            break;
        case 2:
            for (i = 0; i < tam; i++)
            {
                vec[i] = 0;
            }
            printf("Vector limpiado.\n");
            break;
        case 3:
            mayor = vec[0];
            for (i = 0; i < tam; i++)
            {
                if (vec[i] > mayor)
                {
                    mayor = vec[i];
                }
            }
            printf("El mayor es: %d\n", mayor);
            break;
        case 4:
            menor = vec[0];
            for (i = 0; i < tam; i++)
            {
                if (vec[i] < menor)
                {
                    menor = vec[i];
                }
            }
            printf("El menor es: %d\n", menor);
            break;
        case 5:
            printf("Ingrese el dato a buscar: ");
            scanf("%d", &buscar);

            for (i = 0; i < tam; i++)
            {
                if (buscar == vec[i])
                {
                    printf("El numero %d esta en la posicion %d.\n", buscar, i);
                    break;
                }
            }
            if (i == tam) {
                printf("El número %d no se encontro en el vector.\n", buscar);
            }
            break;
        case 6:
            suma = 0;
            for (i = 0; i < tam; i++)
            {
                suma += vec[i];
            }
            printf("La suma es: %d\n", suma);
            break;
        case 7:
            suma = 0;
            for (i = 0; i < tam; i++)
            {
                suma += vec[i];
            }
            media = (float)suma / tam;
            printf("La media es: %.2f\n", media);
            break;
        default:
            printf("Opcion incorrecta, reintente.\n");
            break;
        }
    } while(opcion != 0);

    return 0;
}
