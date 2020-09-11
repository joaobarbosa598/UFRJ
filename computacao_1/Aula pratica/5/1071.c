/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       07/04/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X, Y, temp, i, soma;
	
	soma = 0;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if(X > Y)
	{
		temp = Y;
		Y = X;
		X = temp;
	}
	
	for(i = X+1; i < Y; i++)
	{
		if(i%2 != 0)
		{
			soma = soma + i;
		}
			
	}
	printf("%d\n", soma);
	
	return 0;
}

