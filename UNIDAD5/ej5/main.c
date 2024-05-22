#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main()
{
    int vec[TAM] ;
    int pos = 0;

    for(pos=0; pos<TAM; pos++)
    {
            vec[pos] = (pos*2+1);

    }

    for(pos=0; pos<TAM; pos++)
    {
        printf("%d ", vec[pos]);
    }

    printf("\n");

    return 0;
}
