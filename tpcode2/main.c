#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sensorDeLluvia, activacionManual,lloviendo ;
    int velocidad;

    //printf ("Habilitar sensor ? S/N (S=SI, N=NO) \n ");
    scanf (" %c", &sensorDeLluvia);
    if (sensorDeLluvia != 'S' && sensorDeLluvia != 's' && sensorDeLluvia != 'N' && sensorDeLluvia != 'n')
    {
        printf("Error. Alguna opcion de configuracion es incorrecta");
        return 0;
    }

       //printf ("Velocidad 1= baja, 2= media, 3= alta  \n ");
    scanf (" %d", &velocidad);
    if (velocidad != 1 && velocidad != 2 && velocidad != 3)
    {
        printf("Error. Alguna opcion de configuracion es incorrecta");
        return 0;
    }


       //printf (" Activar comando manual S/N (S=SI, N=NO)  \n ");
    scanf (" %c", &activacionManual);
    if (activacionManual != 'S' && activacionManual != 's' && activacionManual != 'N' && activacionManual != 'n')
    {
        printf("Error. Alguna opcion de configuracion es incorrecta");
        return 0;
    }


      // printf ("Esta lloviendo S/N (S=SI, N=NO)  \n ");
    scanf (" %c", &lloviendo);
    if (lloviendo != 'S' && lloviendo != 's' && lloviendo != 'N' && lloviendo != 'n')
    {
        printf("Error. Alguna opcion de configuracion es incorrecta");
        return 0;
    }


    if  (   ( ( sensorDeLluvia == 's' || sensorDeLluvia == 'S') && ( lloviendo == 's' || lloviendo == 'S' )  )   ||   (activacionManual == 's'  || activacionManual == 'S')    )
    {
        switch(velocidad)
        {
        case 1 :
            printf ("Se activo el limpiaparabrisas con velocidad 1");
            break;
        case 2:
            printf ("Se activo el limpiaparabrisas con velocidad 2");
            break;
        case 3:
            printf ("Se activo el limpiaparabrisas con velocidad 3");
            break;
        default:
            printf ("Error. Alguna opcion de configuracion es incorrecta");
        }
    }
    else if (  ( sensorDeLluvia == 'n'  || sensorDeLluvia == 'N') || ( lloviendo  == 'n' || lloviendo ==  'N' )   )
    {
        printf ("No se activo el limpiaparabrisas");
    }
    else
    {
        printf("Error. Opción de configuración incorrecta\n");
    }
    return 0;
}

