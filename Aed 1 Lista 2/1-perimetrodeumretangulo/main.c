#include <stdlib.h>
#include <stdio.h>

int main()
{
    float base,
          altura,
          perimetro;

    printf("\n\tPrograma criado com o objetivo de achar o perimetro de um retangulo qualquer.");
    printf("\n\tPrimeiro passo:\n\tDigite o valor da base do retangulo: ");
    scanf("%f",&base);

    printf("\n\tSegundo passo:\n\tDigite o valor da altura do retangulo: ");
    scanf("%f",&altura);

    perimetro = (base+altura)*2;

    printf("\n\tO valor do perimetro de um retangulo de base %f e altura %f eh de %f",base,altura,perimetro);

    return 0;
}
