#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float maior,
          menor,
          resultado;

    printf("\n\tDigite o maior ponto da reta: ");
    scanf("%f",&maior);

    printf("\n\n\tDigite o menor ponto da reta: ");
    scanf("%f",&menor);

    resultado = maior-menor;

    printf("\n\n\tA distancia entre os dois pontos da reta eh de %f",resultado);

    exit(0);
}
