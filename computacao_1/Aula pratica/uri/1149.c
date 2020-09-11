/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int A, N, i , sum;
	
	sum = 0;
	
	scanf("%d %d", &A, &N);
	
	for(; N < 1 ;)
		scanf("%d", &N);
	
	for(i = 0; i < N; i++, A++)
	{
		sum+=A;
	}
	printf("%d\n", sum);
		
	
	return 0;
}


