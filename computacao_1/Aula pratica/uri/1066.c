/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int number, par, impar, positive, negative, i;
	par = 0;
	impar = 0;
	positive = 0;
	negative = 0;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &number);
		if(number%2 == 0)
			par+=1;
		else if(number%2 != 0)
			impar+=1;
		if(number > 0)
			positive+=1;
		else if(number < 0)
			negative+=1;
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positive);
	printf("%d valor(es) negativo(s)\n",  negative);
	
	return 0;
}

