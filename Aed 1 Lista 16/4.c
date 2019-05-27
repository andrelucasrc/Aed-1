#include<stdlib.h>
#include<stdio.h>

int _lernumero();
void leArranjo(int array[]);
void ordena(int array[],int quantidade);
void escreveArranjo(int array[]);

int main() {
        int A[] = {6, 5, 4, 3, 2, 1};
        int B[] = {3, 1, 6, 4, 2, 5};
        int C[6];
        leArranjo(C);  // Preenche todo o arranjo com valores lidos
        ordena(A,5);   // Desloca o maior valor do arranjo para a última posição
        ordena(B,5);
        ordena(C,5);
        escreveArranjo(A);   // Escreve na tela todo o arranjo
        escreveArranjo(B);
        escreveArranjo(C);
        return 0;
}

int _lernumero()
{
        int numero;
        printf("\nDigite o numero desejado: ");
        scanf("%d",&numero);
        return numero;
}//fim _lernumero

void leArranjo(int array[])
{
        for(int i=0; i<6; i++){
                array[i]=_lernumero();
        }//fim for
}//fim leArranjo

void ordena(int array[],int quantidade)
{
        int maior,
            contador=0;
	    maior=array[0];
        for(int i=1; i<=quantidade; i++){    
                if(array[i]>maior){
                        maior=array[i];
                        contador=i;
                }//fim if
        }//fim for
	array[contador]=array[quantidade];		//Coloca o maior numero no final
	array[quantidade]=maior;
	if(quantidade>1){
		ordena(array,(quantidade-1));		//Diminui o limite o superior
	}//fim if
}//fim ordena

void escreveArranjo(int array[])
{
        printf("\nO valor do arranjo eh: ");
        for(int i=0; i<6; i++){
                printf("%d,\t",array[i]);
        }//fim for
        printf("\n");
}//fim escreveArranjo
