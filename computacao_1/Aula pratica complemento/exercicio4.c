/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       19/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	char file[32];
	
	FILE *pa;
	
	fgets(file, 31, stdin);
	
	pa = fopen(file, "r");
	
	while(1)
	{
		fscanf(pa, "%d", &i);
		if(feof(pa))
		{
			puts("Acabou");
			break;
		}
		printf("%d\n", i);
	}
	
	return 0;
}

