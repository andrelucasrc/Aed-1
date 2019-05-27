#include <stdlib.h>
#include <stdio.h>

int main()
{
    float base,
          altura,
          area;

    printf("\n\tDigite o valor da base do retangulo: ");
    scanf("%f",&base);
    printf("\n\n\tDigite o valor da altura do retangulo: ");
    scanf("%f",&altura);

    area = base*altura;

    printf("\n\n\tO valor da area do retangulo, quando sua base equivale a %f e a altura %f, eh de %f",base,altura,area);

    exit(0);
}
