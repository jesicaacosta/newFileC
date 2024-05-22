#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main()
{
    int vec[TAM]={0};
    int i=0;

    for (i=0;i<TAM;i++)
    {
        vec[i]= (i*2)+2;
    }
    for (i=0;i<TAM;i++)
    {
        printf("%d\n",vec[i] );
    }
    return 0;
}
