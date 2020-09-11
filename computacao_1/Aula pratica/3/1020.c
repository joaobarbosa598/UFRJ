/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int idade, year, month, days, resto;
	
	scanf("%d", &idade);
	
	year = idade/365;
	resto = idade - year*365;
	month = resto/30;
	resto = resto - month*30;
	days = resto;
	while(days >= 30)
	{
		days-= 30;
	}
	
	printf("%d ano(s)\n", year);
	printf("%d mes(es)\n", month);
	printf("%d dia(s)\n", days); 
	
	
	
	return 0;
}

