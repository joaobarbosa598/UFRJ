/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       08/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int N, i;
	double number1, number2, number3, media;
	
	scanf("%d", &N);
		
	for(i = 0; i < N; i++)
	{
		scanf("%lf %lf %lf", &number1, &number2, &number3);
		media = (2*number1 + 3*number2 + 5*number3)/10;
		printf("%1.1f\n", media);
	}
	
	return 0;
}

