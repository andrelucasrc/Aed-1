#include<stdlib.h>
#include<stdio.h>

int _potenciacao(int base,int exp);
int _lerbase();
int _lerexp();

int main()
{
	int potencia,
	    base,
	    exp;
	base=_lerbase();
	exp=_lerexp();
	potencia=_potenciacao(base,exp);
	printf("\nO valor da potenciacao eh de %d",potencia);
	return 0;
}

int _potenciacao(int base,int exp)
{
	long int potencia=1;
	if(exp>0)
		potencia=base*_potenciacao(base,exp-1);
	return potencia;
}

int _lerbase()
{
	int base;
	printf("\nDigite o valor desejado para a base: ");
	scanf("%d",&base);
	return base;
}

int _lerexp()
{
	int exp;
	printf("\nDigite o valor desjado para a base: ");
	scanf("%d",&exp);
	return exp;
}
