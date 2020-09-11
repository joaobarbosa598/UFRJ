/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       13/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N[2][2], i, j;
	//posicoes do array, 00:01
					   //10:11
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			N[i][j] = 1;
		}
	}
	
	N[1][1] = 0;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d ", N[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

