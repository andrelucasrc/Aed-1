#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tPrograma criado para ser uma calculadora simples com as 4 operacoes basicas.");

    float numero1,numero2,resultado;
    char operacao;
        printf("\n\tDigite a operacao que deve ser feita(+,-,*,/): ");
        scanf("%c%*c",&operacao);
    do{
        printf("\n\tDigite o primeiro numero: ");
        scanf("%f%*c",&numero1);

        printf("\n\tDigite o segundo numero: ");
        scanf("%f%*c",&numero2);

        switch(operacao){
        case '+':
            resultado=numero1+numero2;
            printf("\n\t%f + %f = %f",numero1,numero2,resultado);
            break;
        case '-':
            resultado=numero1-numero2;
            printf("\n\t%f - %f = %f",numero1,numero2,resultado);
            break;
        case '*':
            resultado=numero1*numero2;
            printf("\n\t%f * %f = %f",numero1,numero2,resultado);
            break;
        case '/':
            resultado=numero1/numero2;
            printf("\n\t%f / %f = %f",numero1,numero2,resultado);
            break;
        default:
            printf("\n\tOperacao invalida");
        }
        printf("\n\tDeseja continuar?(Caso sim digite o primeiro numero,se nao digite \"n\": ");
        scanf("%c%*c",&operacao);
    }while(operacao!='n'&&operacao!='N');

    printf("\n\tObrigado por usar esse programa!");

    exit(0);
}
