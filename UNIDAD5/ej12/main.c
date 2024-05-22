#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int vec[tam];
    int menor;
    int posicion = 0;

    scanf("%d", &vec[0]);
    menor = vec[0];

    for (int i = 1; i < tam; i++) {
        scanf("%d", &vec[i]);
        if (vec[i] < menor) {
            menor = vec[i];
            posicion = i;
        }
    }

    printf("Minimo: %d en posicion %d\n", menor, posicion);
    return 0;
}
