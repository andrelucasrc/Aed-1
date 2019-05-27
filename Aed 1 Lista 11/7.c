#include<stdlib.h>
#include<stdio.h>

/***************************************************************
 * Assinatura da função:long int _fatorial(int n);
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:Calcular o fatorial de um numero qualquer
 * Dados de entrada (argumentos):int n
 * Dado de saída (valor gerado pela função):long int fatorial
 ****************************************************************
 */long int _fatorial(int n);
/***************************************************************
 * Assinatura da função:int _lernumero();
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:Ler um numero inteiro qualquer
 * Dados de entrada (argumentos):void
 * Dado de saída (valor gerado pela função):int n
 ****************************************************************
 */int _lernumero();

int main()
{
	int numero;
	long int fatorial=0;
	numero=_lernumero();
	if(numero>=0)
		fatorial=_fatorial(numero);
	printf("\nO valor do fatorial deste numero eh de %ld",fatorial);
	return 0;
}

long int _fatorial(int n)
{
	int fatorial=1;
	if(n>1){
		fatorial=n*_fatorial(n-1);
	}
	return fatorial;
}

int _lernumero()
{
	int n;
	printf("\nDigite o numero desejado");
	scanf("%d",&n);
	return n;
}
