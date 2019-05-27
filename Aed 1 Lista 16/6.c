#include<stdlib.h>
#include<stdio.h>

//Constantes Globais:
const int LIM=10;
//Corpo de Função
void _fibonacci(int array[]);
void _escreverFib(int array[]);

int main()
{
	int fib[LIM];
	_fibonacci(fib);
	_escreverFib(fib);
	return 0;
}//fim main

void _fibonacci(int array[]){
	int fib,
	    f1=1,
	    f2=0;
	for(int i=0; i<LIM; i++){
		fib=f1+f2;              //adquirir o valor de fibonacci
		array[i]=f1;		//aplicar o valor de fibonacci no termo do arranjo
		f2=f1;			//mudar o valor de termo anterior para o proximo termo
		f1=fib;			//adquirir o termo de fibonacci
	}//fim for
}//fim _fibonacci

void _escreverFib(int array[]){
	for(int i=0; i<LIM; i++){
		printf("%d\n",array[i]);
	}//fim for
}//fim escreverFib
