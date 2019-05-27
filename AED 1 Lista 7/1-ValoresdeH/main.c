#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma elaborado com o proposito de mostrar na tela os valor de H");
    printf("\n\tSendo que H = 1/100+1/97+1/94...");

    int n;
    float h,i=100;

    printf("\n\tDigite o numero de termos que devem ser contido no H: ");
    scanf("%d",&n);


    for(n; n>=1; n-=1)
    {
        h+=1/i;
        i-=3;
    }

    printf("\n\tO valor de h eh %f",h);

    exit(0);
}
