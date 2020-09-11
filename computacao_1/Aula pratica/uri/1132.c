/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, soma, f;
	
	soma = 0;
	f = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x > y)
	{
		f = y;
		y = x;
		x = f;
		f = 0;
	}
	
	for( ;x <= y; x++)
	{
		if(x%13 == 0 && x!=y)
		{
			x+=1;
		}
		if(x <= y && x%13 != 0)
			soma+=x;
		f = 1;
	}
	if(f)
		printf("%d\n", soma);
	
	return 0;
}


