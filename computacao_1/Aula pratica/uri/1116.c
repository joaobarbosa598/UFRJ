/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       08/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, X, Y, i;
	double result;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		if(Y == 0)
		{
			printf("divisao impossivel\n");
		}
		else
		{
			result = (double)X/Y;
			printf("%1.1f\n", result);
		}
	}
	
	
	
	return 0;
}

