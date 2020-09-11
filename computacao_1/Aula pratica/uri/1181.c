/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	double M[12][12], value, result;
	int i, j, line;
	char T[80], sum[80] = "S", media[80] = "M";
	
	value = 0.0;
	result = 0.0;
	line = 0;
	
	scanf("%d", &line);
	scanf("%s", &T);
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
		{
			M[i][j] = 0.0;
		}
	}
	
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
		{
			scanf("%lf", &value);
			M[i][j] = value;
		}
	}
	
	for(i = line; i <= line; i++)
	{
		for(j = 0; j < 12; j++)
		{
			result = result + M[i][j];
		}
	}
	
	if(strcmp(T,sum) == 0)
	{
		printf("%1.1f\n", result);
	}
	else if(strcmp(T,media) == 0)
	{
		result = result/12;
		printf("%1.1f\n", result);
	}
	
	
	return 0;
}

