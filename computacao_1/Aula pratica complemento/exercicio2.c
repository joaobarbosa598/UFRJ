/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       19/05/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	char nome[32];
	FILE *pa;
	double m, n;
	int i;
	
	fgets(nome, 32, stdin);
	pa = fopen(nome, "w");
	
	if( pa == NULL)
	{
		printf("Arquivo nao pode ser aberto\n");
		return 1;
	}
	
	for(i = 0; i < 5; i++)
	{
		scanf("%lf %lf", &m, &n);
		fprintf(pa, "%1.2f ", m);
		fprintf(pa, "%1.2f\n", m);
	}
	
	rewind(pa);
	printf("\nTerminei de escrever, agora vou ler.\n");
	
	return 0;
}

