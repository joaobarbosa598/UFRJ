/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X, Z, cont, soma;
	
	cont = 0;
	soma = 0;
	scanf("%d", &X);
	scanf("%d", &Z);
	
	for(; Z <= X ;)
		scanf("%d", &Z);
	
	for(; soma <= Z; X++)
	{
		soma+=X;
		cont+=1;
	}
	printf("%d\n", cont);
	
	return 0;
}


