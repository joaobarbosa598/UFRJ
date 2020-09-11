/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned long long int FIB[61];
	unsigned long long int i, j, temp;
	int k;
	
	i = 0; j = 1;
	FIB[0] = 0; FIB[1] = 1;
	printf("Fib(%llu) = %llu\n", i, FIB[i]); 
	printf("Fib(%llu) = %llu\n", j, FIB[j]); 
	
	for(k = 2; k < 59 ; k++ )
	{
		FIB[k] = i+j;
		printf("Fib(%d) = %llu\n", k, FIB[k]); 
		temp = j;
		j = FIB[k];
		i = temp;
	}
	
	return 0;
}


