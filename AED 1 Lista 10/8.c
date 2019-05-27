#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

//prototipos de funcao
void _apresentacao();
char _leitordegenero();
float _leitordealtura();
float _pesoidealmasc(float altura);
float _pesoidealfemi(float altura);

int main()
{
	char genero;
	float altura,
	      pesoideal;
	_apresentacao();
	genero=_leitordegenero();
	altura=_leitordealtura();
	if(genero=='m')
		pesoideal=_pesoidealmasc(altura);
	else
		pesoideal=_pesoidealfemi(altura);
	printf("\nO seu peso ideal eh %f",pesoideal);
	printf("\nObrigado por usar o programa\n");
	return 0;
}

//corpo de funcao
void _apresentacao()
{
	printf("\nOla! Tudo bem? O objetivo deste programa eh calcular o seu peso ideal");
}

char _leitordegenero()
{
	char genero;
	do{
		printf("\nDigite seu genero: ");
		scanf("%c",&genero);
		tolower(genero);
	}while(genero!='m'&&genero!='f');
	return genero;
}

float _leitordealtura()
{
	float altura;
	do{
		printf("\nDigite a altura: ");
		scanf("%f",&altura);
	}while(altura<0);
	return altura;
}

float _pesoidealmasc(float altura)
{
	float pesoideal;
	pesoideal=(72.7*altura)-58;
	return pesoideal;
}

float _pesoidealfemi(float altura)
{
	float pesoideal;
	pesoideal=(62.1*altura)-44.7;
	return pesoideal;
}
