/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double RAIO, PI, VOLUME;
	
	PI = 3.14159;
	scanf("%lf", &RAIO);
	VOLUME = (4.0/3) * PI * pow(RAIO,3);
	printf("VOLUME = %1.3f\n", VOLUME);
	
	return 0;
}

