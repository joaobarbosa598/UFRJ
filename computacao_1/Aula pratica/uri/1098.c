/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double i, j, k, w, m;
	
	i = 0;
	j = 1;
	m = 0.2;
	for(k = 0; k < 11; k++)
	{
		for(w = 0;  w < 3; w++)
		{
			if(i == 0.0)
				printf("I=%lg J=%lg\n", i, j);
			else if(i > 1.8 || i == 1.0)
			{
				printf("I=%lg J=%lg\n", i, j);
			}
			else
			{
				printf("I=%lg J=%lg\n", i, j);
			}
			j++;
		}
		i+= m;
		j+= m;
		j-=3;
		
	} 
	
	return 0;
}

