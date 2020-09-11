/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N[10];
	int i, start;
	
	scanf("%d", &start);
	
	for(i = 0; i < 10; i++, start*=2 )
	{
		N[i] = start;
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}


