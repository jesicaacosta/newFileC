// Implementacion de las funciones, que es lo que hacen las funciones va en funciones.c

    void intercambio ( int  * i , int * j)    //con & voy a la direcc de mem
    {
        int aux ;

        aux = *i; //con * puedo escribir o leer el valor de la direccion de memoria
        *i = *j;
        *j = aux;
    }

