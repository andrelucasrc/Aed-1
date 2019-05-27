#include<stdlib.h>
#include<stdio.h>

int main()
{
    float nota,mediaapro=0,mediarepro=0;
    int apro=0,repro=0;
    const int flag=-1;

    do{
        printf("\n\tDigite a nota do aluno,caso desejar sair digite -1: ");
        scanf("%f",&nota);
    }while(nota<flag);//fim do do while

    while(nota!=flag){
        if(nota>=60){
            apro++;
            mediaapro+=nota;
        }//fim do if
        else{
            repro++;
            mediarepro+=nota;
        }//fim do else

        do{
            printf("\n\tDigite a nota do aluno,caso desejar sair digite -1: ");
            scanf("%f",&nota);
        }while(nota<flag);//fim do do while

    }//fim do while
    if(apro!=0)
        mediaapro=mediaapro/(float)apro;
    if(repro!=0)
        mediarepro=mediarepro/(float)repro;
    printf("\n\tA media de notas de alunos aprovados eh de %f",mediaapro);
    printf("\n\tA media de notas de alunos reprovados eh de %f",mediarepro);

    printf("\n\tObrigado por usar o programa!");

    return 0;
}
