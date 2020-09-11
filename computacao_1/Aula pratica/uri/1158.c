/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i, j, X, Y, soma;
	
	soma = 0;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		for(j = 0; j < Y; X++)
		{
			if(X%2 != 0)
			{
				soma+=X;
				j++;
			}
		}
		printf("%d\n", soma);
		soma = 0;
	}
	
	return 0;
}


