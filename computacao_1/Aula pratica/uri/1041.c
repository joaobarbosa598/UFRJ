/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	float X, Y;
	
	scanf("%f %f", &X, &Y);
	
	if(X > 0  && Y > 0)
	{
		printf("Q1\n");
	}
	else if(X < 0 && Y > 0)
	{
		printf("Q2\n");
	}
	else if(X < 0 && Y < 0)
	{
		printf("Q3\n");
	}
	else if(X > 0 && Y < 0)
	{
		printf("Q4\n");
	}
	else if(X == 0 && Y == 0)
	{
		printf("Origem\n");
	}
	else if(X == 0 && Y != 0)
	{
		printf("Eixo Y\n");
	}
	else if(X != 0 && Y == 0)
	{
		printf("Eixo X\n");
	}
	
	
	return 0;
}

