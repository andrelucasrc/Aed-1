#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

void _escrever(int n);

int main()
{
	_escrever(1);
	return 0;
}
/***************************************************************
 * Assinatura da função: void _escrever(int n,bool crescente);
 * Data da elaboração: 22/04/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Escrever na tela a seguint sequência:1,2,3,4,5,5,4,3,2,1;
 * Dados de entrada (argumentos): int n, bool crescente = 5,true;
 * Dado de saída (valor gerado pela função): void;
 ****************************************************************
 */
void _escrever(int n)
{
	if(n<=5){
		_escrever(n+1);
		printf("\t%d",n);
	}
	else if(n>5&&n<5*2){
		printf("\t%d",n-5);
		_escrever(n+1);
	}
}
