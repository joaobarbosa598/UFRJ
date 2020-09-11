/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double number, media;
	int i, positive;
	media = 0;
	positive = 0;
	
	for(i = 0; i < 6; i++)
	{
		scanf("%lf", &number);
		if(number > 0)
		{
			positive+=1;
			media+=number;
		}
	}
	media = media/positive;
	printf("%d valores positivos\n", positive);
	printf("%1.1f\n", media);
	
	return 0;
}

