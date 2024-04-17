#include <stdio.h>
#include <stdlib.h>

/*La ley de existencia de los triángulos plantea que es requisito que la suma de los largos de
dos de sus lados sea mayor al largo del lado restante.
Escribir un programa que pida el ingreso de 3 valores, y que verifique si pertenecen a un
triángulo.
*/

int main()
{
    int valor1, valor2, valor3;

    printf("Ingrese el primer valor: \n");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: \n");
    scanf("%d", &valor2);

    printf("Ingrese el tercer valor: \n");
    scanf("%d", &valor3);


    if (valor1 + valor2 > valor3 && valor1 + valor3 > valor2 && valor2 + valor3 > valor1) {
        printf ("Es un triangulo");
    } else {
    printf ("No es un triangulo");
    }

    return 0;
}
