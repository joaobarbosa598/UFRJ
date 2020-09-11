/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int number[100], i, maior, pos;
	
	scanf("%d", &number[0]);
	maior = number[0];
	
	for(i = 1; i < 100; i++)
	{
		scanf("%d", &number[i]);
		if(number[i] > maior)
		{
			maior = number[i];
			pos = i;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", pos+1);

	
	
	return 0;
}

