/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int bolasDeBoliche (int n);

int main(int argc, char **argv)
{
	int camadas, total;
	total = 0;
	
	scanf("%d", &camadas);

	
	total = bolasDeBoliche(camadas);
	
	printf("%d\n", total);
	
	return 0;
}

int bolasDeBoliche (int n)
{	
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n*n + bolasDeBoliche(n-1);
	}
	
}


