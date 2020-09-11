/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X[10];
	int i, N;
	
	for(i = 0; i < 10; i++)
		X[i] = 0;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &N);
		X[i] = N;
		if(X[i] <= 0)
			X[i] = 1;
		printf("X[%d] = %d\n", i, X[i]);
	}
	
	return 0;
}

