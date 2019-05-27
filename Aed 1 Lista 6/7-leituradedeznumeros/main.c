#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tPrograma feito com o objetivo de analisar o maior e o menor numero entre 10 numeros digitados");

    int num,maior,menor;

    printf("\n\tDigite o numero: ");
    scanf("%d%*c",&num);

    maior=num;
    menor=num;

    for(int c=0; c<9; c++){
        printf("\n\tDigite o numero: ");
        scanf("%d%*c",&num);

        if(num>maior)
            maior=num;
        else if(num<menor)
            menor=num;
    }

        printf("\n\tO maior numero eh %d e o menor eh %d",maior,menor);
        printf("\n\n\tFim\n");

        exit(0);
}
