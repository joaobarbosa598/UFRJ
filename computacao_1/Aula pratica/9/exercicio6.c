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
	TEMPO t1, t2, t3;
	int soma;

	puts("Entre com o primeiro tempo");
	scanf("%d %d %d", &t1.hora, &t1.minuto, &t1.segundo);
	puts("Entre com o segundo tempo");
	scanf("%d %d %d", &t2.hora, &t2.minuto, &t2.segundo);

	soma = ((t1.hora+t2.hora)*60*60) + ((t1.minuto+t2.minuto)*60) + t1.segundo+t2.segundo;

	t3.hora = (int)soma/3600;
	t3.minuto = soma%3600;
	t3.segundo = t3.minuto%60;
	t3.minuto/= (int)60;
	printf("%d %d %d\n", t3.hora, t3.minuto, t3.segundo);

	return 0;
}
