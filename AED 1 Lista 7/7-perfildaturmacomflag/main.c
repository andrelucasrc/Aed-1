#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma elaborado com o proposito de analisar o perfil de uma turma");

    int novo=0,velho=0,idade=0,flag=0,n=0;
    float percentual=0,maior=0;

    printf("\n\tDigite a idade: ");
    scanf("%d",&idade);
    if(idade!=flag){
        n++;
        novo=idade;
        velho=idade;
    }
    if(idade>=18){
        maior++;
    }

    while(idade!=flag)
    {
        do{
            printf("\n\tDigite a idade do aluno: ");
            scanf("%d",&idade);
        }while(idade<0);
        if(idade!=0){
            n++;
        }
        if(idade<novo&&idade!=flag){
            novo=idade;
        }
        else if(idade>velho&&idade!=flag){
            velho=idade;
        }
        if(idade>=18){
            maior++;
        }
    }
    if(n>0){
        percentual=(maior/n)*100;
        printf("\n\tA idade da pessoa mais nova e mais velha,sao respecivamente, %d e %d",novo,velho);
        printf("\n\tO percentual de alunos maiores de idade eh %f",percentual);
    }else{
        printf("\n\tNao eh possivel executar o algoritmo, pois nenhum valor foi digitado");
    }
        printf("\n\n\tObrigado por usar o prgrama!\n");

    exit(0);
}
