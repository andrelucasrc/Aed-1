#include <stdlib.h>
#include <stdio.h>

int main()
{
    int numero,
        resto;

    printf("\n\tDigite o numero: ");
    scanf("%i",&numero);

    resto = numero%2;

    if(resto==0)
        printf("\n\tO numero %i eh par",numero);
    else
        printf("\n\tO numero %i eh impar",numero);

    exit(0);
}
