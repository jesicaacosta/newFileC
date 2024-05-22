#include <stdio.h>

int main()
{
    /* Uso de la sentencia condicional SWITCH. */
    /* Escribe el día de la semana */

    int dia;
    printf("Introduce el numero de dia de la semana: ");
    scanf("%d",&dia);
    switch(dia){
      case 1:
          printf("Lunes");
          break;
      case 2:
          printf("Martes");
          break;
      case 3:
          printf("Miercoles");
          break;
      case 4:
          printf("Jueves");
          break;
      case 5:
          printf("Viernes");
          break;
      case 6:
          printf("Sabado");
          break;
      case 7:
          printf("Domingo");
          break;
      default:
        printf("Error, numero invalido");
    }
    return 0;
}
