#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359

int main()
{

    int param;
    float radioCircunferencia, resultado, alturaCilindro, radioCilindro;

    do
    {

        printf ("Que parametro desea calcular ? \n\n 1: Circunferencia \n 2: Area de un circulo \n 3: Volumen de un cilindro \n 0: SALIR  \n\n");
        scanf("%d", &param);

        switch(param)
        {
        case 1 :
            printf ("Ingrese el radio de la circunferencia: ");
            scanf ("%f",&radioCircunferencia);
            resultado = 2 * PI * radioCircunferencia ;
            printf ("La longitud de la circunferencia es: %.2f \n\n", resultado);
            break;

        case 2 :
            printf ("Ingrese el radio de la circunferencia: ");
            scanf ("%f",&radioCircunferencia);
            resultado = PI * (radioCircunferencia *radioCircunferencia) ;
            printf ("El area de la circunferencia es: %.2f \n\n", resultado);
            break;

        case 3 :
            printf ("Ingrese el radio del cilindro: ");
            scanf ("%f",&radioCilindro);
            printf ("Ingrese la altura de cilindro: ");
            scanf ("%f",&alturaCilindro);
            resultado = ( PI * (radioCilindro * radioCilindro) * alturaCilindro ) ;
            printf ("El volumen del cilindro es: %.2f \n\n", resultado);
            break;

        default:
            if ( param !=0)
                printf ("Opcion invalida, reintente o 0 para salir \n\n");
        }
    }
    while (param!=0);

    system("pause");
    return 0;
}
