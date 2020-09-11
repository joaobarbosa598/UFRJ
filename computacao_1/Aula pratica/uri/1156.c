/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double S;
	int i, j, k;
	S = 0;
	
	for( k = 0, i = 1, j = 1; k < 20; i+=2, j*=2, k++)
	{
		S+= (double)i/j;
	}
	printf("%1.2f\n", S);
	
	
	return 0;
}


