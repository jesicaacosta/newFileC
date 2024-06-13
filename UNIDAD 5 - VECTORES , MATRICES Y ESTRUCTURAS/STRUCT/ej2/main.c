#include <stdio.h>
#include <stdlib.h>

/*Escribe un programa en C que utilice una estructura de datos para representar informaci�n sobre
m�quinas en una f�brica denominada inventario_general. Cada m�quina debe tener los siguientes
campos: Id, Estado y Producci�n.
El programa debe permitir al usuario ingresar informaci�n sobre 3 m�quinas con tres variables distintas denominadas m1,
m2 y m3. Despu�s de ingresar la informaci�n de todas las m�quinas, el programa debe mostrar la lista de m�quinas junto
con su estado actual y abajo la producci�n total obtenida.*/
struct Maquina { //creo la estructura la declaro
    int Id;
    char Estado; //A' para activa, 'M' para mantenimiento, 'D' para desactivada - si el estado es A debe pedir tambi�n el dato de la producci�n.
    int Produccion; // indica la cantidad de productos realizados
};

struct Maquina ingresarInformacion(struct Maquina m) { //creo funcion para llamarla cada que cargo variable del tipo Maquina
    printf("Ingrese el identificador de la maquina: ");
    scanf("%d", &m.Id);
    printf("Ingrese el estado de la maquina (A - activa, M - mantenimiento, D - desactivada): ");
    scanf(" %c", &m.Estado);

    if (m.Estado == 'A') {
        printf("Ingrese la produccion de la maquina: ");
        scanf("%d", &m.Produccion);
    } else {
        m.Produccion = 0;
    }
    return m;
}

void mostrarInformacion(struct Maquina m) {
    printf("Maquina ID: %d\n", m.Id);
    printf("Estado: %c\n", m.Estado);
    printf("Produccion: %d\n", m.Produccion);
    printf("---------------------\n");
}

int main() {
    struct Maquina m1, m2, m3;
    int produccionTotal = 0;

    printf("Ingrese la informacion de la maquina 1:\n");
    m1 = ingresarInformacion(m1); v//m1 llama ala funcion, utilizando m,1
    printf("Ingrese la informacion de la maquina 2:\n");
    m2 = ingresarInformacion(m2);
    printf("Ingrese la informacion de la maquina 3:\n");
    m3 = ingresarInformacion(m3);

    produccionTotal = m1.Produccion + m2.Produccion + m3.Produccion;

    printf("\nInformacion de las maquinas:\n");
    mostrarInformacion(m1);
    mostrarInformacion(m2);
    mostrarInformacion(m3);

    printf("Produccion total: %d\n", produccionTotal);

    return 0;
}
