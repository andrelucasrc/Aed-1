#include<stdlib.h>
#include<stdio.h>

const int MAX=100;
void _atribuir(float array[]);
void _troca(float array[],int pos1,int pos2);
void _escrever(float primeiro,float ultimo);
int _lerposicao();

int main()
{
	float numero[MAX];
	int posicao1,
	    posicao2;
	posicao1=_lerposicao();
	posicao2=_lerposicao();
	_atribuir(numero);
	_troca(numero,posicao1,posicao2);
	_escrever(numero[posicao1-1],numero[posicao2-1]);
	return 0;
}
void _atribuir(float array[])
{
	for(int i=0;i<MAX;i++){
                array[i]=i;
        }//fim do for
}//fim _atribuir

void _troca(float array[],int pos1,int pos2)
{
	int aux;
	aux=array[pos1-1];
	array[pos1-1]=array[pos2-1];
	array[pos2-1]=aux;
}//fim troca

void _escrever(float primeiro,float ultimo)
{
	printf("\nDepois da troca o primeiro numero eh %f",primeiro);
	printf("\nDepois da troca o ultimo numero eh %f\n",ultimo);
}//fim escrever

int _lerposicao()
{
	int posicao;
	do{
		printf("\nDigite a posicao desejada: ");
		scanf("%d",&posicao);
		if(posicao>=MAX&&posicao<=0){
			printf("Posicao invalida\a");
		}//fim if
	}while(posicao>=MAX&&posicao<=0);
	return posicao;
}//fim _lerposicao
