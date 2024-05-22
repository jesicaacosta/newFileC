#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum menuOpciones {Suma=1, Resta, Division, Multiplicacion,
      Salir};

    int menu;
    int A;
    int B;
    float resultado = 0;
    int Exit = 0;

    while (Exit == 0)
    {
        printf("Introduzca la opcion deseada.\n");
        printf("1- Suma.\n");
        printf("2- Resta.\n");
        printf("3- Division.\n");
        printf("4- Multiplicacion.\n");
        printf("5- Salir.\n");

        scanf("%d",&menu);

        switch(menu){
          case Suma:
              printf("Introduzca los valores a sumar:\n");
              scanf("%d",&A);
              scanf("%d",&B);
              resultado = A + B;
              printf("La suma de %d y %d es igual a: %f\n", A, B, resultado);
              break;
          case Resta:
              printf("Introduzca los valores a restar:\n");
              scanf("%d",&A);
              scanf("%d",&B);
              resultado = A - B;
              printf("La resta de %d y %d es igual a: %f\n", A, B, resultado);
              break;
          case Division:
              printf("Introduzca los valores a dividir:\n");
              scanf("%d",&A);
              scanf("%d",&B);
              resultado = A / B;
              printf("La division de %d y %d es igual a: %f\n", A, B, resultado);
              break;

          case Multiplicacion:
              printf("Introduzca los valores a multiplicar:\n");
              scanf("%d",&A);
              scanf("%d",&B);
              resultado = A * B;
              printf("La multiplicacion de %d y %d es igual a: %f\n", A, B, resultado);
              break;
          case Salir:
                Exit = 1;
              break;
          default:
            printf("Error, opcion invalida\n");
        }
    }
    return 0;
}

