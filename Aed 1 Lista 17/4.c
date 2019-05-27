#include<stdlib.h>
#include<stdio.h>

//Constantes Globais:
const int lins=3;
const int cols=2;
//Cabeçalho de Função:
float _leNumero();
void _leMatriz(float array[][cols]);
float _maiorLinha(float array[][cols],int linha);

int main()
{
	float matriz[lins][cols];
	_leMatriz(matriz);
	printf("\nO maior valor da linha 0 eh %f",_maiorLinha(matriz,0));
	return 0;
}//fim main

float _leNumero(){
    float numero;
    printf("Digite o valor desejado: ");
    scanf("%f",&numero);
    return numero;
}//fim função

void _leMatriz(float array[][cols]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            array[i][j]=_leNumero();
        }//fim for j
    }//fim for i
}//fim função

float _maiorLinha(float array[][cols],int linha){
    float maior=array[linha][0];
    if(array[linha][1]>array[linha][0]){
        maior=array[linha][1];
    }//fim if
    return maior;
}
