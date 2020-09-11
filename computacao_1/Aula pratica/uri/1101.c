/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int M, N, temp, soma;
	M = 1;
	N = 1;
	
	scanf("%d %d", &M, &N);
	while( M > 0 && N > 0)
	{
		if(N > M)
		{
			temp = M;
			M = N;
			N = temp;
		}
		soma = M + N;
		printf("%d ", N);
	
		while(N < M && N+1 != M)
		{
			N+=1;
			printf("%d ", N);
			soma = soma + N;
		}
		printf("%d ", M);
		printf("Sum=%d\n", soma);
		scanf("%d %d", &M, &N);
	}	
	
	return 0;
}

