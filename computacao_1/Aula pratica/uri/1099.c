/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i, X, Y, soma, temp;
	
	soma = 0; temp = 0;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		if(X > Y)
		{
			temp = X;
			X = Y;
			Y = temp;
		}
		if(X%2 == 0)
			X+=1;
		else
			X+=2;
		for( ; X < Y ; X+=2)
		{
			soma+= X;
		}
		printf("%d\n", soma);
		soma = 0;
	}
	
	return 0;
}

