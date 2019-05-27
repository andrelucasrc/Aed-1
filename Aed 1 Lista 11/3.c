#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void _escrever(int li,int ls);
int _lernumero();

int main()
{
	int li,
	    ls;
	li=_lernumero();
	ls=_lernumero();
	_escrever(li,ls);
	return 0;
}//fim da main
/***************************************************************
 * Assinatura da função: void _escrever(int n,bool crescente);
 * Data da elaboração: 22/04/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Escrever na tela a seguinte sequência:limite inferior...limite superior,limite superior...limite inferior;
 * Dados de entrada (argumentos): int n, bool crescente = 5,true;
 * Dado de saída (valor gerado pela função): void;
 ****************************************************************
 */void _escrever(int li,int ls)
{
	if(li<=ls&&li>0&&ls>0){
		_escrever(li+1,ls);
		printf("\t%d",li);
	}
	else if(li>ls&&li>0&&ls>0){
		_escrever(li,ls-1);
                printf("\t%d",ls);
	}
}

/***************************************************************
 * Assinatura da função: int _lernumero();
 * Data da elaboração: 27/04/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: ler um numero inteiro
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): int
 ****************************************************************
 */int _lernumero()
{
	int n;
	printf("\nDigite o numero desejado: ");
	scanf("%d",&n);
	return n;
}
