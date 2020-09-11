/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       19/05/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char file[32];
	char nome[21];
	double media;
	int i;
	FILE *pa;
	
	fgets(file, 31, stdin);
	
	pa = fopen(file, "w");
	
	if(pa == NULL)
	{
		printf("Arquivo nao pode ser aberto\n");
		return 1;
	}
	
	for(i = 0; i < 5; i++)
	{
		fgets(nome, 20, stdin);
		nome[strcspn(nome,"\n")] = '\0';
		scanf("%lf", &media);
		getchar();
		fprintf(pa, "%s ", nome);
		fprintf(pa, "%1.2f\n", media);
	}
	
	rewind(pa);
	printf("\nTerminei de escrever, agora vou ler.\n");
	
	return 0;
}

