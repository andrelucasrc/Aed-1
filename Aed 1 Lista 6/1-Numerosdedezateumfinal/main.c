#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tPrograma feito com o objetivo de mostrar os numeros de 10 ate 1");
    int c = 10;
    do
    {
        printf("\n\t%d",c);
        c-=1;
    }while(c>=1);

    printf("\n\n\tFim\n");

    exit(0);
}
