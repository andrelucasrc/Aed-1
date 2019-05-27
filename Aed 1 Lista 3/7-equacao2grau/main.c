#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x,
          a,
          b,
          c,
          delta;

    printf("\n\tDigite o valor do termo \"a\" que acompanha o x2: ");
    scanf("%f",&a);

    printf("\n\n\tDigite o valor do termo \"b\" que acompanha o x: ");
    scanf("%f",&b);

    printf("\n\n\tDigite o valor do termo indepente \"c\": ");
    scanf("%f",&c);

    delta = pow(b,2)-(4*a*c);

    float x1,
          x2;

    x1 = (-b+sqrt(delta))/2*a;
    x2 = (-b-sqrt(delta))/2*a;

    printf("\n\n\tO resultado desta equacao de 2 grau eh x1= %f e x2= %f",x1,x2);

    exit(0);
}
