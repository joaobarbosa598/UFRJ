/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int number, quant1, quant2, quant5, quant10, quant20, quant50, quant100, resto;
	
	scanf("%d", &number);
	quant100 = number/100;
	resto = number - quant100*100;
	quant50 = resto/50;
	resto = resto - quant50*50;
	quant20 = resto/20;
	resto = resto - quant20*20;
	quant10 = resto/10;
	resto = resto - quant10*10;
	quant5 = resto/5;
	resto = resto - quant5*5;
	quant2 = resto/2;
	resto = resto - quant2*2;
	quant1 = resto/1;
	
	printf("%d\n", number);
	printf("%d nota(s) de R$ 100,00\n", quant100);
	printf("%d nota(s) de R$ 50,00\n", quant50);
	printf("%d nota(s) de R$ 20,00\n", quant20);
	printf("%d nota(s) de R$ 10,00\n", quant10);
	printf("%d nota(s) de R$ 5,00\n", quant5);
	printf("%d nota(s) de R$ 2,00\n", quant2);
	printf("%d nota(s) de R$ 1,00\n", quant1);
	
	
	return 0;
}

