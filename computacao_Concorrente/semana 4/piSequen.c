/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <math.h>

double calculaPiAux(long long int N);


int main(int argc, char **argv)
{
	long long int n;
	double pi = 4.0;
	
	scanf("%lld", &n);
	pi = pi*calculaPiAux(n);
	printf("pi eh %lf\n", pi);
	
	printf("pi eh realmente %lf\n", M_PI);
	
	return 0;
}

double calculaPiAux(long long int N)
{
	double num = 0.0;
	double aux = 0.0;
	int i;
	
	for(i = 0; i < N; i++, aux++)
	{
		if( i%2 == 0 )num += 1/(2*aux+1);
		else num -= 1/(2*aux+1);
	}
	return num;
}

