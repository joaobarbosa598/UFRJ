/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int gTAM = 5;

typedef struct _JOGADOR
{
	int pontos;
	char nome[42];
}JOGADOR;

int main(int argc, char **argv)
{
	JOGADOR *lista;
	int i;

	lista = (JOGADOR *) malloc(sizeof(JOGADOR)*5);
	if(!lista)
	{
		puts("MEMORIA INSUFICIENTE");
		return 1;
	}
	/*lista[i] (valor)
		lista[i].x (valor)
		&lista[i] (endereco)
		&(lista[i].x) (endereco)
		ISSO FUNCIONA DIFERENTE EM UM VETOR DE CHAR
		lista+i (endereco)
		(lista+i).x (endereco) ???
		&(*(lista+i)).x (endereco)
		*(lista+i) (valor)
		(*(lista+i)).x (valor)  ??? */

	for(i = 0; i < gTAM; i++)
	{
		// o uso do scanf nao é bom no caso de strings pois no primeiro white space ele para de ler o nome
		//scanf("%s %d", (*(lista+i)).nome, &(*(lista+i)).pontos );


		fgets( (*(lista+i)).nome, 41, stdin);
		( *( lista+i ) ).nome[strcspn( (*(lista+i)).nome, "\n" )]    = '\0';//ambos funcionam
		//lista[i].nome[ strcspn(lista[i].nome, "\n") ] = '\0'; //funciona
		scanf("%d", &(*(lista+i)).pontos );
		getchar();
		
	}

	for(i = 0; i < gTAM; i++)
	{
		printf("%s -", (*(lista+i)).nome );
		printf(" %d\n", (*(lista+i)).pontos );
	}

	return 0;
}
