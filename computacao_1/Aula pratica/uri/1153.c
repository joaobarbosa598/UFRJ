/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i, fat;
	
	fat = 1;
	scanf("%d", &N);
	
	for(i = 1; i <= N;  i++)
	{
		fat*=i;
	}
	printf("%d\n", fat);	
	
	return 0;
}


