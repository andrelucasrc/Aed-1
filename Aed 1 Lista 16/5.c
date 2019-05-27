#include<stdlib.h>
#include<stdio.h>

//Constantes Globais:
const int LIM=100;
//Funções:
int _lerNumero();
int _atribuirArranjos(int array[]);
int _mediaDaTurma(int array[],int contador);
int _acimaDaMedia(int array[],int contador,int media);
void _escreverAcima(int acima);

int main()
{
	int idade[LIM],
	    contador,
	    media,
	    acima;
	contador=_atribuirArranjos(idade);
	media=_mediaDaTurma(idade,contador);
	acima=_acimaDaMedia(idade,contador,media);
	_escreverAcima(acima);
	return 0;
}//fim da main

int _lerNumero(){
	int numero;
	printf("\nDigite o numero desejado: ");
	scanf("%d",&numero);
	return numero;
}//fim _lerNumero

int _atribuirArranjos(int array[]){
	const int flag=0;
	int contador=0,
	    idade=_lerNumero();
	while(idade!=flag&&contador<LIM){
		array[contador]=idade;
		contador++;
		idade=_lerNumero();
	}//fim while
	return contador;
}//fim _atribuirArranjos

int _mediaDaTurma(int array[],int contador){
	int media=0;
	for(int i=0; i<contador; i++){
		media+=array[i];
	}//fim for
	media=media/contador;
	return media;
}//fim _mediaDaTurma

int _acimaDaMedia(int array[],int contador,int media){
	int acima=0;
	for(int i=0; i<contador; i++){
		if(array[i]>media){
			acima++;
		}//fim if
	}//fim for
	return acima;
}//fim _acimaDaMedia

void _escreverAcima(int media){
	printf("A quantidade de alunos acima da media eh %d",media);
}//fim escreverMedia
