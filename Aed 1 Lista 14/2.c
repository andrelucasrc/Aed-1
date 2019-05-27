#include<stdlib.h>
#include<stdio.h>

float _lenota();
float _notas(float aluno[]);
float _media(float aluno[],int contador);
float _acimadamedia(int contador,float aluno[],float media);

int main()
{
	int acima,
	    contador;
	const int LIM=100;//De 0-100 Numero Máximo de Alunos eh 101
	float aluno[LIM],
	      media;
	contador=_notas(&aluno[LIM]);
	media=_media(&aluno[LIM],contador);
	acima=_acimadamedia(contador,&aluno[LIM],media);
	printf("\nMedia %f\n",media);
	printf("\nAcima da Media %d",acima);
	return 0;
}

float _lenota()
{
	float nota;
	printf("\nDigite a nota do aluno: ");
	scanf("\n%f",&nota);
	return nota;
}

float _notas(float aluno[])
{
	float notas;
	int contador=0;
	const int flag=-1,
		  LIM=100;
	notas=_lenota();
	while(notas>flag&&contador<=LIM){
		aluno[contador]=notas;
		contador++;
		notas=_lenota();
	}//fim while
	return contador;
}//fim _arranotas

float _media(float aluno[],int contador)
{
	float media=0;
	int i=0;
	while(i<contador){
		media+=aluno[i];
		i++;
	}//fim for
	if(i>0)
		media/=i;
	return media;
}

float _acimadamedia(int contador,float aluno[],float media)
{
	int i=0,
	    acima=0;
	do{
		if(aluno[i]>media){
			acima++;
		}
		i++;
	}while(i<contador);
	return acima;
}
