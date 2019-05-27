#include <stdlib.h>
#include <stdio.h>

int main()
{
    float numero1,
          numero2;

    printf("\n\tDigite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("\n\tDigite o segundo numero: ");
    scanf("%f",&numero2);

    if(numero1>numero2)
        printf("\n\tO maior numero eh %f\n",numero1);
    else if(numero1<numero2)
        printf("\n\tO maior numero eh %f\n",numero2);
    else if(numero1==numero2)
        printf("\n\tO dois numeros tem valores iguais\n");
    exit(0);
}
