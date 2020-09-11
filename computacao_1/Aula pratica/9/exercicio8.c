/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>
#include <stdlib.h>

const int linhas = 50;

typedef struct
{
	int hora, minuto, segundo;
}TEMPO;

int comparaTempo(TEMPO t1, TEMPO t2);

int main(int argc, char **argv)
{
	TEMPO tempos;
	TEMPO *t;
	int result;

	int i, j;

	t = (TEMPO *) malloc(linhas*sizeof(TEMPO));
	if(!t)
	{
		puts("ERROR");
		return 1;
	}

	for(i = 0; i < linhas; i++)
	{
		scanf("%d %d %d", &tempos.hora, &tempos.minuto, &tempos.segundo);
		*(t+i) = tempos;
	}

	for(i = 0; i < linhas; i++)
	{
		printf("%d %d %d\n", t[i].hora, t[i].minuto, t[i].segundo );
	}
	puts("FIM");

	for(j = 0; j < linhas; j++)
	{
		for(i = 0; i < linhas-1-j; i++)
		{
			result = comparaTempo(t[i], t[i+1]) == 1;
			if(result == 1)
			{
				tempos = t[i+1];
				t[i+1] = t[i];
				t[i] = tempos;
			}
		}
	}

	for(i = 0; i < linhas; i++)
	{
		printf("%d %d %d\n", t[i].hora, t[i].minuto, t[i].segundo );
	}
	puts("FIM2");

	return 0;
}

int comparaTempo(TEMPO t1, TEMPO t2)
{
	int total1, total2;

	total1 = (t1.hora*60*60) + (t1.minuto*60) + (t1.segundo);
	total2 = (t2.hora*60*60) + (t2.minuto*60) + (t2.segundo);
	if(total1 > total2)
		return 1;
	else if(total1 < total2)
		return -1;
	else
		return 0;
}
