/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int combus, f, alcool, gasolina, diesel;
	
	f = 1;
	alcool = 0;
	gasolina = 0;
	diesel = 0;
	
	for(; f ; )
	{
		scanf("%d", &combus);
		if(combus == 4)
			f = 0;
		else if(combus == 1)
			alcool+= 1;
		else if(combus == 2)
			gasolina+=1;
		else if(combus == 3)
			diesel+=1;
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	
	return 0;
}


