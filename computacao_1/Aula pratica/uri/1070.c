/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X, i;
	
	scanf("%d", &X);
	
	if(X%2 == 0)
	{
		X+= 1;
	}
	for(i = 0; i < 6; i ++)
	{
		printf("%d\n", X);
		X+= 2; 
	}
	
	return 0;
}

