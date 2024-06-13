#include <stdio.h>
#include <stdlib.h>

struct numeros_complejos {
    float parte_real;
    float parte_imaginaria;
};

int main() {
    struct numeros_complejos z1, z2, resultado;
    int opcion;

    printf("Ingrese primer numero complejo (Z1)\n");
    printf("Parte real de Z1: ");
    scanf("%f", &z1.parte_real);
    printf("Parte imaginaria de Z1: ");
    scanf("%f", &z1.parte_imaginaria);

    printf("Ingrese segundo numero complejo (Z2)\n");
    printf("Parte real de Z2: ");
    scanf("%f", &z2.parte_real);
    printf("Parte imaginaria de Z2: ");
    scanf("%f", &z2.parte_imaginaria);

    printf("Seleccione una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            resultado.parte_real = z1.parte_real + z2.parte_real;
            resultado.parte_imaginaria = z1.parte_imaginaria + z2.parte_imaginaria;
            printf("Resultado de la suma: %.0f + %.0fi\n", resultado.parte_real, resultado.parte_imaginaria);
            break;

        case 2:
            resultado.parte_real = z1.parte_real - z2.parte_real;
            resultado.parte_imaginaria = z1.parte_imaginaria - z2.parte_imaginaria;
            printf("Resultado de la resta: %.2f + %.2fi\n", resultado.parte_real, resultado.parte_imaginaria);
            break;

        case 3:
            resultado.parte_real = z1.parte_real * z2.parte_real - z1.parte_imaginaria * z2.parte_imaginaria;
            resultado.parte_imaginaria = z1.parte_real * z2.parte_imaginaria + z1.parte_imaginaria * z2.parte_real;
            printf("Resultado de la multiplicacion: %.2f + %.2fi\n", resultado.parte_real, resultado.parte_imaginaria);
            break;

        case 4:
            if (z2.parte_real == 0 && z2.parte_imaginaria == 0) {
                printf("Error no se puede dividir por cero.\n");
            } else {
                float denominador = z2.parte_real * z2.parte_real + z2.parte_imaginaria * z2.parte_imaginaria;
                resultado.parte_real = (z1.parte_real * z2.parte_real + z1.parte_imaginaria * z2.parte_imaginaria) / denominador;
                resultado.parte_imaginaria = (z1.parte_imaginaria * z2.parte_real - z1.parte_real * z2.parte_imaginaria) / denominador;
                printf("Resultado de la division: %.2f + %.2fi\n", resultado.parte_real, resultado.parte_imaginaria);
            }
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}
