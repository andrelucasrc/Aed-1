#include<stdlib.h>
#include<stdio.h>

const int LIM=10;
int _lernumero();
int _pares(int numero[]);

int main()
{
	int pares;
	int numero[LIM];
	for(int i=0; i<=LIM; i++){
		numero[i]=_lernumero();
	}//fim for
	pares=_pares(numero);
	printf("\n%d",pares);
	return 0;
}

int _lernumero()
{	
	int numero;
	printf("\nDigite o numero desejado: ");
	scanf("%d",&numero);
	return numero;
}

int _pares(int numero[])
{
	int pares=0;
	for(int i=0;i<LIM;i++){
		if(numero[i]%2==0)
			pares++;
	}
	return pares;
}//fim _pares
