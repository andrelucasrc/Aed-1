#include<stdlib.h>
#include<stdio.h>

const int MAX=100;
void _atribuir(int array[]);
void _troca(int array[]);
void _escrever(int primeiro,int ultimo);

int main()
{
	int numero[MAX];
	_atribuir(numero);
	_troca(numero);
	_escrever(numero[0],numero[MAX-1]);
	return 0;
}
void _atribuir(int array[])
{
	for(int i=0;i<MAX;i++){
                array[i]=i;
        }//fim do for
}//fim _atribuir

void _troca(int array[])
{
	int aux;
	aux=array[0];
	array[0]=array[MAX-1];
	array[MAX-1]=aux;
}//fim troca

void _escrever(int primeiro,int ultimo)
{
	printf("\nDepois da troca o primeiro numero eh %d",primeiro);
	printf("\nDepois da troca o ultimo numero eh %d\n",ultimo);
}//fim escrever
