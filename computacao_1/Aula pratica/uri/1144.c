/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i, j, k;
	
	k = 1;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++,k++)
	{
		for(j = 1; j < 4; j++)
		{
			if(j == 1)
				printf("%d ", k);
			else if(j == 2)
				printf("%d ", k*k);
			else if(j == 3)
				printf("%d", k*k*k);
		}
		printf("\n");
		for(j = 1; j < 4; j++)
		{
			if(j == 1)
				printf("%d ", k);
			else if(j == 2)
				printf("%d ", (k*k)+1);
			else if(j == 3)
				printf("%d", (k*k*k)+1);
		}
		printf("\n");
	}
	
	return 0;
}


