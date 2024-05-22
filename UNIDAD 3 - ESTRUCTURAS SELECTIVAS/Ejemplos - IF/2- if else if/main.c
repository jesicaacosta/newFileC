#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Introduce tu edad: ");
    scanf("%d",&edad);
    if (edad<0)
        printf("Lo siento, te has equivocado.");
    else if (edad<3) printf("Eres un bebe");
    else if (edad<13) printf("Eres un niño");
    else if (edad<18) printf("Eres un adolescente");
    else printf("Eres adulto");
    return 0;
}
