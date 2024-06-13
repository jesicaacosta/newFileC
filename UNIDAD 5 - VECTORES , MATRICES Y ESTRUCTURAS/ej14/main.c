#include <stdio.h>
#include <stdlib.h>
#define tam 5

/*Se crea un vector denominado vec_vocales con tama�o 5. Dicho vector ser� cargado por teclado con
las vocales en min�scula. para poder realizar las siguientes operaciones indicadas en un men�:
0) Salir
1) Cargar vocales min�sculas
2) Buscar la posici�n de una vocal
3) Mostrar vocales en min�sculas
4) Mostrar vocales en may�sculas*/
int main()
{
    char letrasUsuario[tam];
    int opc;
    char buscar;

    do
    {
        printf("0) Salir\n 1) Cargar vocales minusculas\n 2) Buscar la posicion de una vocal\n 3) Mostrar vocales en minusculas\n 4) Mostrar vocales en mayusculas\n");
        scanf("%d", &opc);

        switch(opc)
        {
        case 0:
            printf("Saliendo...\n");
            break;

        case 1:
            printf("Ingrese 5 vocales en minusculas:\n");
            for(int i = 0; i < tam; i++)
            {
                while(1)
                {
                    scanf(" %c", &letrasUsuario[i]);
                    if(letrasUsuario[i] == 'a' || letrasUsuario[i] == 'e' || letrasUsuario[i] == 'i' || letrasUsuario[i] == 'o' || letrasUsuario[i] == 'u')
                    {
                        printf("Ingreso %c\n", letrasUsuario[i]);
                        break; // Salgo del bucle infinito si ingresa una vocal valida
                    }
                    else if(letrasUsuario[i] == 'S' || letrasUsuario[i] == 's')
                    {
                        opc = 0; // Cambiar opc a 0 para salir del programa
                        break;
                    }
                    else
                    {
                        printf("No es una vocal, reintente o ingrese 'S' para salir.\n");
                    }
                }
                if (opc == 0) break; // Salgo del bucle for si se ingres� 'S' o 's'
            }
            break;

        case 2:
            printf("Ingrese el valor a buscar: ");
            scanf(" %c", &buscar); // Espacio antes de %c para omitit el salto de linea
            for(int i = 0; i < tam; i++)
            {
                if (buscar == letrasUsuario[i])
                {
                    printf("El valor est� en la posicion %d del vector.\n", i);
                    break; // Salir del bucle for cuando se encuentra la vocal
                }
                if (i == tam - 1) // Si es la �ltima iteraci�n y no se encontr�
                {
                    printf("El valor no se encontro.\n");
                }
            }
            break;

        case 3:

            printf("\n");
            break;

        case 4:

            printf("\n");
            break;

        default:
            printf("Opci�n inv�lida.\n");
            break;
        }
    }
    while (opc != 0);

    return 0;
}
