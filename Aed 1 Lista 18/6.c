#include<stdlib.h>
#include<stdio.h>

//Corpo de Função:
float _leReal();
void _atribuirMatriz(int lin,int col,float array[lin][col]);
int _somaColuna(int lin,int col,float array[lin][col],int coluna);

int main()
{
	int lin=3,
	    col=3;
	float quantidade;
	float array[lin][col];
	_atribuirMatriz(lin,col,array);
	quantidade=_somaColuna(lin,col,array,2);
	printf("\nA soma eh igual a %f",quantidade);
	return 0;
}

float _leReal()
{
	float numero;
	printf("Digite o numero desejado: ");
	scanf("%f",&numero);
	return numero;
}

void _atribuirMatriz(int lin,int col,float array[lin][col])
{
	for(int i=0; i<lin; i++){
		for(int j=0; j<col; j++){
			array[i][j]=_leReal();
		}//fim for j
	}//fim for i
}//fim função

int _somaColuna(int lin,int col,float array[lin][col],int coluna)
{
	float soma=0;
	for(int i=0; i<lin; i++){
		soma+=array[i][coluna-1];
	}//fim for i
	return soma;
}//fim função
