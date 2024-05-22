#include <stdio.h>


int main()
{
    int nota;
    // Cuando la variable aprobado valga cero significar� que desaprob�. Si vale 1 est� aprobado.
    int aprobado = 0;
    printf ("Por favor ingrese la nota de su examen: ");
    scanf("%d", &nota);
    printf("%s\n", nota >=4 ? "Felicitaciones, estas aprobado." : "Estas desaprobado, aun tenes la posibilidad de recuperar.");
    return 0;
}

/*
// Alternativa que hace lo mismo pero con m�s l�neas de c�digo
int main()
{
    int nota;
    // Cuando la variable aprobado valga cero significar� que desaprob�. Si vale 1 est� aprobado.
    int aprobado = 0;
    printf ("Por favor ingrese la nota de su examen: ");
    scanf("%d", &nota);
    // En 1 sola l�nea de c�digo evaluo la condici�n y asigno el resultado a la variable aprobado segun corresponda
    aprobado = nota>=4 ?  1 : 0;

    //La siguiente secci�n hace exactamente lo mismo que la l�nea anterior
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
