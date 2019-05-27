#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior=0,menor=0,amplitude=0,numero,on=0;
    const int flag=0;

    do{
        printf("\n\tDigite o numero, caso deseje sair digite 0: ");
        scanf("%d",&numero);
    }while(numero<0);

    if(numero==0)
        on=1;

    maior=numero;
    menor=numero;

    while(numero!=flag){
        if(numero>maior)
            maior=numero;
        else if(numero<menor)
            menor=numero;
        printf("\n\tDigitte o numero, caso deseje sair digite 0: ");
        scanf("%d",&numero);
    }
    if(on!=0)
        printf("\n\tNenhum valor digitado");

    else{
        amplitude=maior-menor;
        printf("\n\tA amplitude eh de %d",amplitude);
    }
    printf("\n\tObrigado por usar o programa");

    return 0;
}
