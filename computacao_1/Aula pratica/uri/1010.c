/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	//AMOUNT significa quantidade de roupas nesse contexto
	//CODE significa código da roupa nesse contexto
	int CODE1, AMOUNT1, CODE2, AMOUNT2;
	float PRICE1, PRICE2, TOTAL;
	
	scanf("%d %d %f", &CODE1, &AMOUNT1, &PRICE1);
	scanf("%d %d %f", &CODE2, &AMOUNT2, &PRICE2);
	
	TOTAL = AMOUNT1*PRICE1+AMOUNT2*PRICE2;
	printf("VALOR A PAGAR: R$ %1.2f\n", TOTAL);		
	
	return 0;
}

