#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum MenuOpciones {minima=1, intermedia, maxima, apagar, salir};

    enum MenuOpciones Menu;
    char SentidoGiro = 'A';
    int velocidad = 0;
    int Timer = 0;
    int Salir = 0;

    while (Salir == 0) //true
    {
        printf("Introduzca la opcion deseada.\n");
        printf("1- Velocidad minima.\n");
        printf("2- Velocidad intermedia.\n");
        printf("3- Velocidad maxima.\n");
        printf("4- Apagar.\n");
        printf("5- Salir.\n");

        scanf("%d",&Menu);

        switch(Menu){
          case minima:
              printf("Introduzca el tiempo de encendido en Horas:\n");
              scanf("%d",&Timer);

              printf("Introduzca el sentido de giro (H/A):\n");
              scanf(" %c",&SentidoGiro);
              velocidad = 1;
              printf("Motor encendido con velocidad %d y sentido de giro %c durante %d minutos\n", velocidad, SentidoGiro, Timer*60);
              break;
          case intermedia:
              printf("Introduzca el tiempo de encendido en Horas:\n");
              scanf("%d",&Timer);

              printf("Introduzca el sentido de giro (H/A):\n");
              scanf(" %c",&SentidoGiro);
              velocidad = 2;
              printf("Motor encendido con velocidad %d y sentido de giro %c durante %d minutos\n", velocidad, SentidoGiro, Timer*60);
              break;
          case maxima:
              printf("Introduzca el tiempo de encendido en Horas:\n");
              scanf("%d",&Timer);

              printf("Introduzca el sentido de giro (H/A):\n");
              scanf(" %c",&SentidoGiro);
              velocidad = 3;
              printf("Motor encendido con velocidad %d y sentido de giro %c durante %d minutos\n", velocidad, SentidoGiro, Timer*60);
              break;

          case apagar:
              velocidad = 0;
              printf("Motor apagado\n");
              break;

          case salir:
              Salir = 1; //cambio el valor para salir del bucle while
              if (velocidad == 3 && Timer >= 3)
                printf("El motor ha estado funcionando al menos 3 horas a velocidad maxima\n");
            else
                printf("El motor no ha estado funcionando en condiciones exigentes\n");
              printf("Saliendo....\n");
              break;

          default:
            printf("Error, opcion invalida\n");
        }
    }
    return 0;
}
























