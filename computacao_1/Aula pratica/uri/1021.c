/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double value;
	int moeda05, moeda025, moeda010, moeda005, moeda001, 
	quant2, quant5, quant10, quant20, quant50, quant100, resto, moeda1;
	
	scanf("%lf", &value);
	value = value*100;
	
	quant100 = value/10000;
	resto = value - quant100*10000;
	
	quant50 = resto/5000;
	resto = resto - quant50*5000;
	
	quant20 = resto/2000;
	resto = resto - quant20*2000;
	
	quant10 = resto/1000;
	resto = resto - quant10*1000;
	
	quant5 = resto/500;
	resto = resto - quant5*500;
	
	quant2 = resto/200;
	resto = resto - quant2*200;
	
	
	moeda1 = resto/100;
	resto = resto - moeda1*100;
	
	moeda05 = resto/50;
	resto = resto - moeda05*50;
	
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

