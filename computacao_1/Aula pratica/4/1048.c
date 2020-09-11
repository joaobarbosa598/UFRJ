/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	float salar, newsalar, ganho, cent;
	
	scanf("%f", &salar);
	
	if(salar > 0 && salar <= 400.00)
	{
		newsalar = salar*1.15;
		cent = 15;
	}
	else if(salar >= 400.01 && salar <= 800.00)
	{
		newsalar = salar*1.12;
		cent = 12;
	}
	else if(salar >= 800.01 && salar <= 1200.00)
	{
		newsalar = salar*1.10;
		cent = 10;
	}
	else if(salar >= 1200.01 && salar <= 2000.00)
	{
		newsalar = salar*1.07;
		cent = 7;
	}
	else if(salar > 2000)
	{
		newsalar = salar*1.04;
		cent = 4;
	}
	ganho = newsalar - salar;
	printf("Novo salario: %1.2f\n", newsalar);
	printf("Reajuste ganho: %1.2f\n", ganho);
	printf("Em percentual: %1.0f %%\n", cent);
	
	return 0;
}

