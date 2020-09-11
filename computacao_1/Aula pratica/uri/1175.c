/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N[20];
	int i, number, temp;
	
	for(i = 0; i < 20; i++)
		N[i] = 0;
		
	for(i = 0; i < 20; i++)
	{
		scanf("%d", &number);
		N[i] = number;
	}
	
	for(i = 0; i < 10; i++)
	{
		temp = N[i];
		N[i] = N[19-i];
		N[19-i] = temp;
	}
	
	for(i = 0; i < 20; i++)
		printf("N[%d] = %d\n", i, N[i]);
	
	return 0;
}

