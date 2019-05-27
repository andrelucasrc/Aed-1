#include <stdlib.h>
#include <stdio.h>

int main()
{
    float x,
          a,
          b;

    printf("\n\tDigite o valor \"a\",que acompanha a variavel \"x\": ");
    scanf("%f",&a);
    printf("\n\n\tDigite o valor de \"b\",que eh o termo independente: ");
    scanf("%f",&b);

    x = b/a;

    printf("\n\n\tO valor de \"x\" quando a igual \"a\" %f e \"b\" = %f eh de %f.",a,b,x);

    return 0;
}
