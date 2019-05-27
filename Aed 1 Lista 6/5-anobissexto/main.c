#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tPrograma feito com a premissa de analisar se o ano eh bissexto ou nao.\n");

    int ano,condicao;
    int cont;


    do{
        printf("\n\tDigite o ano desejado: ");
        scanf("%d%*c",&ano);
        condicao=ano%4;
        if(condicao==0){
            printf("\n\tO ano de %d eh um ano bissexto",ano);
        }
        else{
            printf("\n\tO ano de %d nao eh um ano bissexto",ano);
        }

        printf("\n\n\tDeseja continuar (sim=s,nao=n)? ");

        scanf("%c%*c",&cont);

        while(cont!='s'&&cont!='S'&&cont!='n'&&cont!='N'){

            printf("\n\n\tResposa invalida, tente novamente: ");

            scanf("%c%*c",&cont);
        }

    }while(cont=='s'||cont=='S');

    printf("\n\n\tFim\n");

    exit(0);
}
