#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float peso,altura,imc;

    printf("\n\tDigite sua altura: ");
    scanf("%f",&altura);
    printf("\n\tDigite seu peso: ");
    scanf("%f",&peso);

    imc=peso/pow(altura,2);

    if(peso<16)
        printf("\n\tVoce tem magreza grave");
    else if(peso>=16&&peso<17)
        printf("\n\tVoce tem magreza moderada");
    else if(peso>=17&&peso<18.5)
        printf("\n\tVoce tem magreza leve");
    else if(peso>=18.5&&peso<25)
        printf("\n\tVoce eh saudavel");
    else if(peso>=25&&peso<30)
        printf("\n\tVoce esta com sobrepeso");
    else if(peso>=30&&peso<35)
        printf("\n\tVoce esta com obesidade de grau 1");
    else if(peso>=35&&peso>40)
        printf("\n\tVoce esta com obesidade de grau 1\(severa\)");
    else
        printf("\n\tVoce esta com obesidade morbida");

    exit(0);
}
