#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

//prototipos de funcoes
void _apresentacao();//apresentacao do programa
int _lernumero();//leior de numero
bool _ehprimo(int num);//verificacao de primos

int main()
{
	int numero;
	bool ehprimo;
	_apresentacao();
	numero = _lernumero();
	ehprimo = _ehprimo(numero);
	if(ehprimo)
		printf("\nO numero eh primo");
	else
		printf("\nO numero nao eh primo");

	printf("\nObrigado por usar o programa\n");
	return 0;
}//fim main()

//corpos de funcoes
void _apresentacao()
{
	printf("\nOla! Tudo bem? O proposito deste programa eh verificar se o numero natural eh primo ou nao.");
}//fim _apresentacao()

int _lernumero()
{
	int numero;
	printf("\nDigite o numero desejado: ");
	scanf("%d",&numero);
	return numero;
}//fim _lernumero()

bool _ehprimo(int num)
{
	bool ehprimo=true;
	int i=2;
	while(i<=(num/2)&&ehprimo){
		if(num%i==0)
			ehprimo=false;
		else
			i++;
	}
	return ehprimo;
}//fim _ehprimo()
