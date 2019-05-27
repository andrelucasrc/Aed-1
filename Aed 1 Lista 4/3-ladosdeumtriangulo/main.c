#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float lado1,
          lado2,
          lado3,
          condicao;

    printf("\n\tDigite o primeiro lado: ");
    scanf("%f",&lado1);
    printf("\n\tDigite o segundo lado: ");
    scanf("%f",&lado2);
    printf("\n\tDigite o terceiro lado: ");
    scanf("%f",&lado3);
    condicao = fabs(lado2-lado3);

    if(condicao<lado1&&lado1<lado2+lado3){
        if((lado1==lado2)&&(lado2==lado3))
            printf("\n\tEste eh um triangulo equilatero");
        else if((lado1!=lado2)&&(lado2=lado3)||(lado1!=lado3)&&(lado2=lado1)||(lado2!=lado3)&&(lado1=lado3))
        printf("\n\tEste eh um triangulo isoceles");
        else if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3))
        printf("\n\tEste eh um triangulo escaleno");}
    else
        printf("\n\tEste nao eh um triangulo");

    exit(0);

}
