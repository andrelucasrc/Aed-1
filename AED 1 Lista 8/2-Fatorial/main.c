#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n,fat=1;
    do{
        printf("\n\tDigite o valor n da fatorial n!: ");
        scanf("%d",&n);
    }while(n<0);

    for(int i=n; i>0; i-=1)
        fat=fat*i;

    printf("\n\tO valor deste fatorial eh de %d",fat);
    printf("\n\tObrigado por usar o programa");

    exit(0);
}
