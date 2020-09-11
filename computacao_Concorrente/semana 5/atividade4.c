#include <stdio.h>
#include <stdlib.h> 
#include <stdio.h>
#include <math.h>

//gcc -o atividade4 atividade4.c -lm

int ehPrimo(long long int n);

int main(int argc, char **argv)
{
	int confere = 0;
	long long int i, tamanhoVetor;

	scanf("%lld", &tamanhoVetor);

	for(i = 0; i < tamanhoVetor; i++)
	{
		confere+= ehPrimo(i);
	}
	printf("temos %d primos entre 0 e %lld(sem incluir o ultimo)\n", confere, tamanhoVetor);
	return 0;
}

int ehPrimo(long long int n) 
{
	int i;
	if (n<=1) return 0;
	if (n==2) return 1;
	if (n%2==0) return 0;
	for (i=3; i< sqrt(n)+1; i+=2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
