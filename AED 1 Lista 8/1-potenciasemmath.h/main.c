#include<stdlib.h>
#include<stdio.h>

int main()
{
    float base,pot=1;
    int expo;

    printf("\n\tDigite a base da potencia: ");
    scanf("%f",&base);
    do{
        printf("\n\tDigite o expoente da potencia: ");
        scanf("%d",&expo);
    }while(expo<0);

    for(int i=1; i<=expo; i++){
        pot=pot*base;
    }

    printf("\n\tA potencia tem valor = %.2f",pot);
    printf("\n\tObrigado por usar o programa");
}
