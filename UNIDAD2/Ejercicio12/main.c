#include <stdio.h>
#include <stdlib.h>

int main() {

    float importeInicial;
    int desc;

    printf("Ingrese el importe inicial en pesos: ");
    scanf("%f", &importeInicial);
    printf("Ingrese el porcentaje de descuento: ");
    scanf("%d", &desc);

    float importeFinal = importeInicial - (importeInicial * desc / 100.0);

    printf("El importe final con descuento es: %.2f\n", importeFinal);

    return 0;
}
