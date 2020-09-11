/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int code, quant;
	float total;
	
	scanf("%d %d", &code, &quant);
	
	if(code == 1)
	{
		total = quant*4;
	}
	else if(code == 2)
	{
		total = quant*4.5;
	}
	else if(code == 3)
	{
		total = quant*5;
	}
	else if(code == 4)
	{
		total = quant*2;
	}
	else if(code == 5)
	{
		total = quant*1.5;
	}
	printf("Total: R$ %1.2f\n", total);
	
	
	
	
	return 0;
}

