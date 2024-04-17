#include <stdio.h>
#include <stdlib.h>


int main()
{

    float catA = 7.500;
    float catB = 9.500;
    float catC = 11.500;
    float categoria ;
    char cat;
    int antiguedad;

    printf("Ingrese su categoria: \n");
    scanf ("%c", &cat);

     if (cat == "A" || cat == "a") {
        categoria = catA;
     } else if (cat == "B" || cat == "b") {
     categoria = catB;
     } else {
     categoria = catC;
     }

    printf("Ingrese su antiguedad laboral: \n");
    scanf ("%i", &antiguedad);

    if (antiguedad < 5) {
        categoria *= 1.5;
    } else if (antiguedad >= 5 && antiguedad < 10) {
        categoria *= 1.12;
    } else {
    categoria *= 1.20;
    }

    printf("Su sueldo definitivo es: $%.3f", categoria);
    return 0;
}
