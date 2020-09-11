/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

void Converter (int numeroBase10, int numberoBase2[32]);

int main(int argc, char **argv)
{
	int number, base2[32];
	
	scanf("%d", &number);
	
	Converter(number, base2);
	
	return 0;
}

void Converter (int numeroBase10, int numeroBase2[32])
{
	int i;
	
	for(i = 0; i < 32; i++)
		numeroBase2[i] = 0;
		
	for( i = 0; numeroBase10; i++)
	{
		numeroBase2[i] = numeroBase10%2;
		numeroBase10/=2;
	}
	for(i = 31; i >= 0; i--)
	{
		printf("%d", numeroBase2[i]);
	}
	printf("\n");
}










