#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma criado com o proposito de ler e calcular a media de uma sequencia qualquer de numeros");
    float numero1,numero2,media;

    do
    {
        if(numero1!=0&&numero2==0)
            media=(media+numero1)/2;
        numero1=0;
        numero2=0;
        printf("\n\tDigite o numero desejado [caso desejae sair digite 0]: ");
        scanf("%f",&numero1);

        if(numero1!=0)
        {
            printf("\n\tDigite o numero desejado [caso desejar sair digite 0]: ");
            scanf("%f",&numero2);
        }
        if(numero2!=0&&numero1!=0)
        {
            media=(numero1+numero2)/2;
    }while(numero1!=0&&numero2!=0);
    printf("\n\tA media dos numero digitada eh %f",media);
    printf("\n\n\tObrigado por utilizar o programa!");
    exit(0);
}
