#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura;

    printf("Ingrese la medida de la base del tri%cngulo: ",160);
    scanf("%f", &base);

    printf("Ingrese la medida de la altura del tri%cngulo: ",160);
    scanf("%f", &altura);

    float area = 0.5 * base * altura;

    printf("El %crea del tri%cngulo es: %.2f\n",160,160,area);

    return 0;
}
