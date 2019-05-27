#include<stdlib.h>
#include<stdio.h>

int main()
{
    const int flag=0;
    int x,divisiveis=0,numtermos,termo1,razao,pa=0;

    do{
        printf("\n\tDigite o valor x que deseja ser observado quantos numeros divisiveis ha em uma PA,");
        printf("\n\tCaso deseje sair digite 0: ");
        scanf("%d",&x);
    }while(x<0);

    while(x!=flag){
        printf("\n\tDigite o primeiro termo: ");
        scanf("%d",&termo1);
        printf("\n\tDigite a razao: ");
        scanf("%d",&razao);
        do{
            printf("\n\tDigite o numero de termos: ");
            scanf("%d",&numtermos);
            if(numtermos<=0)
                printf("\n\tERROR\n");
        }while(numtermos<=0);

        pa=termo1;
        printf("\n\tA sequencia da pa eh: \n");

        for(int i=1; i<=numtermos; i++){
           printf("\t%d,",pa);
           pa=pa+razao;
           if(pa%x==0)
            divisiveis++;
        }

        printf("\n\tO numero de divisivei eh = %d",divisiveis);

        printf("\n\tDigite o valor de x que deseja observar quantos termos sao divisiveis por ele em uma determinada pa,");
        printf("\n\tCaso deseje sair digite 0: ");
        scanf("%d",&x);
    }

    printf("\n\tObrigado por usar o programa");

    exit(0);
}
