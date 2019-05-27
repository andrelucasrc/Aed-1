#include<stdlib.h>
#include<stdio.h>

//prototipos de funcao
void _apresentacao();
float _leraio();
float _calculodearea(float raio);

int main()
{
    float raio,
          area;
    _apresentacao();
    raio=_leraio();
    area=_calculodearea(raio);
    printf("\nA area deste circulo eh igual a %.2f",area);
    return 0;
}

//corpo das funcoes
void _apresentacao()
{
    printf("\nOla! O objetivo deste programa eh calcular a area de um circulo.");
}

float _leraio()
{
    float raio;
    printf("\nDigite o valor do raio do circulo: ");
    scanf("%f",&raio);

    return raio;
}

float _calculodearea(float raio)
{
    const float pi=3.14;
          float area;
    area=raio*raio*pi;
    return area;
}
