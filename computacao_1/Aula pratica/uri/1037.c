/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	float K;
	
	scanf("%f", &K);
	
	if (K >= 0 && K <= 25)
	{
		printf("Intervalo [0,25]\n");
	}
	else if (K > 25 && K <= 50)
	{
		printf("Intervalo (25,50]\n");
	}
	else if (K > 50 && K <= 75)
	{
		printf("Intervalo (50,75]\n");
	}
	else if (K > 75 && K <= 100)
	{
		printf("Intervalo (75,100]\n");
	}
	else
	{
		printf("Fora de intervalo\n");
	}
	
	
	return 0;
}

