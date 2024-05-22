#include<stdio.h>

/* El programa deber mostrar el valor ingresado y realizar:  */
/* Si es valor ingresado es 1, multiplicarse por 2 */
/* Si el valor ingresado es 2, multiplicarse por 10 */
/* Si el valor ingresado es 3, imprimir que no se hace nada */
/* Caso contrario divirse por 2 */
/* Mostrar el resultado de la operacion */
int main()
{
    int n1;
    int total;
    total = 10;
    printf("Ingrese un numero entero a ser evaluado\n");
    scanf("%i",&n1);
    if (n1==1)
    {
        printf("el valor es 1\n");
        total = n1*2;
    }
    else if (n1==2)
    {
        printf(" elvalor es 2\n");
        total = n1*10;
    }
    else if (n1==3)
    {
        printf("el valor es 3\n");
        printf("no se hace nada\n");
    }
    else
    {
        printf("el valor ingresado es %i\n",n1);
        total = n1/2;
    }
    printf("El total es: %i\n",total);
    return 0;
}
