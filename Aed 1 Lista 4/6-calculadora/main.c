#include <stdlib.h>
#include <stdio.h>

int main()
{
    char operacoes;
    float numero1,
          numero2,
          resultado;

    printf("\n\tDigite o valor do primeiro algarismo: ");
    scanf("%f",&numero1);
    printf("\n\tDigite a operacao desejada\"+,-,* e / \": ");
    scanf("%s",&operacoes);
    printf("\n\tDigite o valor do segundo algarismo: ");
    scanf("%f",&numero2);

    if(operacoes=='+'){
        resultado = numero1+numero2;
        printf("\n\t%f + %f = %f",numero1,numero2,resultado);}
        else if(operacoes=='-'){
            resultado = numero1-numero2;
            printf("\n\t%f - %f = %f",numero1,numero2,resultado);}
            else if(operacoes=='*'){
                resultado = numero1*numero2;
                printf("\n\t%f * %f = %f",numero1,numero2,resultado);}
                else if(operacoes=='/'){
                        resultado = numero1/numero2;
                        printf("\n\t%f / %f = %f",numero1,numero2,resultado);}
                        else
                            printf("\n\tNao eh possivel fazer o calculo.Motivo: operacao invalida");

      exit(0);
}
