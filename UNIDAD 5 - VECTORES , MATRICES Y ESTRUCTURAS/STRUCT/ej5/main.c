#include <stdio.h>

#define CANT_ALUMNOS 5

struct notas_del_aula
{
    int dni;
    float nota_final;
};

int main()
{

    int i = 0;
    struct notas_del_aula alumnos[CANT_ALUMNOS];
    float suma_notas = 0;
    float mejor_nota, menor_nota, nota_promedio;
    int dni_mejor_nota, dni_menor_nota;

    for (int i = 0; i < CANT_ALUMNOS; i++)
    {
        printf("Ingrese el DNI del alumno %d: ", i + 1);
        scanf("%d", &alumnos[i].dni);
        printf("Ingrese la nota final del alumno %d: ", i + 1);
        scanf("%f", &alumnos[i].nota_final);
        suma_notas += alumnos[i].nota_final;

    }
    if (i == 0)
    {
        mejor_nota = alumnos[i].nota_final;
        menor_nota = alumnos[i].nota_final;
        dni_mejor_nota = alumnos[i].dni;
        dni_menor_nota = alumnos[i].dni;
    }

    if (alumnos[i].nota_final > mejor_nota)
    {
        mejor_nota = alumnos[i].nota_final;
        dni_mejor_nota = alumnos[i].dni;
    }

    if (alumnos[i].nota_final < menor_nota)
    {
        menor_nota = alumnos[i].nota_final;
        dni_menor_nota = alumnos[i].dni;
    }
}

float nota_promedio = suma_notas / CANT_ALUMNOS;

printf(" Mejor nota del aula: %.2f (DNI: %d)\n", mejor_nota, dni_mejor_nota);
printf(" Menor nota del aula: %.2f (DNI: %d)\n", menor_nota, dni_menor_nota);
printf(" Nota promedio del aula: %.2f\n", nota_promedio);

return 0;
}
