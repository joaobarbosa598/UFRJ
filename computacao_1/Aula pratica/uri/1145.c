/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       07/04/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X, Y, i;
	
	scanf("%d %d", &X, &Y);
	
	
	for(i = 0; i < Y; i++)
	{
		if(i%X == 0 && i != 0)
		{
			printf("\n%d", i+1); 
		}
		else
		{
			printf("%d", i+1);	
		}
		if(i%X != X-1)
			printf(" ");
	}
	printf("\n");
	
	return 0;
}

