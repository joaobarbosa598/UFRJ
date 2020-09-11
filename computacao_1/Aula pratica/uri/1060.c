/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, cont;
	double temp;
	cont = 0;	
	
	for( i = 0; i < 6; i++)
	{
		scanf("%lf", &temp);
		
		if(temp > 0)
		{
			cont++;
		}
	}
	printf("%d valores positivos\n", cont);
	
	return 0;
}

