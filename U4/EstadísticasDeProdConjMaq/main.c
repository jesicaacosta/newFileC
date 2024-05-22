#include <stdio.h>
#include <stdlib.h>

#define MAX_MAQUINAS 4
#define MAQUINA_INICIAL 'A'

int main() {
  int cantidad_maquinas = 0;
  int produccion_total = 0;
  char maquina_mayor_produccion;
  int produccion_mayor = 0;
  char maquina_menor_produccion;
  int produccion_menor = 0;
  int produccion_actual;

  do {
    printf("Ingrese la producción de la maquina %c: ", MAQUINA_INICIAL + cantidad_maquinas);
    scanf("%d", &produccion_actual);

    if (produccion_actual < 1) {
      break;
    }

    if (produccion_actual > produccion_mayor) {
      produccion_mayor = produccion_actual;
      maquina_mayor_produccion = MAQUINA_INICIAL + cantidad_maquinas;
    }

    if (produccion_actual < produccion_menor || cantidad_maquinas == 0) {
      produccion_menor = produccion_actual;
      maquina_menor_produccion = MAQUINA_INICIAL + cantidad_maquinas;
    }

    produccion_total += produccion_actual;
    cantidad_maquinas++;
  } while (cantidad_maquinas < MAX_MAQUINAS); //El bucle se ejecuta hasta que se ingresan MAX_MAQUINAS máquinas o se ingresa una producción negativa.

  if (cantidad_maquinas == 0) {
    printf("No me han ingresado maquinas.\n");
    return 0;
  }

  printf("\nLa maquina de mayor produccion es la %c cuyo valor fue de: %d",
         maquina_mayor_produccion, produccion_mayor);

  printf("\nLa maquina de menor produccion es la %c cuyo valor fue de: %d",
         maquina_menor_produccion, produccion_menor);

  printf("\nEl promedio de la produccion fue de: %.2f",
         ((float) produccion_total / cantidad_maquinas));

  printf("\nLa produccion total fue de: %d", produccion_total);

  return 0;
}
