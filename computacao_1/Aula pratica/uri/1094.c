/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i, number;
	int coelhos, ratos, sapos, total;
	double percentc, percentr, percents;
	char LETTER;
	
	coelhos = 0; ratos = 0; sapos = 0, total = 0;
	percentc = 0; percentr = 0; percents = 0;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %c", &number, &LETTER);
		if(LETTER == 'C')
		{
			coelhos+=number;
			total+= number;
		}
		else if(LETTER == 'S')
		{
			sapos+=number;
			total+= number;
		}
		else if(LETTER == 'R')
		{
			ratos+=number;
			total+= number;
		}
	}
	percentc = (double)(coelhos*100)/total;
	percentr = (double)(ratos*100)/total;
	percents = (double)(sapos*100)/total;
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %1.2f %%\n", percentc);
	printf("Percentual de ratos: %1.2f %%\n", percentr);
	printf("Percentual de sapos: %1.2f %%\n", percents);
	
	return 0;
}

