/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double n1, n2, media;
	int i;
	i = 1;
	
	for(; i == 1 ;)
	{
		scanf("%lf", &n1);
		while(n1 > 10.0 || n1 < 0.0)
		{
			printf("nota invalida\n");
			scanf("%lf", &n1);
		}
		
		scanf("%lf", &n2);
		while(n2 > 10.0 || n2 < 0.0)
		{
			printf("nota invalida\n");
			scanf("%lf", &n2);
		}
		media = (n1+n2)/2;
		printf("media = %1.2f\n", media); 
		
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &i);
		while( i != 1.0 && i != 2.0)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &i);
		}
	}
	
	return 0;
}


