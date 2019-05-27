#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float cateto1,
          cateto2,
          hipotenusa;

    printf("\n\tDigite o valor do cateto 1: ");
    scanf("%f",&cateto1);

    printf("\n\n\tDigite o valor do cateto 2: ");
    scanf("%f",&cateto2);

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

    printf("\n\n\tO valor da hipotenusa desse triangulo eh de %f",hipotenusa);

    exit(0);
}
