/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, n;
	
	scanf("%d", &n);
	for(i = 0; i <= n; i++)
	{
		if(i%2 != 0)
		{
			printf("%d\n", i);
		}
	} 
	
	return 0;
}

