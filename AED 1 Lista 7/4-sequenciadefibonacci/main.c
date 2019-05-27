#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma criado com o proposito de mostrar os n primeiros termos da sequencia de Fibonacci");

    int sequencia,n,f1=1,f2=0;

    printf("\n\tDigite o numero n de termos desejado: ");
    scanf("%d",&n);

    printf("\n\tA sequencia eh de Fibanacci eh: ");

    for(n; n>0; n-=1)
    {
        sequencia=f1+f2;
        printf("\n\t%d",f1);
        f2=f1;
        f1=sequencia;
    }
    printf("\n\tObrigado por usar o programa");
    exit(0);
}
