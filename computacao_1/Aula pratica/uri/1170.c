/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i, days;
	double C;	
	days = 0;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%lf", &C);
		while(C > 1)
		{
			C = C/2;
			days+=1;
		}
		printf("%d dias\n", days);
		days = 0;
	}
	
	return 0;
}

