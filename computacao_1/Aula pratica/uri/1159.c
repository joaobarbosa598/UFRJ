/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X, soma, i;
	
	soma = 0;
	scanf("%d", &X);
	//digite 0 para parar o programa
	for(; X ;)
	{
		for(i = 0; i < 5; X++)
		{
			if(X%2 == 0)
			{
				soma+=X;
				i++;
			}
		}
		printf("%d\n", soma);
		soma = 0;
		scanf("%d", &X);		
	}
	
	return 0;
}


