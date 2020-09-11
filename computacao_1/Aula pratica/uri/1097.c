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
	k = 0;
	contador9 = -1;
	
	for( ; k < 3; )
	{	
		printf("I=%d J=%d\n", i, j);
		if( k == 2 )
		{	
			k = -1;	
			if( j == 5 || j == 7 || j == 11 || j == 9 || j == 13)
			{
				j+= 5;
			}
			i+=2;
		}	
		if(i >= 9 && i <= 13)
		{
			i = 9;
			contador9+= 1;
		}
		if(contador9 == 3)
			k = 20;
		k++;
		j--;
	}		
	
	return 0;
}

