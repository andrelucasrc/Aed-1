#include<stdlib.h>
#include<stdio.h>

/***************************************************************
 * Assinatura da função: int _lernumero();
 * Data da elaboração: 01/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Ler um número inteiro qualquer
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): int num
 ****************************************************************
 */int _lernumero();
/***************************************************************
 * Assinatura da função: void _menor(int *num1,int *num2);
 * Data da elaboração: 01/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Definir qual o menor numero entre dois lidos
 * Dados de entrada (argumentos): int *num1,int *num2
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _menor(int *num1,int *num2);
/***************************************************************
 * Assinatura da função: void _escrever(int num);
 * Data da elaboração: 01/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Escrever o menor numero na tela
 * Dados de entrada (argumentos): int num
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _escrever(int num);

int main()
{
	int num1,
	    num2;
	num1=_lernumero();
	num2=_lernumero();
	_menor(&num1,&num2);
	_escrever(num1);
	return 0;
}

int _lernumero()
{
	int num;
	printf("\nDigite o numero desejado: ");
	scanf("%d",&num);
	return num;
}

void _menor(int *num1,int *num2)
{
	if(*num1>*num2)
		*num1=*num2;
}

void _escrever(int num)
{
	printf("\nO menor numero eh %d",num);
}
