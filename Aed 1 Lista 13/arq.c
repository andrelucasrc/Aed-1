#include<stdlib.h>
#include<stdio.h>

int main()
{
	int num;
	FILE *arq;
	arq=fopen("exemplo.dat","w");
	fprintf(arq,"%d",17);
	fclose(arq);
	arq=fopen("exemplo.dat","a");
	fprintf(arq,"%d",3639);
	fclose(arq);
	arq=fopen("exemplo.dat","r");
	fscanf(arq,"%i",&num);
	printf("\n%i",num);
	fclose(arq);
	feof(arq);
	return 0;
}
