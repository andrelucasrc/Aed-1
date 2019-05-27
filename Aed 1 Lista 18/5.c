#include<stdlib.h>
#include<stdio.h>

//Cabeçalho de Função:
float _leReal();
void _atribuirMatriz(int lin,float array[lin][lin]);
float _maiorAcimaDaDiagonal(int lin,float array[lin][lin]);
float _maiorEntreAcimEAbai(int lin,float array[lin][lin]);

int main()
{
	int lin=3,
	    col=3;
	float maior;
	float array[lin][col];
	_atribuirMatriz(lin,array);
	maior=_maiorEntreAcimEAbai(lin,array);
	printf("O maior eh %f",maior);
	return 0;
}

float _leReal()
{
        float numero;
        printf("Digite o numero desejado: ");
        scanf("%f",&numero);
        return numero;
}

void _atribuirMatriz(int lin,float array[lin][lin])
{
	for(int i=0; i<lin; i++){
		for(int j=0; j<lin; j++){
			array[i][j]=_leReal();
		}//fim for j
	}//fim for i
}//fim função

float _maiorAcimaDaDiagonal(int lin,float array[lin][lin])
{
	float maior=array[0][1];
	for(int i=1; i<lin-1; i++){
		if(array[i][i+1]>maior){
			maior=array[i][i+1];
		}//fim if
	}//fim for
	return maior;
}//fim função

float _maiorAbaixoDaDiagonal(int lin,float array[lin][lin])
{
        float maior=array[0][1];
        for(int i=1; i<lin-1; i++){
                if(array[i+1][i]>maior){
                        maior=array[i+1][i];
                }//fim if
        }//fim for
        return maior;
}//fim função

float _maiorEntreAcimEAbai(int lin,float array[lin][lin])
{
	float maior,
	      acima=_maiorAcimaDaDiagonal(lin,array),
	      abaixo=_maiorAbaixoDaDiagonal(lin,array);
	maior=acima;
	if(acima<abaixo)
		maior=abaixo;
	return maior;
}//fim função
