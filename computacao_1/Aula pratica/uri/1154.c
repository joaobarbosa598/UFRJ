/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, cont;
	double media;
	
	i = 0;
	cont = 0;
	
	for(; i > -1 ;)
	{
		scanf("%d", &i);
		if(i > -1)
		{
			media+=i;
			cont+=1;
		}	
	}
	printf("%1.2f\n", media/cont);
	
	return 0;
}


