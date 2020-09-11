/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>

typedef struct _FRACAO
{
	float numerador, denominador;
}FRACAO;

int main(int argc, char **argv)
{
	FRACAO f1, f2;
	double soma, subtracao, produto, divisao;

	scanf("%f %f", &f1.numerador, &f1.denominador);
	scanf("%f %f", &f2.numerador, &f2.denominador);
	if(!f1.denominador || !f2.denominador)
	{
		puts("DENOMINADOR INVALIDO");
		return 1;
	}

	if(f1.denominador == f2.denominador)
	{
		soma = (f1.numerador+f2.numerador)/f1.denominador;
		subtracao = (f1.numerador-f2.numerador)/f1.denominador;
	}
	else
	{
		soma = (f1.numerador*f2.denominador+f2.numerador*f1.denominador)/(f1.denominador*f2.denominador);
		subtracao = (f1.numerador*f2.denominador-f2.numerador*f1.denominador)/(f1.denominador*f2.denominador);
	}
	produto = (f1.numerador*f2.numerador)/(f1.denominador*f2.denominador);
	divisao = (f1.numerador*f2.denominador)/(f1.denominador*f2.numerador);

	printf("soma:%1.2f subtracao:%1.2f produto:%1.2f divisao:%1.2f", soma, subtracao, produto, divisao);


	return 0;
}
