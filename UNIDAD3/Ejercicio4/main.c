#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que pida el ingreso de tres números y que indique el menor y mayor
de ellos. (Asuma que los números son distintos).
*/
int main() {

    float num1, num2, num3;

    printf("Ingrese el primer numero:");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero:");
    scanf("%f", &num2);
    printf("Ingrese el tercer numero:");
    scanf("%f", &num3);


//mayor

    if (num1 > num2 && num1 > num3 ) {
        printf ("El primer numero ingresado es el mayor.\n");
    } else if (num2 > num1 && num2 > num3 ) {
        printf ("El segundo numero ingresado es el mayor.\n");
    } else {
    printf ("El tercer numero ingresado es el mayor.\n");
    }

//menor
    if (num1 < num2 && num1 < num3 ) {
        printf ("El primer numero ingresado es el menor.\n");
    } else if (num2 < num1 && num2 < num3 ) {
        printf ("El segundo numero ingresado es el menor.\n");
    } else {
    printf ("El tercer numero ingresado es el menor.\n");
    }

    return 0;
}
