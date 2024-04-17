#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro;

    printf("Ingresa un numero entero: \n");
    scanf ("%d", &nro);

    if (nro > 0 ) {
        printf ("El numero es positivo.");
        } else if (nro == 0 ) {
            printf ("El numero es 0.");
        } else {
        printf ("El numero es negativo.");
        }
    return 0;
}
