/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i;
	
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++)
	{
		if(N%i == 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}


