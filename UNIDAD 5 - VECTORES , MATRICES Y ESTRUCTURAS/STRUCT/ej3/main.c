#include <stdio.h>
#include <stdlib.h>

/*Un alumno crea una estructura para almacenar sus notas de parcial y su promedio denominadanotas_de_fundamentos_de_computadores_digitales que posee los campos: nota1, nota2 de tipo
float, tp1_aprobado y tp2_aprobado de tipo char. Los cuatros campos de la estructura se cargarán por teclado. Si aprueba el trabajo práctico se cargará con la letra S (de SI) y si no lo aprobó con la letra N (de NO).
El procesamiento de datos debe dar el siguiente resultados
● Promociona
si el promedio de nota1 y nota2 es mayor o igual a 7 y los dos TP
aprobados.
● Regulariza
si el promedio de las notas es mayor o igual a 4 y menor a 7 y tiene
al menos un TP aprobado.
● Recursa
si el promedio de los parciales es menor a 4.
*/

int main()
{
    struct notas_de_fundamentos_de_computadores_digitales
    {
        float nota1;
        float nota2;
        char tp1_aprobado;
        char tp2_aprobado;
    } alumno;

    printf("Ingrese nota 1: \n");
    scanf("%f", &alumno.nota1);
    printf("Ingrese nota 2: \n");
    scanf("%f", &alumno.nota2);
    printf("Aprobo TP1? (S o N): \n");
    scanf(" %c", &alumno.tp1_aprobado);
    printf("Aprobo TP2? (S o N): \n");
    scanf(" %c", &alumno.tp2_aprobado);

    float promedioParciales = (alumno.nota1 + alumno.nota2) / 2;

    if (promedioParciales >= 7 && alumno.tp1_aprobado == 'S' && alumno.tp2_aprobado == 'S')
    {
        printf("PROMOCIONA\n");
    }
    else if (promedioParciales >= 4 && promedioParciales < 7 && (alumno.tp1_aprobado == 'S' || alumno.tp2_aprobado == 'S'))
    {
        printf("REGULARIZA\n");
    }
    else if (promedioParciales < 4)
    {
        printf("RECURSA\n");
    }
    else
    {
        printf("RECURSA\n");
    }

    return 0;
}
