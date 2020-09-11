/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int x, y, temp;
	
	temp = 0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x > y)
	{
		temp = y;
		y = x;
		x = temp;
	}
	while( x < y )
	{
		x+=1;
		if(x%5 == 2 || x%5 == 3)
		{
			printf("%d\n", x);	
		}
		
	}
	
	return 0;
}


