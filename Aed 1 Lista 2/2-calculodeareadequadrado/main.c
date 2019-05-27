#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float lado,
          area;


    printf("\n\tPrograma feito para calcular a area de um quadrado.");
    printf("\n\tPrimeiro passo:\n\tDigite o valor do lado: ");
    scanf("%f",&lado);

    area = lado*lado;

    printf("\n\t O valor da area de um quadrado de lado %f e %f",lado,area);

    return 0;
}
