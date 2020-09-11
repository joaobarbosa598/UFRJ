/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       07/04/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double S;
	int d;
	S = 0;
	
	for(d = 1; d <= 100; d++)
	{
		S = S + 1.0/d;
	}
	
	printf("%1.2f\n", S);
	
	return 0;
}

