#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma elaborado com o proposito de analisar o perfil de uma turma");

    int n,novo=0,velho=0,idade1=0,idade2=0;
    float percentual,ini;

    printf("\n\tDigite a quantidade de alunos: ");
    scanf("%d",&n);

    for(int i=0; i<n; )
    {
        if(i<n){
            do{
                printf("\n\tDigite a idade do aluno[1-100]: ");
                scanf("%d",&idade1);
                i++;
            }while(idade1<=0||idade1>100);
        }
        if(i<n)
        {
            do{
            printf("\n\tDigite a idade do aluno[1-100]: ");
            scanf("%d",&idade2);
            i++;
            }while(idade2<=0||idade2>100);
        }
        if(idade1>idade2&&idade1!=0)
        {
            velho=idade1;
            if(idade2!=0)
            novo=idade2;
        }else if(idade1<idade2&&idade1!=0)
        {
            velho=idade2;
            if(idade1!=0)
            novo=idade1;
        }
        if(idade1>18)
            ini++;
            if(idade2>18)
                ini++;
    }
    percentual=(ini/n)*100;
    printf("\n\tA idade da pessoa mais nova e mais velha,sao respecivamente, %d e %d",novo,velho);
    printf("\n\tO percentual de alunos maiores de idade eh %f",percentual);
    exit(0);
}
