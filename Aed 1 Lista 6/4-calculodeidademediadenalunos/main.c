#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tPrograma feito com a finalidade de calcular a idade media de uma certa quantidade de alunos");
    int n,idade1,idade2,media;
    printf("\n\tDigite a quantidade \"n\" de alunos: ");
    scanf("%d",&n);

    printf("\n\tDigite a idade do aluno: ");
    scanf("%d",&idade1);
    printf("\n\tDigite a idade do aluno: ");
    scanf("%d",&idade2);
    media = (idade1+idade2)/2;
    n-=2;

    while(n>0){
        printf("\n\tDigite a idade do aluno: ");
        scanf("%d",&idade2);
        media=(media+idade2)/2;
        n-=1;
    }

    printf("\n\tA media eh %d",media);

    exit(0);

}
