#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n,di=100;
    float h=0;

    printf("\n\tDigite os termos: ");
    scanf("%d",&n);

    for(int i=1; i>=n; i++){
        h=h+(1/(float)di);
        di-=3;
    }

    printf("%f",h);
}
