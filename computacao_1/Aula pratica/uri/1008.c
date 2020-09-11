/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int NUMBER, HOUR;
	float PERHOUR, SALARY;
	
	scanf("%d", &NUMBER);
	scanf("%d", &HOUR);
	scanf("%f", &PERHOUR);
	
	SALARY = PERHOUR*HOUR;
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %1.2f\n", SALARY);	
	
	return 0;
}

