/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double A, B, C, MEDIA;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	MEDIA = ((A*2)+(B*3)+(C*5))/10;
	printf("MEDIA = %1.1f\n", MEDIA);
	
	return 0;
}

