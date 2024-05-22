#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1, nro2, nro3;

    printf("Ingrese un numero \n");
    scanf ("%d", &nro1);

    printf("Ingrese otro numero ");
    scanf ("%d", &nro2);

    printf("Ingrese otro numero \n");
    scanf ("%d", &nro3);

    if ( (nro1 < nro2 && nro1 < nro3) && ( nro2 < nro3 ) )
    {
        printf("Numeros ordenados de menor a mayor: %d, %d, %d\n", nro1, nro2, nro3);
    }
    else if ( (nro1 < nro2 && nro1 < nro3) && ( nro3 < nro2) )
    {
        printf("Numeros ordenados de menor a mayor: %d, %d, %d\n", nro1, nro3, nro2);
    }
    else if ( (nro2 < nro1 && nro2 < nro3) && ( nro1 < nro2 ) )
    {
        printf("Numeros ordenados de menor a mayor: %d, %d, %d\n", nro2, nro1, nro3);
    }
    else if ( (nro2 < nro1 && nro2 < nro3) && ( nro3 < nro1) )
    {
        printf("Numeros ordenados de menor a mayor: %d, %d, %d\n", nro2, nro3, nro1);
    }
    else if ( (nro3 < nro1 && nro3 < nro2) && ( nro1 < nro2) )
    {
        printf("Numeros ordenados de menor a mayor: %d, %d, %d\n", nro3, nro1, nro2);
    }
    else
    {
        printf("Numeros ordenados de menor a mayor: %d, %d, %d\n", nro3, nro2, nro1);
    }

    return 0;

}
