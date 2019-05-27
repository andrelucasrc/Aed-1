#include <stdlib.h>
#include <stdio.h>

int main()
{
    float altura,
          formula;
    char genero;

    printf("\n\tDigite o genero da pessoas referida,sendo \"m\" masculino e \"f\" feminino: ");
    scanf("%c",&genero);
    printf("\n\tDigite a altura da pessoa referida: ");
    scanf("%f",&altura);

    if((genero=='m')||(genero=='M')){
        formula = (72.7*altura)-58;
        printf("\n\tO peso ideal da pessoa referida do genero masculino eh de %f",formula);}
        else if((genero=='f')||(genero=='F')){
            formula = (62.1*altura)-44.7;
            printf("\n\tO peso ideal da pessoa referida do genero feminino eh de %f",formula);}

        else
            printf("\n\tNao eh possivel calcular o peso ideal:Genero invalido");

        exit(0);
}
