#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

//prototipos de funcao
void _apresentacao();
int _lernumero();
bool _ehpar(int numero);

int main()
{
	int numero;
	bool ehpar;
	_apresentacao();
	numero=_lernumero();
	ehpar=_ehpar(numero);
	if(ehpar)
		printf("\nO numero %d eh par\n",numero);
	else
		printf("\nO numero %d eh impar\n",numero);

	return 0;
}

//corpo das funcoes

void _apresentacao()//apresentacao do programa
{
	printf("\nOla! Tudo bem? O proposito deste programa eh verificar se o numero natural eh impar ou nao");
}//fim _apresentacao()

int _lernumero()//leitor de numeros naturais
{
	int numero;
	do{
		printf("\nDigite o numero desejado: ");
		scanf("%d",&numero);
		if(numero<0)
			printf("ERROR");
	}while(numero<0);
	return numero;
}//fim _lernumero()

bool _ehpar(int numero)//verificacao de numero
{
	bool ehpar=false;
	if(numero%2==0)
		ehpar=true;
	return ehpar;
}//fim _ehpar()
