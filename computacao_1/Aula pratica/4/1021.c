/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int cents, moeda05, moeda025, moeda010, moeda005, moeda001,
	value, quant2, quant5, quant10, quant20, quant50, quant100, resto, moeda1;
	
	scanf("%d.%d", &value, &cents);
	
	quant100 = value/100;
	resto = value - quant100*100;
	
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
	
	
	moeda1 = resto;
	
	moeda05 = cents/50;
	resto = cents - moeda05*50;
	
	moeda025 = resto/25;
	resto = resto - moeda025*25;
	
	moeda010 = resto/10;
	resto = resto - moeda010*10;
	
	moeda005 = resto/5;
	resto = resto - moeda005*5;
	
	moeda001 = resto;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", quant100);
	printf("%d nota(s) de R$ 50.00\n", quant50);
	printf("%d nota(s) de R$ 20.00\n", quant20);
	printf("%d nota(s) de R$ 10.00\n", quant10);
	printf("%d nota(s) de R$ 5.00\n", quant5);
	printf("%d nota(s) de R$ 2.00\n", quant2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda1);
	printf("%d moeda(s) de R$ 0.50\n", moeda05);
	printf("%d moeda(s) de R$ 0.25\n", moeda025);
	printf("%d moeda(s) de R$ 0.10\n", moeda010);
	printf("%d moeda(s) de R$ 0.05\n", moeda005);
	printf("%d moeda(s) de R$ 0.01\n", moeda001);
	
	return 0;
}

