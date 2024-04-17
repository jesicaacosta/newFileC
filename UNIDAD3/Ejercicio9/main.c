#include <stdio.h>
#include <stdlib.h>

int main() {

    int nro;

    printf("Ingrese un numero: ");
    scanf("%d", &nro);

    switch (nro) {
        case 2:
        case 4:
        case 6:
            printf("Par\n");
            break;
        case 1:
        case 3:
        case 5:
            printf("Impar\n");
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}
