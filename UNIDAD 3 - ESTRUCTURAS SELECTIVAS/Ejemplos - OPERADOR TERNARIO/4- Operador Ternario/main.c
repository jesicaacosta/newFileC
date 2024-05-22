#include <stdio.h>


int main()
{
    int nota;
    // Cuando la variable aprobado valga cero significará que desaprobó. Si vale 1 está aprobado.
    int aprobado = 0;
    printf ("Por favor ingrese la nota de su examen: ");
    scanf("%d", &nota);
    printf("%s\n", nota >=4 ? "Felicitaciones, estas aprobado." : "Estas desaprobado, aun tenes la posibilidad de recuperar.");
    return 0;
}

/*
// Alternativa que hace lo mismo pero con más líneas de código
int main()
{
    int nota;
    // Cuando la variable aprobado valga cero significará que desaprobó. Si vale 1 está aprobado.
    int aprobado = 0;
    printf ("Por favor ingrese la nota de su examen: ");
    scanf("%d", &nota);
    // En 1 sola línea de código evaluo la condición y asigno el resultado a la variable aprobado segun corresponda
    aprobado = nota>=4 ?  1 : 0;

    //La siguiente sección hace exactamente lo mismo que la línea anterior
    //if (nota >= 4)
    //    aprobado = 1;
    //else
    //    aprobado = 0;

    if (aprobado == 1)
        printf("Felicitaciones, estas aprobado.");
    else
        printf("Estas desaprobado, aun tenes la posibilidad de recuperar.");

    return 0;
}
*/
