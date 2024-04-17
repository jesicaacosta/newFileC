#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("title CALCULADORA");

    int nro1 =0;
    int nro2 =0;
    int elecccion =0;
    int resultado = 0;

    do
    {
        printf ("1. Suma \n2: Resta \n3:Multiplicacion \n4:division \n0: para salir  \n\n");
        scanf (" %d", &elecccion);

        switch (elecccion)
        {
        case 1:
            printf("Ingrese el primer numero: \n");
            scanf ("%d", &nro1);
            printf("Ingrese el segundo numero: \n");
            scanf ("%d", &nro2);
            resultado = nro1 + nro2;
            printf ("El resutado SUMA es: %d\n\n", resultado);

            break;
        case 2:
            printf("Ingrese el primer numero: \n");
            scanf ("%d", &nro1);
            printf("Ingrese el segundo numero: \n");
            scanf ("%d", &nro2);
            resultado = nro1 - nro2;
            printf ("El resutado RESTA es: %d\n\n", resultado);
            break;
        case 3:
            printf("Ingrese el primer numero: \n");
            scanf ("%d", &nro1);
            printf("Ingrese el segundo numero: \n");
            scanf ("%d", &nro2);
            resultado = nro1 * nro2;
            printf ("El resutado MULTIP es: %d\n\n", resultado);
            break;
        case 4:
            printf("Ingrese el primer numero: \n");
            scanf ("%d", &nro1);
            printf("Ingrese el segundo numero: \n");
            scanf ("%d", &nro2);
            resultado = nro1 / nro2;
            printf ("El resutado DIVS es: %f \n\n", resultado);
            break;
        case 5 :
            printf ("Opcion invalida, vuelva  a intentar ");
            break;
        }

    }
    while (elecccion != 0);
    return 0;
}
