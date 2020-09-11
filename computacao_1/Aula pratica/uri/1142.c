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
	
	for(i = 0; i < N; i++, k++)
	{
		for(j = 0; j < 3; j++, k++)
		{
			printf("%d ", k);
			if(j == 2)
			{
				printf("PUM");
			}
		}
		printf("\n");
	}
	
	return 0;
}


