#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ELEMENT
{
	int elemento;
	struct ELEMENT *proximo;
};typedef struct ELEMENT ELEMENT;

ELEMENT *inicia(ELEMENT *pilhaElementos, int num);
ELEMENT *adiocionaComecoPilha(ELEMENT *pilhaElementos);
ELEMENT *removePrimeiroPilha(ELEMENT *pilhaElementos);
void printaPilha(ELEMENT *pilhaElementos);

int main (int args, char **argv)
{
	int opc;
	ELEMENT *pilha = inicia(pilha, -1);
	printaPilha(pilha);
	while(1)
	{
		printf("SELECIONE:\n1- adiciona elemento no comeco da pilha\n2- remove o primeiro elemento da pilha\n");
		scanf("%d", &opc);
		if(opc == 1)
			pilha = adiocionaComecoPilha(pilha);
		else if(opc == 2)
			pilha = removePrimeiroPilha(pilha);
		else
			break;

		printaPilha(pilha);
	}
}


ELEMENT *inicia(ELEMENT *pilhaElementos, int num)
{
	pilhaElementos = (ELEMENT *)malloc(sizeof(ELEMENT));
	pilhaElementos->elemento = num;
	pilhaElementos->proximo = NULL;
	return pilhaElementos;
}

ELEMENT *adiocionaComecoPilha(ELEMENT *pilhaElementos)
{
	int num;
	printf("QUAL NUMERO DESEJA ADIOCINAR?\n");
	scanf("%d", &num);
	ELEMENT *pilhaTemporaria = inicia(pilhaTemporaria, num);
	if(pilhaElementos->proximo == NULL)
	{
		pilhaElementos->proximo = pilhaTemporaria;
	}
	else
	{
		pilhaTemporaria->proximo = pilhaElementos->proximo;
		pilhaElementos->proximo = pilhaTemporaria;
	}
	free(pilhaTemporaria);
	return pilhaElementos;
}

ELEMENT *removePrimeiroPilha(ELEMENT *pilhaElementos)
{
	ELEMENT *pilhaTemporaria = inicia(pilhaTemporaria, -1);
	pilhaTemporaria = pilhaElementos->proximo;
	pilhaElementos->proximo = pilhaTemporaria->proximo;
	free(pilhaTemporaria);

	return pilhaElementos;
}

void printaPilha(ELEMENT *pilhaElementos)
{
	if(pilhaElementos->proximo == NULL)
	{
		printf("elemento1: %d\n", pilhaElementos->elemento);
	}
	else
	{
		ELEMENT *pilhaTemporaria = inicia(pilhaTemporaria, -1);
		pilhaTemporaria = pilhaElementos->proximo;
		while(pilhaTemporaria != NULL)
		{
			printf("%d ", pilhaTemporaria->elemento);
			pilhaTemporaria = pilhaTemporaria->proximo;
		}
		free(pilhaTemporaria);
	}

	printf("\n");
}