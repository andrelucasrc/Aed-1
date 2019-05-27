#include <stdlib.h>
#include <stdio.h>

int main()
{
    int menor,maior;
    printf("\n\tPrograma feiro com o objetivo de mostrar numeros em ordem decrescente");
    printf("\n\tDigite o maior numero: ");
    scanf("%d",&maior);
    printf("\n\tDigite o menor numero: ");
    scanf("%d",&menor);

    if(maior>menor){
        do{
        printf("\n\t%d",maior);
        maior-=1;
        }while(maior>=menor);
    }
    else
        printf("\n\tValores invalidos");

    printf("\n\n\tFim\n");

    exit(0);
}
