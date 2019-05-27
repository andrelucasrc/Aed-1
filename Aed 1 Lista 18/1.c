#include<stdlib.h>
#include<stdio.h>

//Corpo de Função:
float _leReal();
void _atribuirMatriz(int lin,int col,float array[lin][col]);
int _buscaMatriz(int lin,int col,float array[lin][col],float key);

int main()
{
	int lin=2,
	    col=2,
	    quantidade;
	float array[lin][col];
	_atribuirMatriz(lin,col,array);
	quantidade=_buscaMatriz(lin,col,array,2);
	printf("\nA quantidade eh igual a %d",quantidade);
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

int _buscaMatriz(int lin,int col,float array[lin][col],float key)
{
	int contador=0;
	for(int i=0; i<lin; i++){
		for(int j=0; j<col; j++){
			if(array[i][j]==key){
				contador++;
			}//fim if
		}//fim for j
	}//fim for i
	return contador;
}//fim função
