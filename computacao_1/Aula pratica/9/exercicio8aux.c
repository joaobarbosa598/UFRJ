/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>
#include <stdlib.h>

const int linhas = 50;
const int colunas = 3;

typedef struct
{
	int hora, minuto, segundo;
}TEMPO;

int main(int argc, char **argv)
{
	TEMPO tempos;
	int **t;
	int i, j;

	/*Alocando as linhas na matriz*/
	t = (int **) malloc(linhas*sizeof(int *));
	if(!t)
	{
		puts("ERROR");
		return 1;
	}
	/*Alocando para cada linha, o numero de colunas desejadas*/
	for(i = 0; i < linhas; i++)
	{
			*(t+i) = (int *) malloc(colunas*sizeof(int) );
			if(!*(t+i))
			{
				puts("ERROR");
				return 1;
			}
	}

	/*PRIMEIRA RESOLUCAO
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		{
			if(!j)
			{
				scanf("%d", &tempos.hora);
				*(*(t+i)+j) = tempos.hora;
			}
			else if(j == 1)
			{
				scanf("%d", &tempos.minuto);
				*(*(t+i)+j) = tempos.minuto;
			}
			else if(j == 2)
			{
				scanf("%d", &tempos.segundo);
				*(*(t+i)+j) = tempos.segundo;
			}
		}
	}*/

	/*SEGUNDA RESOLUCAO*/
	for(i = 0, j = 0; i < linhas; i++)
	{
		scanf("%d %d %d", &tempos.hora, &tempos.minuto, &tempos.segundo);
		*(*(t+i)+j) = tempos.hora;
		*(*(t+i)+j+1) = tempos.minuto;
		*(*(t+i)+j+2) = tempos.segundo;
	}

	for(i = 0, j = 0; i < linhas; i++)
	{
		printf("%d %d %d\n", t[i][j], t[i][j+1], t[i][j+2] );
	}


	return 0;
}
