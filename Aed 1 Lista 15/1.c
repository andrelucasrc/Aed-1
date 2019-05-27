#include<stdlib.h>
#include<stdio.h>

/***************************************************************
 * Assinatura da função: int _pares(FILE *arq);
 * Data da elaboração: 12/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Verificar a quantidade de pares exstentes no arquivo numero.txt
 * Dados de entrada (argumentos): FILE *arq
 * Dado de saída (valor gerado pela função): int pares
 ****************************************************************
 */int _pares(FILE *arq);

int main()
{
	int par;
	FILE *arq;
	arq=fopen("numeros.txt","r+");
	par=_pares(arq);
	printf("%d",par);
	return 0;
}

int _pares(FILE *arq)
{
	int numero,
	    par=0;
	fscanf(arq,"%d",&numero);
	while(!feof(arq)){
		if(numero%2==0)
			par++;
		fscanf(arq,"%d",&numero);
	}//fim while
	fclose(arq);
	return par;
}
