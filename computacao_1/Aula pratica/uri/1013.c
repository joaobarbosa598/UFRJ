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
	int A, B, C;
	int MAIORAB, MAIORABC;
	
	scanf("%d %d %d", &A, &B, &C);
	
	MAIORAB = (A+B+abs(A-B))/2;
	MAIORABC = (MAIORAB+C+abs(MAIORAB-C))/2;
	
	printf("%d eh o maior\n", MAIORABC);
	
	
	return 0;
}

