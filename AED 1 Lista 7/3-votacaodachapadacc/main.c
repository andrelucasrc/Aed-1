#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("\n\tPrograma feito com o proposito de servir como urna eleitoral para");
    printf("\n\ta selecao da nova chapa do DA de ciencia da computacao");

    int voto,
        chapa1=0,
        chapa2=0,
        nulo=0,
        branco=0;

    float porcentagem,
          n;

    do
    {
        printf("\n\t0-Sair do programa\n\t1-Chapa1\n\t2-Chapa2\n\t3-Voto Nulo\n\t4=Voto Branco");
        do
        {
            printf("\n\tDigite qual o seu voto de acordo com a tabela acima: ");
            scanf("%d",&voto);
        }while(voto!=0&&voto!=1&&voto!=2&&voto!=3&&voto!=4);

        switch(voto)
        {
            case 1:
                chapa1+=1;
                break;
            case 2:
                chapa2+=1;
                break;
            case 3:
                nulo+=1;
                break;
            case 4:
                nulo+=1;
                break;
        }
        if(voto!=0)
        {
            n+=1.0;
        }
    }while(voto!=0);

    printf("\n\tO total de votos para a Chapa 1 eh %d",chapa1);
    printf("\n\tO total de votos para a Chapa 2 eh %d",chapa2);
    printf("\n\tO total de votos nulos eh %d",nulo);
    printf("\n\tO total de votos brancos eh %d",branco);

    if(chapa1>chapa2)
    {
        porcentagem=(chapa1/n)*100;
        printf("\n\tA chapa vencedora eh a Chapa 1 que teve como percentual de vitoria %f\%",porcentagem);
    }else if(chapa1<chapa2)
        {
            porcentagem=(chapa2/n)*100;
            printf("\n\tA chapa vencedora eh a Chapa 2 que teve como percentual de vitoria %f",porcentagem);
        }else
            {
                printf("\n\tA Chapa 1 empatou com a Chapa 2");
            }
    printf("\n\n\tObrigado por usar este programa");

    exit(0);
}
