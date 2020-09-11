/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int chave, senha;
	
	chave = 2002;
	
	scanf("%d", &senha);
	
	for(; chave != senha; )
	{
		printf("Senha Invalida\n");
		scanf("%d", &senha);
	}
	printf("Acesso Permitido\n");
	
	return 0;
}

