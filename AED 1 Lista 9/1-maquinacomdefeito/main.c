#include<stdlib.h>
#include<stdio.h>

int main()
{
    int producao=0,defeito=0,maior=0;
    const int flag=0;

    do{
        printf("\n\tDigite a quantidade de itens produzidos na maquina,\n\tcaso desejar sair digite 0: ");
        scanf("%d",&producao);
    }while(producao<0);

    while(producao!=flag){
        if(producao>maior){
            maior=producao;
            printf("\n\tDigite a quantidade de itens defeituosos: ");
            scanf("%d",&defeito);
        }
        do{
            printf("\n\tDigite a quantidade de itens produzidos na maquina,\n\tcaso desejar sair digite 0: ");
            scanf("%d",&producao);
        }while(producao<0);
    }
    printf("\n\tA maquina com maior numero de itens produzidos, tem como sua\n\tproducao o valor %d, e tem como itens defeituosos o valor %d",maior,defeito);
    printf("\n\tDenada por eu ter te ajudado com este programa");
    exit(0);
}
