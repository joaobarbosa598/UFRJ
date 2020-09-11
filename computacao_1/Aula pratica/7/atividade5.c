/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

void criptografia (char frase[]);
void decriptgrafa (char frase[]);

int main(int argc, char **argv)
{
	char frase[80];
	
	gets(frase);
	
	criptografia(frase);
	
	return 0;
}

void criptografia (char frase[])
{
	int i;
	char result[80] = "";
	
	for(i = 0; i < strlen(frase); i++)
	{
		//tabela ascii
		if(frase[i] > 64 && frase[i] < 91)
			result[i] = ((frase[i] - 'A'  + 1) % 26) + 'A';
		else if(frase[i] > 96 && frase[i] < 123)
			result[i] = ((frase[i] - 'a'  + 1) % 26) + 'a';
	}
	printf("%s\n", result);
	decriptgrafa(result);
}

void decriptgrafa (char frase[])
{
	int i;
	char result[80] = "";
	
	for(i = 0; i < strlen(frase); i++)
	{
		//tabela ascii
		if(frase[i] > 64 && frase[i] < 91)
			result[i] = ((frase[i] - 'A'  - 1) % 26) + 'A';
		else if(frase[i] > 96 && frase[i] < 123)
			result[i] = ((frase[i] - 'a'  - 1) % 26) + 'a';
	}
	printf("%s\n", result);
}


