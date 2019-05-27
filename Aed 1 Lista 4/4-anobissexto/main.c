#include <stdlib.h>
#include <stdio.h>

int main()
{
    int ano,
        condicao1,
        condicao2;

    printf("\n\tDigite o ano desejado: ");
    scanf("%i",&ano);

    condicao1 = (ano%4);
    condicao2 = (ano%100);

    if((condicao1==0)&&(condicao2!=0))
        printf("\n\tO ano de %i eh um ano bissexto",ano);
    else
        printf("\n\tO ano de %i nao eh um ano bissexto",ano);

    exit(0);
}
