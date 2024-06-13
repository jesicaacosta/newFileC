#include <stdio.h>
#include <stdlib.h>

struct persona //por fuera del main
{
    int edad;
    float altura;
} persona1, persona2;

void intercambiar_persona(struct persona * perA, struct persona * perB); //void por no devolver nada

int main()
{

    persona1.edad = 30;
    persona1.altura = 1.80;
    persona2.edad = 25;
    persona2.altura = 1.70;

    printf ("Persona 1 edad es : %d y altura %.2f \n",persona1.edad , persona1.altura );
    printf ("Persona 2 edad es : %d y altura %.2f \n\n",persona2.edad , persona2.altura );


    intercambiar_persona(&persona1, &persona2);


    printf ("Persona 1 edad ahora es : %d y altura %.2f  \n",persona1.edad , persona1.altura );
    printf ("Persona 2 edad ahora es  : %d y altura %.2f \n",persona2.edad , persona2.altura );

    return 0;
}

void intercambiar_persona  (struct persona * persona1, struct persona * persona2)
{
    struct persona aux; //no le pongo puntero para que sea var temporal de la funcion y no ocupe espacio memoria

    aux= *persona1;
    *persona1  = *persona2 ;
    *persona2 = *persona1;

    }

