#include<stdlib.h>
#include<stdio.h>

//prototipo de funcao
void _apresentacao();
float _lerbase();
float _lerexpoente();
float _potenciacao(float base,float exp);

int main()
{
	float base,
	      exp,
	      potenciacao;
	_apresentacao();
	base=_lerbase();
	exp=_lerexpoente();
	potenciacao=_potenciacao(base,exp);
	printf("\nO valor da potenciacao eh %f",potenciacao);
	printf("\nObrigado por usar o programa\n");
	return 0;
}

//corpo de funcao
void _apresentacao()
{
	printf("\nOla! Tudo bem? O proposito deste programa eh fazer potenciacao sem utilizar a biblioteca math.h");
}

float _lerbase()
{
	float numero;
	printf("\nDigite a base desejado: ");
	scanf("%f",&numero);
	return numero;
}

float _lerexpoente()
{
	float numero;
	printf("\nDigite o expoente desejado: ");
	scanf("%f",&numero);
	return numero;
}

float _potenciacao(float base,float exp)
{
	float potencia=1;
	for(int i=1; i<=exp; i++){
		potencia=potencia*base;
	}
	return potencia;
}
