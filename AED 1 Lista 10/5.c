#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

//Prototipo de funcoes
void _apresentacao();
int _lerano();
bool _condicao1(int ano);
bool _condicao2(int ano);
bool _condicao3(int ano);
bool _anobi(bool condi1,bool condi2,bool condi3);

int main()
{
	int ano;
	bool condicao1,
	     condicao2,
	     condicao3;
	_apresentacao();
	ano=_lerano();
	condicao1=_condicao1(ano);
	condicao2=_condicao2(ano);
	condicao3=_condicao3(ano);
	if(_anobi(condicao1,condicao2,condicao3))
		printf("\nO ano %d eh bissexto\n",ano);
	else
		printf("\nO ano %d nao eh bissexto\n",ano);

	return 0;
}//fim da main

//corpo de funcoes
void _apresentacao()//apresentacao do programa
{
	printf("\nOla! Tudo bem? O objetivo deste programa eh de verificar se o ano eh bissexto ou nao");
}//fim _apresentacao()

int _lerano()//ler o ano desejado
{
	int ano;
	printf("\nDigite o ano desejado: ");
	scanf("%d",&ano);
	return ano;
}//fim _lerano()

bool _condicao1(int ano)//condicao1 divisivel por 4
{
	bool condicao=false;
	if(ano%4==0)
		condicao=true;
	return condicao;
}//fim _condicao1()

bool _condicao2(int ano)//condicao2 divisivel por 100
{
	bool condicao=false;
	if(ano%100==0)
		condicao=true;
	return condicao;
}//fim _condicao2()

bool _condicao3(int ano)//condicao3 divisivel por 400
{
	bool condicao=false;
	if(ano%400==0)
		condicao=true;
	return condicao;
}//fim _condicao3()

bool _anobi(bool condi1,bool condi2,bool condi3)//verificacao de ano bissexto
{
	bool anobi=false;
	if(condi1){
		if(condi2==false)
			anobi=true;
		else if(condi3)
			anobi=true;
	}//fim do if
	else if(condi1==false){
		if(condi3)
			anobi=true;
	}//fim do else
	return anobi;
}//fim _anobi()
