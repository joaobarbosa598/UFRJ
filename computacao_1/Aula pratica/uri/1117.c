/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double m1, m2, media;
	
	media = 0;

	scanf("%lf", &m1);
	while(m1 < 0 || m1 > 10)
	{
		printf("nota invalida\n");
		scanf("%lf", &m1);
	}
	media+=m1;
	scanf("%lf", &m2);
	while(m2 < 0 || m2 > 10)
	{
		printf("nota invalida\n");
		scanf("%lf", &m2);
	}
	media+=m2;
	media/=2;
	printf("media = %1.2f\n", media);
	
	return 0;
}

