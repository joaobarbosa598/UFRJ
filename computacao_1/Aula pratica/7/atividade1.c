/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

long int fat (long int n);

int main(int argc, char **argv)
{
	long int numero;
	while(1)
	{
		scanf("%ld", &numero);
		if(numero < 0) break;
		printf("O fatorial de %ld vale %ld\n", numero, fat(numero));
	}
	
	return 0;
}

long int fat (long int n)
{
	long int result;
	result = 1;
	while(n > 1)
	{
		result = result*n;
		n--;
	}
	return result;
}

