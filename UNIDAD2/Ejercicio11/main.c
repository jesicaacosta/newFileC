#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tiempo, km, velocidad;

    printf("Calculo de la velocidad media de un proyectil");

    printf ("Ingrese la distancia recorrida or el proyectil, en metros:");
    scanf ("%f",&km);

    printf ("Tiempo en segundos que tardo en recorrerlos: ");
    scanf ("%f",&tiempo);

    velocidad = km/tiempo;

    printf ("La velocidad media del proyectil fue: %.2f m/s.",velocidad);
    return 0;
}
