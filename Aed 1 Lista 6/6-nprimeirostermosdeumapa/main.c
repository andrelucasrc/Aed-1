#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n\tPrograma feito com a premissa de mostrar os n primeiros termos de uma prograssao aritmetica.");

    float razao,termo1;
    int n;

    printf("\n\tDigite o primeiro termo da progressao aritmetica: ");
    scanf("%f%*c",&termo1);
    printf("\n\tDigite a razao da progressao aritmetica: ");
    scanf("%f%*c",&razao);
    printf("\n\tDigite a quantidade de termos a ser mostrada: ");
    scanf("%d%*c",&n);

    for(int c=0; c<n; c++){
        printf("\n\n%f",termo1);
        termo1+=razao;
    }
    printf("\n\n\tFim\n");
    exit(0);
}
