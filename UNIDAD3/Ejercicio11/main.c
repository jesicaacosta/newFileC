#include <stdio.h>
#include <stdlib.h>

int main() {
    char caracter;

    printf("Ingrese un caracter: \n");
    scanf("%c", &caracter);

    if ((caracter >= 32 && caracter <= 47) || (caracter >= 58 && caracter <= 64) || (caracter >= 91 && caracter <= 96) || (caracter >= 123 && caracter <= 126)) {
        printf("Ingreso simbolo.\n");
    } else if ((caracter >= '0' && caracter <= '9')) {
        printf("Ingreso un numero.\n");
    } else if ((caracter >= 'A' && caracter <= 'Z')) {
        printf("Ingreso una letra mayuscula .\n");
    } else if ((caracter >= 'a' && caracter <= 'z')) {
        printf("Ingreso una letra minuscula.\n");
    } else {
        printf("Caracter invalido.\n");
    }


    return 0;
}
