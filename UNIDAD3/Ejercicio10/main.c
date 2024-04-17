#include <stdio.h>
#include <stdlib.h>

int main() {

    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    switch (caracter) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Es una vocal.\n");
            break;
        default:
            printf("Es una consonante.\n");
            break;
    }

    return 0;
}
