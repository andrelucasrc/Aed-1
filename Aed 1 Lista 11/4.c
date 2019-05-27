#include<stdlib.h>
#include<stdio.h>

/***************************************************************
 * Assinatura da função:void _escrever(int n)
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Cosa
 * Objetivo:Escrever numeros de N até zero
 * Dados de entrada (argumentos):int n
 * Dado de saída (valor gerado pela função):void
 ****************************************************************
 */void _escrever(int n);
/***************************************************************
 * Assinatura da função:int _lernumero()
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:Ler um numero inteiro qualquer
 * Dados de entrada (argumentos):void
 * Dado de saída (valor gerado pela função):int n
 ****************************************************************
 */int _lernumero();

int main()
{
	int n;
	n=_lernumero();
	_escrever(n);
	return 0;
}

void _escrever(int n)
{
	if(n>=0){
		printf("\n%d",n);
		_escrever(n-1);
	}
}

int _lernumero()
{
	int n;
	printf("\nDigite o numero desejado");
	scanf("%d",&n);
	return n;
}
