#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que permita ingresar caracteres al usuario de a uno por vez. Cuando
el usuario ingrese el car�cter �0� (cero) el ingreso de datos se detenga y que que programa
muestre por pantalla el car�cter con el valor ASCII menor.*/

int main()
{

    char caracter;
    char menorCaracter = 127; //  valor ASCII mas alto posible

    do
    {
        printf("Ingrese caracter\n");
        scanf(" %c", &caracter);

        if (caracter != '0' && caracter < menorCaracter)
        {
            menorCaracter = caracter;
        }
    }
    while (caracter != '0');

    if (menorCaracter != 127)
    {
        printf("El caracter con el valor ASCII menor es: %c\n", menorCaracter);
    }
    else
    {
        printf("Valor invalido \n");
    }

    return 0;
}
