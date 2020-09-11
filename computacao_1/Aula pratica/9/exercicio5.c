/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>

typedef struct _TEMPO
{
	int hora, minuto, segundo;
}TEMPO;

int main(int argc, char **argv)
{
	TEMPO t1, t2;
	int total1, total2;

	puts("Entre com o primeiro tempo");
	scanf("%d %d %d", &t1.hora, &t1.minuto, &t1.segundo);
	puts("Entre com o segundo tempo");
	scanf("%d %d %d", &t2.hora, &t2.minuto, &t2.segundo);

	/* PRIMEIRA RESOLUCAO
	if(t1.hora > t2.hora)
		puts("O primeiro tempo e maior");
	else if(t1.hora < t2.hora)
		puts("O segundo tempo e maior");
	else
	{
		if(t1.minuto > t2.minuto)
			puts("O primeiro tempo e maior");
		else if(t1.minuto < t2.minuto)
			puts("O segundo tempo e maior");
		else
			{
				if(t1.segundo > t2.segundo)
					puts("O primeiro tempo e maior");
				else if(t1.segundo < t2.segundo)
					puts("O segundo tempo e maior");
				else
					puts("Os tempos sao iguais");
			}
	}*/

	/*SEGUNDA RESOLUCAO*/
	total1 = (t1.hora*60*60) + (t1.minuto*60) + (t1.segundo);
	total2 = (t2.hora*60*60) + (t2.minuto*60) + (t2.segundo);
	if(total1 > total2)
		puts("O primeiro tempo e maior");
	else if(total1 < total2)
		puts("O segundo tempo e maior");
	else
		puts("Os tempos sao iguais");

	return 0;
}
