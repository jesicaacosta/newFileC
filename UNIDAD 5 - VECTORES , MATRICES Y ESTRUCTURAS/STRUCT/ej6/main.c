#include <stdio.h>
#include <stdlib.h>
/*6. Se crea una estructura empleado_textil, que posee como campos la categoría de tipo char y el
sueldo de tipo float. La pyme posee solo 5 empleados que se deberán cargar en un vector de
estructura por teclado.
El programa dará la siguiente salida:
● Cantidad de empleados con categoría A
● La suma total de sueldos a pagar en la categoría B
● El promedio salarial de la empresa
● El mayor sueldo y a quien corresponde.
● El menor sueldo y a quien corresponde.
*/
#define cant 5

int main()
{
    struct empleado_textil {
    char categoria;
    float sueldo;
    } empleado[cant];

    for (int i = 0 ; i < cant; i++ ) {
        printf ("Categoria empleado %d", i);
        printf ("Ingrese categoria: ");
        scanf (" %c" , empleado[cant].categoria);
        printf ("Ingrese categoria: ");
        scanf (" %c" , empleado[cant].categoria);
    }


    printf("Hello world!\n");
    return 0;
}
