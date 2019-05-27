#include<stdlib.h>
#include<stdio.h>

//prototipo de funcao
void _apresentacao();
float _lerlado();
float _calculodeperimetro(float lado);
int main()
{
    float lado,
          perimetro;
    _apresentacao();
    lado=_lerlado();
    perimetro=_calculodeperimetro(lado);
    printf("\nO perimetro deste quadrado eh de %f",perimetro);

    return 0;
}

void _apresentacao()
{
    printf("\nOla! O objetivo deste programa eh de calcular o perimetro de um quadrado qualquer");
}

float _lerlado()
{
    float lado;
    printf("\nDigite o valor do lado do quadrado: ");
    scanf("%f",&lado);

    return lado;
}

float _calculodeperimetro(float lado)
{
    float perimetro;
    perimetro=4.0*lado;

    return perimetro;
}

//para variaveis "nome" e para funcoes "_nome"
