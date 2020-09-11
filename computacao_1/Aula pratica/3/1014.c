/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int X;
	float Y, GASTO;
	
	scanf("%d", &X);
	scanf("%f", &Y);
	
	GASTO = X/Y;
	
	printf("%1.3f km/l\n", GASTO);
	
	
	return 0;
}

