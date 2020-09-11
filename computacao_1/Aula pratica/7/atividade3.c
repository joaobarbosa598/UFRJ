/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

int QuantasVezes (char frase[], char procurado);

int main(int argc, char **argv)
{
	char c;
	char frase[80];
	int vezes;
	
	gets(frase);
	c = 'a';
	vezes = QuantasVezes(frase, c);
	printf("O caracter %c apareceu %d vezes na frase %s\n", c, vezes, frase);
	
	
	return 0;
}

int QuantasVezes (char frase[], char procurado)
{
	int i, cont;
	cont = 0;
	
	for(i = 0; i < strlen(frase); i++)
	{
		if(frase[i] == procurado)
			cont+=1;			
	}
	return cont;
}


