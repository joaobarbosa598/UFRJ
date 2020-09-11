/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	char NOME[20];
	double SALARY, AMOUNT, TOTAL;
	
	scanf("%s", &NOME);
	scanf("%lf", &SALARY);
	scanf("%lf", &AMOUNT);
	
	TOTAL = (AMOUNT*0.15)+SALARY;
	
	printf("TOTAL = R$ %1.2f\n", TOTAL);
	
	return 0;
}

