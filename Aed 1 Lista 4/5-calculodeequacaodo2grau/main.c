#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float a,
          b,
          c,
          delta;

    printf("\n\tDigite o valor \"a\" que acompanha o x elevado ao quadrado: ");
    scanf("%f",&a);
    printf("\n\tDigite o valor \"b\" que acompanha o x: ");
    scanf("%f",&b);
    printf("\n\tDigite o valor \"c\" que eh o termo independente: ");
    scanf("%f",&c);

    delta = pow(b,2)-(4*a*c);

    float x1,
          x2;

    x1 = (-b+sqrt(delta))/2.0*a;
    x2 = (-b-sqrt(delta))/2.0*a;

    if(delta>=0)
        printf("\n\tO valor das raizes desta equacao eh de: %f e %f",x1,x2);
    else
        printf("\n\tNao eh possivel calcular o valor das raizes dessa equacao com o conjunto dos numeros reais");

    exit(0);
}
