/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, i, n, soma, fat;
	
	soma = 0;
	fat = 1;
	scanf("%d", &x);
	
	for(i = 0; i < x; i++)
	{
		scanf("%d", &n);
		for(; n!=fat; fat++)
		{
			if( n%fat == 0)
			{
				soma+= fat;
			}
		}
		if( soma == n )
			printf("%d eh perfeito\n", n);
		else
			printf("%d nao eh perfeito\n", n);
		
		soma = 0;
		fat = 1;
	}
	
	return 0;
}


