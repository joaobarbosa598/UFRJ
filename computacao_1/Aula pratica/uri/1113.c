/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X, Y;
	
	scanf("%d %d", &X, &Y);
	
	for(; X != Y ; )
	{
		if(X > Y)
			printf("Decrescente\n");
		else
			printf("Crescente\n");
		scanf("%d %d", &X, &Y);
	}
	
	return 0;
}

