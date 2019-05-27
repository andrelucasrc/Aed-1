#include <stdlib.h>
#include <stdio.h>

int main()
{
    float altura,
          peso;

    printf("\n\tPrograma com o objetivo de calcular o peso de uma pessoa do genero feminino.");
    printf("\n\tPrimeiro passo:\n\tDigite a altura da pessoa referida: ");
    scanf("%f",&altura);

    peso = (62.1*altura)-44.7;

    printf("\n\tO peso ideal de uma pessoa do genero feminino\n\tcujo a altura seja %f e de %f",altura,peso);

    return 0;
}
