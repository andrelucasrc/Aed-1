#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nota1,nota2,soma=0;

    printf("\n\tDigite a nota da primeira prova: ");
    scanf("%i",&nota1);
    printf("\n\tDigite a nota da segundo prova: ");
    scanf("%i",&nota2);

    soma=nota1+nota2;

    if(soma==60)
        printf("\n\tVoce foi aprovado");
    else if(soma<60&&soma>40)
        printf("\n\tVoce esta na reavaliacao");
    else
        printf("\n\tVoce foi reprovado");

    exit(0);
}
