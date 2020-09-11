/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double A, B, MEDIA;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	MEDIA = ((A*3.5)+(B*7.5))/11;
	printf("MEDIA = %1.5f\n", MEDIA);
	
	return 0;
}

