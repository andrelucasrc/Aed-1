#include <stdlib.h>
#include <stdio.h>

int main()
{
    int mes;

    printf("\n\tDigite o numero do mes 1-12: ");
    scanf("%i",&mes);

    switch(mes){
    case 1:
        printf("\n\tO mes de janeiro tem 31 dias");
        break;
    case 2:
        printf("\n\tO mes de fevereiro tem 28 dias");
        break;
    case 3:
        printf("\n\tO mes de marco tem 31 dias");
        break;
    case 4:
        printf("\n\tO mes de abril tem 30 dias");
        break;
    case 5:
        printf("\n\tO mes de maio tem 31 dias");
        break;
    case 6:
        printf("\n\tO mes de junho tem 30 dias");
        break;
    case 7:
        printf("\n\tO mes de julho tem 31 dias");
        break;
    case 8:
        printf("\n\tO mes de agosto tem 31 dias");
        break;
    case 9:
        printf("\n\tO mes de setembro tem 30 dias");
        break;
    case 10:
        printf("\n\tO mes de outubro tem 31 dias");
        break;
    case 11:
        printf("\n\tO mes de novembro tem 30 dias");
        break;
    case 12:
        printf("\n\tO mes de dezembro tem 31 dias");
        break;
    default:
        printf("\n\tMes invalido");}

        exit(0);
}
