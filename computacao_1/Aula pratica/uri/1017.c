/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int time, veloc;
	float distance, litros, gasto;
	gasto = 12;
	
	scanf("%d", &time);
	scanf("%d", &veloc);
	
	distance = time*veloc;
	
	litros = distance/gasto;
	printf("%5.3f\n", litros);	
	
	return 0;
}

