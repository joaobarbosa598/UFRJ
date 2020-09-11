/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 81

void ConverteCadeiaParaMaiusculas(char v[]);
int TamanhoCadeia(char v[]);
char ConverteLetraParaMaiuscula(char c);
int EhLetraMinuscula (char c);

int main(int argc, char **argv)
{
	char frase[TAM];
	
	gets(frase);
	
	while(TamanhoCadeia(frase))
	{
		ConverteCadeiaParaMaiusculas(frase);
		printf("%s\n", frase);
		gets(frase);
	}
	
	return 0;
}
void ConverteCadeiaParaMaiusculas(char v[])
{
	int i;
	for(i = 0; i < TamanhoCadeia(v); i++)
	{
		v[i] = ConverteLetraParaMaiuscula(v[i]);
	}
}
char ConverteLetraParaMaiuscula(char c)
{
	if(EhLetraMinuscula(c))
	{
		c = toupper(c);
	}
	return c;
}
int EhLetraMinuscula(char c)
{
	int code;
	code = c;
	
	return islower(code);
}
int TamanhoCadeia(char v[])
{
	int i, cont;
	cont = 0;
	for(i = 0; i < strlen(v); i++)
		cont+=1;
	return cont;
}











