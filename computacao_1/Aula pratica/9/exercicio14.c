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

double soma (FRACAO a, FRACAO b);
double subtracao (FRACAO a, FRACAO b);
double produto (FRACAO a, FRACAO b);
double divisao (FRACAO a, FRACAO b);

int main(int argc, char **argv)
{
	FRACAO f1, f2;
	double plus, minus, multpli, division;

	scanf("%f %f", &f1.numerador, &f1.denominador);
	scanf("%f %f", &f2.numerador, &f2.denominador);
	if(!f1.denominador || !f2.denominador)
	{
		puts("DENOMINADOR INVALIDO");
		return 1;
	}

	plus = soma(f1,f2);
	minus = subtracao(f1,f2);
	multpli = produto(f1,f2);
	division = divisao(f1,f2);

	printf("soma:%1.2f subtracao:%1.2f produto:%1.2f divisao:%1.2f", plus, minus, multpli, division);


	return 0;
}


double soma (FRACAO a, FRACAO b)
{
	double result;
	if(a.denominador == b.denominador)
	{
		result = (a.numerador+b.numerador)/a.denominador;
	}
	else
	{
		result = (a.numerador*b.denominador+b.numerador*a.denominador)/(a.denominador*b.denominador);
	}
	return result;
}

double subtracao (FRACAO a, FRACAO b)
{
	double result;
	if(a.denominador == b.denominador)
	{
		result = (a.numerador-b.numerador)/a.denominador;
	}
	else
	{
		result = (a.numerador*b.denominador-b.numerador*a.denominador)/(a.denominador*b.denominador);
	}
	return result;
}

double produto (FRACAO a, FRACAO b)
{
	double result;
	result = (a.numerador*b.numerador)/(a.denominador*b.denominador);
	return result;
}

double divisao (FRACAO a, FRACAO b)
{
	double result;
	result = (a.numerador*b.denominador)/(a.denominador*b.numerador);
	return result;
}
