#include<stdlib.h>
#include<stdio.h>

//Constantes Globais:
const int lins1=3;
const int cols1=2;
//Cabeçalhos de Função:
void _colaNaSegunda(int array1[][2],int array2[][2]);
void _escreverMatriz(int array[][2]);

int main()
{
	int M1[][2]={{1,2},{3,4},{5,6}},
	    M2[][2]={{6,5},{4,3},{2,1}};
	_colaNaSegunda(M1,M2);
	_escreverMatriz(M2);
	return 0;
}//fim main

void _colaNaSegunda(int array1[][2],int array2[][2]){
	for(int i=0; i<lins1; i++){
		for(int j=0; j<cols1; j++){
			array2[i][j]=array1[i][j];
		}//fim for j
	}//fim for i
}//fim função

void _escreverMatriz(int array[][2]){
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("Matriz[%i][%i]=%d\n",i,j,array[i][j]);
        }//fim for j
    }//fim for i
}//fim função
