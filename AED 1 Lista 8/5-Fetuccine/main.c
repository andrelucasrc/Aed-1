#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ai=0,a1,a2;

    printf("\n\tDigite o primeiro termo: ");
    scanf("%f",&a1);
    printf("\n\tDigitte o segundo termo: ");
    scanf("%f",&a2);

    for(int i=3; i<=100; i++){
        if(i%2==0)
            ai=a1-a2;
        else
            ai=a1+a2;
        printf("\t%f",ai);
            a1=a2;
            a2=ai;
    }

    printf("\n\tObrigado por usar  o programa");
    return 0;
}
