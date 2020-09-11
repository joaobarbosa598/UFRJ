/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, i;
	
	x = 1;
	
	for(; x ;)
	{
		scanf("%d", &x);
		
		for(i = 1; (i <= x) && (x!=0); i++)
		{
			if(i != x)
				printf("%d ", i);
			else
				printf("%d\n", i);
		}
	}
	
	return 0;
}


