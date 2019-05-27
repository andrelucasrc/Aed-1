#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

/***************************************************************
 * Assinatura da função: float _lernota()
 * Data da elaboração: 06/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Ler uma nota qualquer
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): int nota
 ****************************************************************
 */float _lernota();
/***************************************************************
 * Assinatura da função: bool _criaraquivo()
 * Data da elaboração: 06/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Criar um arquivo e informar se obteve sucesso ou não na criação dele
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): bool sucesso
 ****************************************************************
 */bool _criaarquivo();
/***************************************************************
 * Assinatura da função: void _arnotas()
 * Data da elaboração: 06/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Pedir e arquivar as notas dos alunos
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _arqnotas();
/***************************************************************
 * Assinatura da função: float _mediaarq()
 * Data da elaboração: 06/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Calcular a media de notas obtida nos arquivo
 * Dados de entrada (argumentos): void
 * Dado de saída (valor gerado pela função): float media
 ****************************************************************
 */float _mediaarq();
/***************************************************************
 * Assinatura da função: int _acimadamedia(float media)
 * Data da elaboração: 06/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Verificar quantos são os alunos acima da média da turma
 * Dados de entrada (argumentos): float media
 * Dado de saída (valor gerado pela função): int contador
 ****************************************************************
 */int _acimadamedia(float media);
/***************************************************************
 * Assinatura da função: void _escreverinfo(float media,int alunos)
 * Data da elaboração: 06/05/2019
 * Autor: André Lucas Ribeiro Costa
 * Objetivo: Escrever na tele os valores de media e a quantidade de alunos acima da média na sala
 * Dados de entrada (argumentos): float media, int alunos
 * Dado de saída (valor gerado pela função): void
 ****************************************************************
 */void _escreverinfo(float media,int alunos);

int main()
{
    	float media=0;
	int acima=0;
    	if(_criaarquivo()){
    	    _arqnotas();
    	    media=_mediaarq();
	    acima=_acimadamedia(media);
    	}
	_escreverinfo(media,acima);
    	return 0;
}

float _lernota()
{
    	float num;
    	printf("\nDigite a nota do aluno: ");
    	scanf("%f",&num);
    	return num;
}//fim lernota

bool _criaarquivo()
{
    	bool sucesso=false;
    	FILE *arq;
    	arq=fopen("notas.dat","w");
    	if(arq!=NULL)
    	    sucesso=true;
    	fclose(arq);
    	return sucesso;
}//fim criaarquivo

void _arqnotas()
{
    	const float flag=-1;
    	float nota;
    	FILE *arq=fopen("notas.dat","r+");
    	nota=_lernota();
    	while(nota>flag){
    	    fprintf(arq,"%f\n",nota);
    	    fflush(arq);
    	    nota=_lernota();
   	 }//fim while
   	 fclose(arq);
}//fim _arqnotas

float _mediaarq()
{
    	float nota,
    	      media=0;
    	int contador=0;
    	FILE *arq;
    	arq=fopen("notas.dat","r+");
    	fscanf(arq,"%f",&nota);
    	while(!feof(arq)){
    	    media+=nota;
    	    fscanf(arq,"%f",&nota);
    	    contador++;
    	}//fim while
    	if(contador!=0)
    	    media=media/contador;
    	fclose(arq);
    	return media;
}//fim _mediaarq

int _acimadamedia(float media)
{
	float nota;
	int contador=0;
	FILE *arq;
	arq=fopen("notas.dat","r+");
	fscanf(arq,"%f",&nota);
	while(!feof(arq)){
		if(nota>media){
			contador++;
			}//fim if
		fscanf(arq,"%f",&nota);
	}//fim while
	fclose(arq);
	return contador;
}//fim _acimadamedia

void _escreverinfo(float media,int alunos)
{
	printf("\nA media da turma eh de %f",media);
	printf("\nO numero de alunos acima da media eh %d\n",alunos);
}//fim _escreverinfo
