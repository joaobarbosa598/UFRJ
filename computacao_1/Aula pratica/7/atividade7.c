/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

double Pi (int termos);

int main(int argc, char **argv)
{
	int n;
	
	scanf("%d", &n);
	
	printf("%1.10f\n", Pi(n));
	
	return 0;
}

double Pi (int termos)
{
	double result;
	int i, k;
	result = 0.0;
	k = 1;
	
	for(i = 0; i < termos; i++)
	{
		//printf("resultado: %1.10f, k: %d\n", result, k);
		result = result + (double)(1.0/k);
		if(k > 0)
			k+=2;
		else
			k-=2;
		k*=-1;
	}
	result = result*4.0;
	return result;
	
}


