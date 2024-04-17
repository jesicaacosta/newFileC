#include <stdio.h>

int main() {
    float temperatura;

    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > 0) {
        printf("La temperatura es positiva\n");
    } else {
        printf("La temperatura es negativa\n");
    }

    return 0;
}
