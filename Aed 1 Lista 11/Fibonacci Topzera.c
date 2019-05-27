#include<stdlib.h>
#include<stdio.h>

int _fibonacci(int n,int termo1,int termo2);
int _lertermo();
void _apresentacao();

int main()
{
	int fibonacci,
	    termo;
	_apresentacao();
	termo=_lertermo();
	fibonacci=_fibonacci(termo,1,0);
	printf("\nO k-esimo termo de fibonacci eh %d\t",fibonacci);
	return 0;
}

/***************************************************************
 * Assinatura da função: int _fibonacci(int n,int termo1,int termo2)
 * Data da elaboração: 28/04/2018
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Retornar o k-esimo termo de fibonacci
 * Dados de entrada (argumentos): int n,int termo1,int termo2
 * Dado de saída (valor gerado pela função): int fib
 ****************************************************************
 */int _fibonacci(int n,int termo1,int termo2){
	int aux=0;//variavel auxiliar
	int fib=termo1;
	if(n>=1){
		aux=termo1+termo2;
		termo2=termo1;
		termo1=aux;
		fib=_fibonacci(n-1,termo1,termo2);
	}
	return fib;
}
/***************************************************************
 * Assinatura da função: int _lertermo()
 * Data da elaboração: 28/04/2019
 * Autor: André Lucas Ribero Costa
 * Objetivo: Ler um numero inteiro qualquer
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): int termo 
 ****************************************************************
 */int _lertermo()
{
	int termo;
	printf("\nDigite qual o termo que deseja ser mostrado: ");
	scanf("%d",&termo);
	return termo;
}
/***************************************************************
 * Assinatura da função: void _apresentacao()
 * Data da elaboração: 28/04/2019
 * Autor: André Lucas Ribeiro Cosya
 * Objetivo: Apresentar o programa ao usuario
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _apresentacao()
{
	printf("\nOla! Tudo bem? O proposito deste programa eh mostrar o termo desejado da sequencia de fibonacci, o primeiro termo dessa sequencia eh 0.\n");
}
