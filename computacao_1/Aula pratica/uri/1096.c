/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, j, k, contador9;
	i = 1;
	j = 7;
	contador9 = 0;
	
	for(k = 0; k < 3; )
	{
		if(j < 5 && k == 2)
		{
			j = 7;
			i+= 2;
			k = 0;
		}
		else if(j == 5)
			k = 1;
		if(i >= 9 && i <= 13)
		{
			i = 9;
			contador9+= 1;
		}
		if(contador9 == 3)
			k = 20;
		printf("I=%d J=%d\n", i, j);
		k++;
		j--;
	}		
	
	return 0;
}

