#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    struct funcion_cuadratica
    {
        float coef_a;
        float coef_b;
        float coef_c;
        float raiz_1;
        float raiz_2;
    } funcionUno;

    printf("Ingrese coeficiente a: ");
    scanf("%f", &funcionUno.coef_a);
    printf("Ingrese coeficiente b: ");
    scanf("%f", &funcionUno.coef_b);
    printf("Ingrese coeficiente c: ");
    scanf("%f", &funcionUno.coef_c);

    printf("\n");

    float discriminante = (funcionUno.coef_b * funcionUno.coef_b) - 4 * (funcionUno.coef_a * funcionUno.coef_c);

    if (discriminante >= 0) {
        funcionUno.raiz_1 = (-funcionUno.coef_b + sqrt(discriminante)) / (2 * funcionUno.coef_a);
        funcionUno.raiz_2 = (-funcionUno.coef_b - sqrt(discriminante)) / (2 * funcionUno.coef_a);

        printf("Las X1 vale: %.2f y la X2 %.2f\n", funcionUno.raiz_1, funcionUno.raiz_2);
    } else {
        printf("La ecuacion no tiene raies reales \n");
    }

    return 0;
}

