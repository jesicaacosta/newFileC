#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerDigito, segundoDigito, tercerDigito, numero;


    printf("Ingresa un numero de tres cifras para separar: \n");
    scanf("%i",&numero);

    primerDigito = numero / 100;
    segundoDigito = (numero % 100) / 10;
    tercerDigito = numero % 10;

    printf("Primer cifra: %d\n",primerDigito);
    printf("Segunda cifra: %d\n",segundoDigito);
    printf("Tercer cifra: %d\n",tercerDigito);


    return 0;
}
