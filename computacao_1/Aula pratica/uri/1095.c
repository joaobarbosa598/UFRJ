/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, k;
	i = 1;
	j = 60;
	
	for(k = 0; k <= 12; k++, i+=3, j-=5)
	{
		printf("I=%d J=%d\n", i, j);
	}
	
	
	return 0;
}

