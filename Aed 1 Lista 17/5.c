#include<stdlib.h>
#include<stdio.h>

//Constantes Globais:
const int lins=3;
const int cols=2;
//Cabeçalhos de Função:
float _leNumero();
void _leMatriz(float array[][cols]);
float _media(float array[][cols]);
int _qtdAcimaMedia(float array[][cols],float media);

int main()
{
    	float matriz[lins][cols];
    	_leMatriz(matriz);
    	float media=_media(matriz);
	int qtdAcimaMedia=_qtdAcimaMedia(matriz,media);
	printf("\nA quantidade acima da media da matriz eh %d",qtdAcimaMedia);
   	return 0;
}

float _leNumero(){
    int numero;
    printf("Digite o valor desejado: ");
    scanf("%i",&numero);
    return numero;
}

void _leMatriz(float array[][cols]){
    for(int i=0; i<lins; i++){
        for(int j=0; j<cols; j++){
            array[i][j]=_leNumero();
        }//fim for j
    }//fim for i
}


float _media(float array[][cols]){
    float media=0;
    int contador=0;
    for(int i=0; i<lins; i++){
        for(int j=0; j<cols; j++){
            media+=array[i][j];
            contador++;
        }//fim for j
    }//fim for i
    media/=(float)contador;
    return media;
}

int _qtdAcimaMedia(float array[][cols],float media){
	int contador=0;
    	for(int i=0; i<lins; i++){
        	for(int j=0; j<cols; j++){
            		if(array[i][j]>media){
            			contador++;
			}//fim if
        	}//fim for j
    	}//fim for i
    	return contador;
}//fim função

