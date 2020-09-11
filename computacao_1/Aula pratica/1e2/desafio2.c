/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int testes;
	float notateste,
		  mediateste,
		  prova,
		  notafinal;
	
	mediateste = 0;
	scanf("%d", &testes);
	int i = 0;
	for(;i < testes;)
	{
		scanf("%f", &notateste);
		mediateste = mediateste+notateste;
		//printf("%i %f\n", i, testes);
		i++;
	}
	
	scanf("%f", &prova);
	
	mediateste = mediateste/testes;
	notafinal = (0.8*prova)+(0.2*mediateste);
	printf("Sua nota da prova é %f\n", prova);
	printf("Sua media dos teste é %f\n", mediateste);
	printf("Sua media final é %f\n", notafinal);
	return 0;
}

