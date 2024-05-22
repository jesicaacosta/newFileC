#include<stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero entero\n");
    scanf("%d",&numero);
    if (numero>0)
    {
        printf("El numero ingresado es positivo\n");
    }
    else
    {
        printf("El valor ingresado es menor o igual a cero\n");
    }
    return 0;
}
