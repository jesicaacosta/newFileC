#include<stdio.h>

/* El programa deber evaluar numero ingresado. */
/* Si el numero ingresado es mayor a 10 notificarlo y restarle 1:  */
/* Caso contrario notificarlo y sumarle 1 */
/* Al final imprimir como queda el numero ingresado. */

int main() {
	int n1;
	printf("Ingrese un numero entero a ser evaluado\n");
	scanf("%d",&n1);
	if (n1>10) {
		printf("El valor es mayor a 10\n");
		n1 = n1-1; /* equiv a n1-- */
	} else {
		printf("El valor es menor o igual a 10\n");
		n1 = n1+1; /* equiv a n1++ */
	}
	printf("El valor ingresado quedo: %i\n",n1);
	return 0;
}
