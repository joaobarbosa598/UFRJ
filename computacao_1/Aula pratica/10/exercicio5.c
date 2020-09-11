/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       19/05/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, duck[32], k;
	char file[32];
	k = 1;
	FILE *pa;
	
	fgets(file, 31, stdin);
	
	pa = fopen(file, "r");
	
	if(pa == NULL)
	{
		printf("Arquivo nao pode ser aberto\n");
		return 1;
	}
	
	j = 0;
	
	while(k)
	{
		fscanf(pa, "%d", &i);
		if(feof(pa))
		{
			puts("Acabou");
			k = 0;
		}
		else
			printf("%d\n", i);
		
		if(j < 6)
		{
			duck[j] = i;
			j++;
		}
	}
	
	for(j=5; j >= 0; j--)
	{
		printf("%d\n", duck[j]);
	}
	
	
	return 0;
}
