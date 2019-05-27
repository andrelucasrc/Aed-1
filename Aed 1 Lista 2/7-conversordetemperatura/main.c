#include <stdlib.h>
#include <stdio.h>

int main()
{
    float farenheit,
          celsius;

    printf("\n\tPrograma criado com o objetivo de converter graus Farenheit em Celcius.");
    printf("\n\tDigite o valor da temperatura em Farenheit: ");
    scanf("%f",&farenheit);

    celsius = 5/9.0*(farenheit-32);

    printf("\n\tO valor convertido da temperara de farenheit para celcius,");
    printf("\n\tcujo o valor em farenheit seja de %f, e de %f",farenheit,celsius);

    return 0;
}
