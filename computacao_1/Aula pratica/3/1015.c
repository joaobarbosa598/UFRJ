/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float x1, y1, x2, y2, DISTANCIA;
	
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	
	
	DISTANCIA = sqrt(pow(x2 - x1,2)+pow(y2 - y1,2));
	printf("%1.4f\n", DISTANCIA);
		
	
	return 0;
}

