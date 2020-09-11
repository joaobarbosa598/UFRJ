/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       06/06/2017
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

void comparaPONTO (JOGADOR *p1, JOGADOR *p2);

int main(int argc, char **argv)
{
	JOGADOR *lista;
	int i, j;

	lista = (JOGADOR *) malloc(sizeof(JOGADOR)*5);
	if(!lista)
	{
		puts("MEMORIA INSUFICIENTE");
		return 1;
	}

	for(i = 0; i < gTAM; i++)
	{
		fgets( (*(lista+i)).nome, 41, stdin);
		( *( lista+i ) ).nome[strcspn( (*(lista+i)).nome, "\n" )]    = '\0';//ambos funcionam(isso serve para retirar o \n do vetor)
		//lista[i].nome[ strcspn(lista[i].nome, "\n") ] = '\0'; //funciona(isso serve para retirar o \n do vetor)
		scanf("%d", &(*(lista+i)).pontos );
		getchar();/*PARA PEGAR O \n*/

	}

	for(i = 0; i < gTAM; i++)
	{
		printf("%s -", (*(lista+i)).nome );
		printf(" %d\n", (*(lista+i)).pontos );
	}

	/*BUBBLE SORT DOS JOGADORES*/
	for(i = 0; i < gTAM; i++)
	{
		for(j = 0; j < gTAM - i - 1; j++)
		{
			comparaPONTO( &(*(lista+j)), &(*(lista+j+1)) );
		}
	}

	for(i = 0; i < gTAM; i++)
	{
		printf("%s -", (*(lista+i)).nome );
		printf(" %d\n", (*(lista+i)).pontos );
	}

	return 0;
}

/*AQUI DEVE SER PONTEIRO POIS EU PRECISO TROCAR AS VARIAVEIS DO MAIN, E COMO ESSA FUNCAO NAO RETORNA VALOR
	E COMO NO C NAO E POSSIVEL RETORNAR 2 VALORES, DEVO MODIFICAR DESSA MANEIRA, MODIFICAR O QUE ELES APONTAM*/
void comparaPONTO (JOGADOR *p1, JOGADOR *p2)
{
	int pontoTEMP,i;
	char nomeTEMP[42];

	if(p1->pontos <  p2->pontos)
	{
		pontoTEMP = p2->pontos;
		p2->pontos = p1->pontos;
		p1->pontos = pontoTEMP;
		for(i = 0; i < 42; i++)
		{
			nomeTEMP[i] = p2->nome[i];
			p2->nome[i] = p1->nome[i];
			p1->nome[i] = nomeTEMP[i];
		}
	}
}
