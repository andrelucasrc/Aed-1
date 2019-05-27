#include<stdlib.h>
#include<stdio.h>

//funções do algoritmo,Estrutura:Tipo NomedaFunção();
float lernumero();
float maior(float a,float b);
float menor(float a,float b);

int main()
{
    printf("\n\tO proposito desse programa eh observar qual dos dois numeros digitados eh o maior");
    float num1,num2;
    num1=lernumero();
    num2=lernumero();
    if(num1!=num2){
        float maiornum,menornum;
        menornum = menor(num1,num2);
        maiornum = maior(num1,num2);
        printf("\n\t%f eh o maior numero",maiornum);
        printf("\n\t%f eh o menor numero",menornum);
    }
    else
        printf("\n\tOs dois numeros sao iguais");
}

float lernumero()//leitura de valores
{
    float A;
    printf("\n\tDigite o numero desejado: ");
    scanf("%f",&A);
    return A;
}

float maior(float a,float b)//Verificar qual dos dois numeros eh o maior
{
    if(a>b)
        b=a;
    return b;
}

float menor(float a,float b)//Verificar qual dos dois numeros eh o menor
{
    if(a<b)
        b=a;
    return b;
}
