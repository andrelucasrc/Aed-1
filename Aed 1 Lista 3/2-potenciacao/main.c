#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float base,
          expoente,
          potencia;

    printf("\n\tDigite o valor da base da potencia: ");
    scanf("%f",&base);
    printf("\n\n\tDigite o valor do expoente da potencia: ");
    scanf("%f",&expoente);

    potencia = pow(base,expoente);

    printf("\n\n\tO valor da pontencia com a base %f e o expoente %f eh de %f",base,expoente,potencia);

    exit(0);
}
