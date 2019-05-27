#include<stdlib.h>
#include<stdio.h>

//prototipo de funcao
void _apresentacao();
float _lernumero();
float _lerexpoente();
float _maior(float numero,float maior);
float _menor(float numero,float maior);

int main()
{
	float numero,
	      maior,
	      menor;
	const int flag=0;
	_apresentacao();
	numero=_lernumero();
	maior=numero;
	menor=numero;
	numero=_lernumero();
	do{
		maior=_maior(numero,maior);
		menor=_menor(numero,menor);
		numero=_lernumero();
	}while(numero!=flag);
	printf("\nO maior numero eh %.2f",maior);
	printf("\nO menor numero eh %.2f",menor);
	printf("\nObrigado por usar o programa");
	return 0;
}

//corpo de funcao
void _apresentacao()
{
	printf("\nOla! Tudo bem? O objetivo deste programa eh analisar, entre os valores lidos, qual o maior termo");
}

float _lernumero()
{
	float numero;
	printf("\nDigite o numero[Digite 0 caso desejar sair]:  ");
	scanf("%f",&numero);
}

float _maior(float numero,float maior)
{
	if(numero>maior)
		maior=numero;
	return maior;
}

float _menor(float numero,float menor)
{
	if(numero<menor)
		menor=numero;
	return menor;
}
