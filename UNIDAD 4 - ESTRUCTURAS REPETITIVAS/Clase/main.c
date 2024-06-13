#include <stdio.h>
#include <stdlib.h>

// DO WHILE

int main()
{
    /*int i = 0;
    do {
    printf ("Vale : %d\n" , i);
    i= i+ 2;
    printf ("Ahora vale  : %d\n\n" , i);
    }while (i < 10 );*/


//FOR

    /*for (int i = 0 ; i < 10 ; i++ ) {
        printf ("%d \n",i);
    }*/

    /* for ( char i = 'A' ; i < 'Z' ; i++ ) {
         printf ("%c : %d\n",i,i);
         if ( i == 'N') { //entra una sola vez
         printf ("%c : %d\n",165,165);
         }
     } */

    /*for ( char i = 'A' ; i < 'Z' ; i++ )
    {
        int minuscula = 97;
        printf ("%c : %c \n",i, minuscula);
        if ( i == 'N')   //entra una sola vez
        {
            printf ("%c : %c\n",165,164);
        }
        minuscula ++;
    } */


    /* char r = 'a';

     for (char i = 'A'; i < 'Z'; i++) {

         while (r < 'z') {
             printf("%c : %c \n", i, r);
             r++;
         }

         if (i == 'N') { // Enters only once
             printf("%c : %c\n", 165, 164);
         }
     } */



    /* Ingresar una cantidad infinita de numeros, hasta que el
    usuario ingrese 0. posteriormente, calcular
    el promedio de todos los números ingresados.*/


    int numeroIngresado = 0;
    int sumatoriaNumerosIngresados = 0;
    float promedio = 0;
    int suma = 0;


    do
    {
        printf ("Ingrese numero: \n");
        scanf(" %d\n", &numeroIngresado);

        suma += numeroIngresado;

        sumatoriaNumerosIngresados++; //sumo cantidad de numeros ingresados
    }while ( numeroIngresado != 0 );


    promedio = suma / sumatoriaNumerosIngresados;
    printf ("El promedio es: %d" , promedio);

    //system("pause");    // Hace una pausa
    //system("cls");      //borra la pantalla

    return 0;
}














