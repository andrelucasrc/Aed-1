#include<stdlib.h>
#include<stdio.h>

/***************************************************************
 * Assinatura da função:int _somatoriodecubos(int n);
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:somar o valor da seguinte sequencia: 1³+2³.....+N³
 * Dados de entrada (argumentos):int n
 * Dado de saída (valor gerado pela função):int soma
 ****************************************************************
 */int _somatoriodecubos(int n);
/***************************************************************
 * Assinatura da função:int _lernumero();
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:ler um numero inteiro qualquer
 * Dados de entrada (argumentos):void 
 * Dado de saída (valor gerado pela função):int n
 ****************************************************************
 */int _lernumero();

int main()
{
	int somatorio,
	    numero;
	numero=_lernumero();
	somatorio=_somatoriodecubos(numero);
	printf("%d",somatorio);
	return 0;
}

int _somatoriodecubos(int n)
{
	int soma=0;
	if(n>0){
		soma=(n*n*n)+_somatoriodecubos(n-1);
	}
	return soma;
}

int _lernumero()
{
	int n;
	printf("\nDigite o numero desejado: ");
	scanf("%d",&n);
	return n;
}
