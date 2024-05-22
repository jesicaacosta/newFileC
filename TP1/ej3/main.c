#include <stdio.h>
#include <stdlib.h>
#include <math.h>


enum Menu {  SUMA, RESTA, POTENCIA,  RAIZ_CUADRADA, DIVISION } ;

int main()
{
    int opcion;
    float nro1, nro2, resultado;


    //printf(" 1: SUMA\n 2: RESTA\n 3: POTENCIA \n 4: RAIZ CUADRADA \n 5: DIVISION\n ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1: //suma
     //   printf ("Ingrese el primer valor ");
        scanf ("%f",&nro1);
      //  printf ("Ingrese el segundo valor ");
        scanf ("%f",&nro2);
        resultado = nro1 + nro2;
        printf ("El resultado de la operacion es: %.2f \n",resultado);
        break;

    case 2: //resta
       // printf ("Ingrese el primer valor ");
        scanf ("%f",&nro1);
     //   printf ("Ingrese el segundo valor ");
        scanf ("%f",&nro2);
        resultado = nro1 - nro2;
        printf ("El resultado de la operacion es: %.2f \n",resultado);
        break;

    case 3: // potencia
   //     printf("Ingrese el primer valor: ");
        scanf("%f", &nro1);
      //  printf("Ingrese el exponente: ");
        scanf("%f", &nro2);
        resultado = 1;  //para poder multiplicarlo
        for (int i = 0; i < nro2; i++)
        {
            resultado *= nro1;
        }
        printf ("El resultado de la operacion es: %.2f \n",resultado);
        break;

    case 4: // raiz
  //      printf("Ingrese el valor: ");
        scanf("%f", &nro1);
        float resultado = sqrt(nro1);
        printf ("El resultado de la operacion es: %.2f \n",resultado);
        break;

        case 5: //division
       // printf ("Ingrese el primer valor ");
        scanf ("%f",&nro1);
        //printf ("Ingrese el segundo valor ");
        scanf ("%f",&nro2);
        if (nro2 !=0) {
                    resultado = nro1 / nro2;
                            printf ("El resultado de la operacion es: %.2f \n",resultado);
        } else {
        printf ("No se puede dividir por cero.");
        }
        break;

    default:
        printf ("No existe la opcion de menu ingresada.");

    }

    return 0;
}
