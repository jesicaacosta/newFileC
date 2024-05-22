#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    bool numeroInvalido = true;
    int contador = 1;

    while (numeroInvalido) //otra forma de hacer el bucle infinito, como 1
    {
        printf("Ingrese un numero entre 1 y 10 (0 para salir): ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 10)
        {
            printf("Numero Valido\n");
            numeroInvalido = false;
        }
        else
        {
            printf("Error: El numero debe estar entre 1 y 10.\n");
            numeroInvalido = true;
        }
    }

    if (numero == 0) {
        printf("Programa finalizado.\n");
    }
    else
        if (numero >= 1 && numero <= 5)
        {
            printf("Usando ciclo do while para contar desde 1 hasta %d:\n", numero);
            do
            {
                printf("%d ", contador);
                contador++;
            }
            while (contador <= numero);
            printf("\n");
        }
        else
            if (numero >= 6 && numero <= 10)
            {
                printf("Usando ciclo for para contar desde 6 hasta %d:\n", numero);
                for (int i = 6; i <= numero; i++)
                {
                    printf("%d ", i);
                }
                printf("\n");
            }

    return 0;
}
