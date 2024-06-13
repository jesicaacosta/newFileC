#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    Este es un fuente creado para imprimir un menu a medida. Puede utilizarse para las prácticas siguientes.
    Se recomienda su lectura para comprender como funciona. Pero solo es necesario agregar las opciones disponibles
    para el ejercicio correspondiente, entre comillas, y separados por una coma. No importa cuantas opciones son,
    el código se encarga de contarlas, y restringir las respuestas del usuario a un intervalo correcto.

    El programa se encarga de mostrar el menú, y pedirle al usuario una opción. Luego devuelve la respuesta al main
    mediante el return.

    RECORDAR INCLUIR EL HEADER DE DICHA FUENTE EN EL MAIN DEL PROYECTO
*/

char *opciones[] =
{
    "1) Ejercicio 1",
    "2) Ejercicio 2",
    "3) Ejercicio 3",
    "4) Ejercicio 4",
    "5) Ejercicio 5",
    "Salir"
};

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0])) //sizeof(x): Devuelve el tamaño total en bytes del array x. sizeof((x)[0]): Devuelve el tamaño en bytes del primer elemento del array x.


static int max_opc = ARRAY_SIZE(opciones);
/* expande a sizeof(opciones) / sizeof((opciones)[0]) */

#define BUFSIZE 250
int selectopt(void)
{
    int r,i;
    int cuantos;
    bool debo_seguir;
    char buffer[BUFSIZE];

    do
    {
        setbuf(stdin,NULL);  // Limpia el buffer de entrada
        printf ("\nINGRESE UNA OPCION\n\n");
        for (i = 0; i < max_opc; i++)
        {
            printf("%d: %s\n", i+1, opciones[i]);
        }
        printf("-->");

        fgets(buffer, BUFSIZE, stdin);
        cuantos = sscanf(buffer, "%d%*c",&r);
        printf ("\n");
        debo_seguir =  true;
        if (cuantos == 0)
        {
            printf("Debe ingresar una opcion numerica\n");
        }
        else if ((r < 1) || (r > max_opc))
        {
            printf("Las opciones son de 1 a %d solamente\n"
                   , max_opc);
        }
        else
        {
            debo_seguir = false;
        }
    }
    while (debo_seguir);

    return r;
}
