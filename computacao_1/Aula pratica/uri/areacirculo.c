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
	double raio, pi, area;
	pi = 3.14159;
	scanf("%lf", &raio);
	area = pi*pow(raio,2);
	printf("A=%1.4lf\n", area);
	
	
	return 0;
}

