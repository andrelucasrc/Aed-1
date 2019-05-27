#include<stdlib.h>
#include<stdio.h>

//prototipo de funcao
void _apresentacao();
int _lernumeronatural();
int _calculodefatorial(int numero);
int main()
{
	int numero,
	    fatorial;
	_apresentacao();
	numero=_lernumeronatural();
	fatorial=_calculodefatorial(numero);
	printf("\nO valor deste fatorial eh %d",fatorial);
	printf("\nObrigado por usar o programa\n");
	return 0;
}

void _apresentacao()
{
	printf("\nOla! Tudo bem? O objetivo deste programa eh calcular o fatorial de um numero");
}

int _lernumeronatural()
{
	int numero;
	do{
		printf("\nDigite o numero desejado: ");
		scanf("%d",&numero);
	}while(numero<0);
	return numero;
}

int _calculodefatorial(int numero)
{
	int fatorial=1;
	for(int c=numero; c>0; c--){
		fatorial=fatorial*c;
	}
	return fatorial;
}
