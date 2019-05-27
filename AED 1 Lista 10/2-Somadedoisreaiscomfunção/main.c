#include<stdlib.h>
#include<stdio.h>

//Prototipos de funcao
void _apresentacao();
float _lernumero();
float _soma(float num1,float num2);

int main()
{
    float num1,num2,soma;
    _apresentacao();
    num1=_lernumero();
    num2=_lernumero();
    soma=_soma(num1,num2);
    printf("\nO valor da soma eh %f",soma);
    return 0;
}
//Corpo das funcoes
void _apresentacao()
{
    printf("\nOla! O objetivo deste programa somar dois valores reais usando funcoes.");
}

float _lernumero()
{
    float numero;
    printf("\nDigite o valor desejado: ");
    scanf("%f",&numero);

    return numero;
}

float _soma(float num1,float num2)
{
    float soma;
    soma=num1+num2;
    return soma;
}
