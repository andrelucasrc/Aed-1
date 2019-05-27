
#include<stdlib.h>
#include<stdio.h>

/***************************************************************
 * Assinatura da função: void _lernumero(int*num);
 * Data da elaboração: 01/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Ler um numero inteiro qualquer por parâmetros referenciais
 * Dados de entrada (argumentos): int *num
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _lernumero(int*num);
/***************************************************************
 * Assinatura da função: void _ordenar(int *num1,int *num2);
 * Data da elaboração: 01/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Mostrar qual o maior numero e armazena-lo no primeiro numero, por parâmetros referenciais
 * Dados de entrada (argumentos): int *num1,int *num2
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _ordenar(int *num1,int *num2);
/***************************************************************
 * Assinatura da função: void _escrevermaior(int *num);
 * Data da elaboração: 01/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Escrever o maior numero na tela
 * Dados de entrada (argumentos): int *num
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _escrevermaior(int *num);

int main()
{
	int num1,
	    num2;
	_lernumero(&num1);
	_lernumero(&num2);
	_ordenar(&num1,&num2);
	_escrevermaior(&num1);
	return 0;
}

void _lernumero(int *num)
{
	printf("\nDigite o numero desejado: ");
	scanf("%d",num);
}

void _ordenar(int *num1,int *num2)
{
	if(*num1<*num2)
		*num1=*num2;
}

void _escrevermaior(int *num)
{
	printf("\nO maior numero eh %d",*num);
}
