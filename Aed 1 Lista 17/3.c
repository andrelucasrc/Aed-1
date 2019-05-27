#include<stdlib.h>
#include<stdio.h>

//Constante global:
const int lins=3;
const int cols=2;
//Cabeçalho de função
float _leNumero();
void _leMatriz(float array[][cols]);
int _qntOcorrenciaKeys(float array[][cols],float key);

int main()
{
	float matriz[lins][cols];
	int quantidade;
	_leMatriz(matriz);
	quantidade=_qntOcorrenciaKeys(matriz,2);
	printf("\nA quantidade eh %i\n",quantidade);
	return 0;
}


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

int _qntOcorrenciaKeys(float array[][cols],float key){
	int quantidade=0;
	for(int i=0; i<lins; i++){
        	for(int j=0; j<cols; j++){
        		if(array[i][j]==key){
				quantidade++;
			}//fim if
        	}//fim for j
    	}//fim for i
	return quantidade;
}//fim função
