/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int number, par, i;
	par = 0;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &number);
		if(number%2 == 0)
		{
			par+=1;
		}
	}
	printf("%d valores pares\n", par);
	
	return 0;
}

