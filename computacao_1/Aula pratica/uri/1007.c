/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int A, B, C, D, DIFERENCA;
	
	scanf("%d", &A);
	scanf("%i", &B);
	scanf("%i", &C);
	scanf("%d", &D);
	
	DIFERENCA = (A*B - C*D);
	printf("DIFERENCA = %d\n", DIFERENCA);
	
	return 0;
}

