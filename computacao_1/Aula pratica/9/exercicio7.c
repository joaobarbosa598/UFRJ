/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>

const int pos = 1;
const int neg = -1;
const int null = 0;

typedef struct
{
	int hora, minuto, segundo;
}TEMPO;

int comparaTempo(TEMPO t1, TEMPO t2);

int main(int argc, char **argv)
{
	TEMPO t1, t2;
	int result;

	puts("Entre com o primeiro tempo");
	scanf("%d %d %d", &t1.hora, &t1.minuto, &t1.segundo);
	puts("Entre com o segundo tempo");
	scanf("%d %d %d", &t2.hora, &t2.minuto, &t2.segundo);

	result = comparaTempo(t1,t2);
	if(result == 1)
		puts("O primeiro tempo e maior");
	else if(result == -1)
		puts("O segundo tempo e maior");
	else if(!result)
		puts("Os tempos sao iguais");
	else
		puts("ERROR");

	return 0;
}

int comparaTempo(TEMPO t1, TEMPO t2)
{
	int total1, total2;

	total1 = (t1.hora*60*60) + (t1.minuto*60) + (t1.segundo);
	total2 = (t2.hora*60*60) + (t2.minuto*60) + (t2.segundo);
	if(total1 > total2)
		return pos;
	else if(total1 < total2)
		return neg;
	else
		return null;
}
