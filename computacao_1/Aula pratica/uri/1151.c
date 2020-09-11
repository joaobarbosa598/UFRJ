/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, r0, r1, result, y, j;
	result = 1;
	r1 = 0;
	y = 0;
	r0 = 0;
	
	scanf("%d", &N);
		
	for(j = 0; j < N - 2 ; j++)
	{
		r1 = result;
		result = result + r0;
		r0 = r1;
		if(y == 0)
		{
			printf("0 1 %d ", result);
			y = 1;
		}
		else if( j == N - 3 )
			printf("%d\n", result);
		else
			printf("%d ", result);
	}
	
	return 0;
}

