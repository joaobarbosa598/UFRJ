/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

void misterio (char *n);
/*tambem funciona
void misterio (char n[]);*/

int main(int argc, char **argv)
{
	char nome[41];
	gets(nome);
	
	misterio(nome);
	
	return 0;
}


void misterio (char *n)
{
	//n é o endereço de algum valor de *n, ou seja, a posicao. Por isso quando dou n++ ele pula de posicao
	// *n aponta para um valor na posicao n, por isso é um valor(caracter)
	while (*n != ' ')
		n++;
	
	n++;
	// n é um vetor, nao um caracter, portanto ele imprime todo o vetor
	puts(n);
}

/*isso tambem funciona e faz a mesma coisa
void misterio (char n[])
{
	int i;
	i = 0;
	
	while (n[i] != ' ')
	{
		n++;
	}
	
	n++;
	
	puts(n);
}*/


