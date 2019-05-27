#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

    int dia;

    printf("\n\tDigite o dia do seu nascimento: ");
    scanf("%d",&dia);

    int mes;

    printf("\n\n\tDigite o mes do seu nascimento: ");
    scanf("%d",&mes);

    int ano;

    printf("\n\n\tDigite o ano do seu nascimento: ");
    scanf("%d",&ano);

    int ano_atual,
        mes_atual,
        dia_atual;

    ano_atual = (data_hora_atual->tm_year+1900);
    mes_atual = (data_hora_atual->tm_mon+1);
    dia_atual = (data_hora_atual->tm_mday);

    int dias_vividos;

    dias_vividos = (dia_atual-dia)+(ano_atual-ano)*365+(mes_atual-mes)*31;

    printf("\n\n\tDias vividos ate hoje: %i",dias_vividos);

    exit(0);

}
