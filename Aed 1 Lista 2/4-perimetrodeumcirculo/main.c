#include <stdlib.h>
#include <stdio.h>

int main()
{
    float pi,
          raio,
          perimetro;

    pi = 3.14;

    printf("\n\tPrograma feito para calcular o perimetro de um circulo.");
    printf("\n\tPrimeiro passo:\n\tDigite o valor do raio do circulo: ");
    scanf("%f",&raio);

    perimetro = 2*pi*raio;

    printf("\n\tUm circulo de raio %f tem como seu perimetro aproximadamente %f",raio,perimetro);

    return 0;
}
