#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

//Constante global:
const int lins=3;
const int cols=2;
//Cabeçalho de função
bool _ehIgual(float array1[][cols],float array2[][cols]);
float _leNumero();
void _leMatriz(float array[][cols]);

int main()
{
	float m1[lins][cols],
	      m2[lins][cols];
	bool ehIgual;
	_leMatriz(m1);
	_leMatriz(m2);
	ehIgual=_ehIgual(m1,m2);
	if(ehIgual)
		printf("As duas matrizes sao iguais\n");
	else
		printf("As duas matrizes nao sao iguais\n");
	return 0;
}//fim main

bool _ehIgual(float array1[][cols],float array2[][cols]){
	bool ehIgual=true;
	int i=0,
	    j=0;
	while(i<lins&&j<cols||ehIgual){
		if(array1[i][j]!=array2[i][j]){
			ehIgual=false;
		}//fim if
		j++;
		if(j>=cols){
			j=0;
			i++;
		}//fim if
	}//fim while
	return ehIgual;
}//fim função

float _leNumero(){
    int numero;
    printf("Digite o valor desejado: ");
    scanf("%i",&numero);
    return numero;
}//fim função

void _leMatriz(float array[][cols]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            array[i][j]=_leNumero();
        }//fim for j
    }//fim for i
}//fim função
