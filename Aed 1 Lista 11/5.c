#include<stdlib.h>
#include<stdio.h>
/***************************************************************
 * Assinatura da função:_somatorio(int n,int m); 
 * Data da elaboração: 28/04/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Retornar a soma dos numeros presentes na sequencia de n ate m
 * Dados de entrada (argumentos): int n,int m;
 * Dado de saída (valor gerado pela função): int soma;
 ****************************************************************
 */int _somatorio(int n,int m);
/***************************************************************
 * Assinatura da função:_lerlimiteinferior();
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:ler o limite inferior
 * Dados de entrada (argumentos):void
 * Dado de saída (valor gerado pela função):int n
 ****************************************************************
 */int _lerlimiteinferior();
/***************************************************************
 * Assinatura da função:int _lerlimitesuperior();
 * Data da elaboração:28/04/2019
 * Autor:André Lucas Ribeiro Costa
 * Objetivo:ler o limite superior
 * Dados de entrada (argumentos):void
 * Dado de saída (valor gerado pela função):int m
 ****************************************************************
 */int _lerlimitesuperior();

int main()
{
	int somatorio,
	    limiteinferior,
	    limitesuperior;
	limiteinferior=_lerlimiteinferior();
	limitesuperior=_lerlimitesuperior();
	somatorio=_somatorio(limiteinferior,limitesuperior);
	printf("A soma de %d ate %d eh %d",limiteinferior,limitesuperior,somatorio);
	return 0;
}

int _somatorio(int n,int m)
{
	int soma=0;
	if(n<=m){
		soma=n+_somatorio(n+1,m);
	}
	return soma;
}

int _lerlimiteinferior()
{
	int n;
	printf("\nDigite o limite inferior: ");
	scanf("%d",&n);
	return n;
}

int _lerlimitesuperior()
{
        int n;
        printf("\nDigite o limite superior: ");
        scanf("%d",&n);
        return n;
}

