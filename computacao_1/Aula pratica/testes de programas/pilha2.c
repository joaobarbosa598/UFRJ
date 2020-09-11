#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *inicia(int *pilha, int num);
int *adiciona(int *pilha);
int *removePilha(int *pilha);
int getTam(int *pilha);
void printaPilha(int *pilha);

int main (int args, char ** argv)
{
	int opc;
	int *pilha = inicia(pilha,1);

	while(1)
	{
		printf("SELECIONE:\n1- adiciona na pilha\n2- remove da pilha\n");
		scanf("%d", &opc);
		if(opc == 1)
			pilha = adiciona(pilha);
		else if(opc == 2)
			pilha = removePilha(pilha);
		else
			break;
		//printaPilha(pilha);
	}
}


int *inicia(int *pilha, int num)
{
	pilha = (int *)malloc(sizeof(int)*num);
	for(int i = 0; i < num; i++)
		*(pilha+i) = 0;

	return pilha;
}

int *adiciona(int *pilha)
{
	int num;
	int contador=0;

	printf("QUAL NUMERO DESEJA ADIOCINAR?\n");
	scanf("%d", &num);

	printf("pilhaTam: %d\n", sizeof(pilha)/sizeof(int*));
	int *pilhaTemp = inicia(pilha, 10);
	pilhaTemp = pilha;

	pilha = inicia(pilha, 10);
	*(pilha+0) = num;

	if(contador>0)
	{
		for(int i=0; *(pilhaTemp+i)==0 ; i++)
		{
			*(pilha+i+1) = *(pilhaTemp+i);
		}
	}
	printf("*(pilha+0): %d\n", *(pilha+0));
	printf("*(pilha+1): %d\n", *(pilha+1));
	return pilha;
}

int *removePilha(int *pilha)
{
	return pilha;
}

void printaPilha(int *pilha)
{
	if(*(pilha+0)==-1)
		printf("-1\n");
	else
	{
		for(int i = 0; *(pilha+i)!=-1; i++)
		{
			printf("%d ", *(pilha+i) );
		}
		printf("\n");
	}
}

