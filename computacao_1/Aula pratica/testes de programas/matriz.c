/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, v[5][5], n;
	
	n = 11;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++, n++)
		{
			v[i][j] = n;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++, n++)
		{
			printf("%d ", v[i][j]);
			//impressao é diferente de armazenamento
		}
		printf("\n");
	}
	
	return 0;
}


