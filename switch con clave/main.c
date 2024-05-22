#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int clave=0, cont=0;
    bool claveIncorrecta=true;

    do{
        printf("Ingrese la contrasena (Cantidad maxima de intentos: 3)\n");
        scanf("%d", &clave);
        cont++;
        if(clave==6919){
            printf("\nBienvenido al sistema\n");
            claveIncorrecta=false;
        }
        else if(cont<=2){
            printf("\nIntente nuevamente\n");

            printf("\nLe quedan %d intentos\n", 3-cont);
        }
    }
    while(cont<3 && claveIncorrecta==true );

    if(claveIncorrecta==true){
        printf("Usted ha sido bloqueado\n");
    }
    return 0;
}
