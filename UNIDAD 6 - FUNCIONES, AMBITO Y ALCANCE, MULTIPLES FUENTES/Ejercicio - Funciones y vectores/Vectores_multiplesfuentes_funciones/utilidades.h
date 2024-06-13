#ifndef UTILIDADES_H_INCLUDED
#define UTILIDADES_H_INCLUDED

int selectopt(void); //me selecciona una de las opciones
void ingresar_datos(int vector[], int dim);
void listar_datos(int vector[], int dim);
int sumatoria_total(int vector[], int dim);
int sumar_elementos_triples(int vector[], int dim);
int contar_elementos_siguiente_mayor(int vector[], int dim);
void calcula_maximo(int vector[], int dim);
void suma_ponderada(double vec[], int dim);


enum opciones {INGRESAR = 1, LISTAR, SUMATORIA_TOTAL, CALCULA_MAXIMO, SUMA_TRIPLE, CONTAR_SIG_MAXIMO, SUMA_PONDERADA ,SALIR};

#endif // UTILIDADES_H_INCLUDED

