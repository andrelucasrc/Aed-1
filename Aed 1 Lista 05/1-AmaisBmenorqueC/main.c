#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a,b,c;

    printf("\n\tDigite o primeiro valor: ");
    scanf("%f",&a);
    printf("\n\tDigite o segundo valor: ");
    scanf("%f",&b);
    printf("\n\tDigite o terceiro valor: ");
    scanf("%f",&c);

    if(a+b<c)
        printf("\n\tA soma entre os 2 prmeiros valores eh menor que o terceiro valor");
    else{
        printf("\n\tA soma entre os 2 primeiros valores nao eh menor que o terceiro valor");}

        exit(0);
}
