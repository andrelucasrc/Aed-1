#include <stdlib.h>
#include <stdio.h>

int main()
{
    float n1,
          n2,
          n3;

    printf("\n\tDigite o primeiro numero: ");
    scanf("%f",&n1);
    printf("\n\tDigite o segundo numero: ");
    scanf("%f",&n2);
    printf("\n\tDigite o terceiro numero: ");
    scanf("%f",&n3);

  if(n1>n2){
    if(n2>n3)
        printf("\n\tO segundo maior numero eh %f",n2);
        else if(n3>n2){
            if(n3>n1)
        printf("\n\tO segundo maior numero eh %f",n1);
        else if(n2==n3)
            printf("\n\tO segundo maior numero eh %f",n3);}}


            else if(n2>n1){
                if(n2>n3){
                if(n3>n1)
                    printf("\n\tO segundo maior numero eh %f",n3);
                    else if(n1>n3)
                        printf("\n\tO segundo maior numero eh %f",n1);
                        else if(n1==n3)
                        printf("\n\tO segundo maior numero eh %f",n1);}}

            else if(n3>n1){
                    if(n1>n2)
                        printf("\n\tO segundo maior numero eh %f",n1);
                    else if(n2>n1){
                            if(n2>n3)
                            printf("\n\tO segundo maior numero eh %f",n3);
                            else if(n2<n3)
                                printf("\n\tO segundo maior numero eh %f",n2);
                            else if(n2==n3)
                                printf("\n\tO segundo maior numero eh %f",n1);}}


            else if(n3==n2&&n2==n1)
                printf("\n\tTodos sao iguais");
    exit(0);
  }
