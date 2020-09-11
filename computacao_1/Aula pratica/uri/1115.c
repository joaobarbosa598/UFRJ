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
	
	for(; X!=0 && Y!=0;)
	{
		if(X > 0 && Y > 0)
			printf("primeiro\n");
		else if(X < 0 && Y > 0)
			printf("segundo\n");
		else if(X < 0 && Y < 0)
			printf("terceiro\n");
		else if(X > 0 && Y < 0)
			printf("quarto\n");
		scanf("%d %d", &X, &Y);
	}
	
	return 0;
}

