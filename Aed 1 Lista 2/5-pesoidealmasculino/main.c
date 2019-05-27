#include <stdlib.h>
#include <stdio.h>

int main()
{
    float altura,
          peso;

    printf("\n\tPrograma feito com o objetivo de calcular o peso ideal de uma pessoa do genero masculino.");
    printf("\n\tPrimeiro passo:\n\tDigite a altura de pessoa referida: ");
    scanf("%f",&altura);

    peso = (72.7*altura)-58;

    printf("\n\tO peso ideal de uma pessoa do genero masculino\n\tcujo a altura seja %f e de %f.",altura,peso);

    return 0;
}
