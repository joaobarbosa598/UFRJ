/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int i, quant, n, in;
	
	in = 0;
	scanf("%d", &quant);
	
	for(i = 0; i < quant; i++)
	{
		scanf("%d", &n);
		if(n >= 10 && n <= 20)
		{
			in+=1;
		}
	}
	printf("%d in\n", in);
	printf("%d out\n", quant - in);
	
	return 0;
}

