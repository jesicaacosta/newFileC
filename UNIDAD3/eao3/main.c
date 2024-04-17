#include <stdio.h>

int main() {
    int valor;

    scanf("%d", &valor);

    if (valor >= 10 && valor <= 30) {
        printf("El valor esta entre 10 y 30");
    } else {
        printf("El valor esta fuera del rango");
    }

    return 0;
}
