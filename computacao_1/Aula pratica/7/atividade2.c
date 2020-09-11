/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/
//possivel errado

#include <stdio.h>

long int fat(long int n);
long int e (long int n, long int p);

int main(int argc, char **argv)
{
	long int n, p;
	while(1)
	{
		scanf("%ld %ld", &n, &p);
		if(n < p) break;
		printf("O valor da combinacao de %ld %ld a %ld vale %ld\n", n, p, p, e(n,p));
	}
	
	return 0;
}

long int fat(long int n)
{
	long int result;
	result = 1;
	while(n > 1)
	{
		result*=n;
		n--;
	}
	return result;
}

long int e (long int n, long int p)
{
	long int result;
	
	printf("%ld %ld\n", fat(n), fat(n-p)*fat(p));
	result = fat(n)/(fat(n-p)*fat(p));
	
	return result;
	
}


