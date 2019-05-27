#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma criado com o objetivo de mostrar os n primeiros numeros de uma sequencia.");
    int n;
    float sequencia,termo1=1,termo2=100;

    printf("\n\tDigite a quantidade n de termos que voce deseja ver: ");
    scanf("%d",&n);
    printf("\n\tA sequencia calculada eh:");

    for(n; n>0; n-=2)
    {
        sequencia=termo1/termo2;
        printf("\n%f",sequencia);
        termo1++;
        termo2-=3;
        if(n>=2)
        {
            sequencia=termo2/termo1;
            printf("\n%f",sequencia);
            termo1++;
            termo2-=3;
        }
    }
    printf("\n\n\tObrigado por usar o programa.");

    exit(0);
}
