#include<stdlib.h>
#include<stdio.h>

void _escrever(int n);

int main(){
	_escrever(10);
	return 0;
}
/***************************************************************
 * Assinatura da função: void _escrever();
 * Data da elaboração: 22/04/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Escrever os algarismos de 1 até 10
 * Dados de entrada (argumentos): int n
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */
void _escrever(int n)
{
	if(n>0){
		_escrever(n-1);
		printf("%d\t",n);
	}
}
