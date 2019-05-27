#include <stdlib.h>
#include <stdio.h>

int main()
{
    int dia;

    printf("\n\tDigite um numero entre 1\(domingo\) e 7\(sabado\): ");
    scanf("%i",&dia);

    switch(dia){
    case 1:
        printf("\n\tO dia eh domingo");
        break;
    case 2:
        printf("\n\tO dia eh segunda-feira");
        break;
    case 3:
        printf("\n\tO dia eh terca-feira");
        break;
    case 4:
        printf("\n\tO dia eh quarta-feira");
        break;
    case 5:
        printf("\n\tO dia eh quinta-feira");
        break;
    case 6:
        printf("\n\tO dia eh sexta-feira");
        break;
    case 7:
        printf("\n\tO dia eh sabado");
        break;
    default:
        printf("\n\tDia invalido");}

    exit(0);
}
