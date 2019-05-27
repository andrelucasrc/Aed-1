#include<stdlib.h>
#include<stdio.h>

//Constantes Globais:
const int LIM=100;
const int FLAG=0;
//Declaração de função:
int _verificacaoDeNegativos(float array[],int quantidade);
void _escreverQuantidade(int contador);
float _lerNumero();
int _atribuirArranjo(float array[]);

int main()
{
	float numero[LIM];
	int contador,
	    quantNeg;
	contador=_atribuirArranjo(numero);
	quantNeg=_verificacaoDeNegativos(numero,contador);
	_escreverQuantidade(quantNeg);
	return 0;
}//fim main

int _verificacaoDeNegativos(float array[],int quantidade){
	int contador=0;
	if(quantidade>=0){
		contador=_verificacaoDeNegativos(array,(quantidade-1));
	}//fim if
	if(array[quantidade]<0){
		contador++;
	}//fim if
	return contador;
}//fim funçao

void _escreverQuantidade(int contador){
	printf("\nA quantidade de numeros negativos nesta arranjo eh %d",contador);
}//fim função

float _lerNumero(){
	float numero;
	printf("\nDigite o valor desejado [0 para sair]: ");
	scanf("%f",&numero);
	return numero;
}//fim função

int _atribuirArranjo(float array[]){
	int contador=0,
	    numero;
	    numero=_lerNumero();
	while(contador<LIM&&numero!=FLAG){
		array[contador]=numero;
		contador++;
		numero=_lerNumero();
	}//fim while
	return contador;
}//fim função
