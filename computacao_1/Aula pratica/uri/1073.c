/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i, quad;
	
	quad = 0;
	scanf("%d", &N);
	
	for(i = 0; i < N; )
	{
		i++;
		if(i%2 == 0)
		{
			quad = i*i;
			printf("%d^2 = %d\n", i, quad);
		}
	}
	
	return 0;
}

