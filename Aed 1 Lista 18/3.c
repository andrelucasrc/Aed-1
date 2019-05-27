#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

//Cabeçalho de Função:
float _leReal();
void _atribuirMatriz(int lin,int col,float array[lin][col]);
bool _igualdadeLinhas(int lin,float array[lin][lin]);

int main()
{
	int lin=2,
	    col=2;
	bool ehIgual;
	float array[lin][col];
	_atribuirMatriz(lin,col,array);
	ehIgual=_igualdadeLinhas(lin,array);
	if(ehIgual)
		printf("Sao iguais");
	else
		printf("Nao sao iguais");
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

bool _igualdadeLinhas(int lin,float array[lin][lin])
{
	int linha=0,
	    linha2=0,
	    coluna=0;
	bool ehIgual=true;
	while(coluna<lin&&ehIgual){
		if(array[linha][coluna]!=array[linha2][linha2]){
			ehIgual=false;
		}//fim if
		coluna++;
		linha2++;
	}//fim while
	return ehIgual;
}//fim função
