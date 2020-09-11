/* Disciplina: Computacao Concorrente */
/* Prof.: Silvana Rossetto */
/* Laboratório: 1 */
/* Codigo: "desafio da primeira aula" usando threads em C com passagem de um argumento */

#include <stdio.h>
#include <stdlib.h> 
#include <pthread.h>

#define NTHREADS  2
#define N 100

int vet[N];

void *incrementaConc(void * arg)
{
	int id = * (int *)arg;
	int i;
	if(!id)
		for(i = 0; i < N/2; i++)
		{
			vet[i]+=1;
		}
	else
	{
		for(i = N/2; i < N; i++)
		{
			vet[i]+=1;
		}
	}
	/*
	for(i = id; i<N; i+=NTHREADS)
	{
		vet[i]+=1;
	}*/
	pthread_exit(NULL);
}

void imprimeVetor(int vetor[], int tam)
{
	int i;
	for(i=0; i<tam;i++)
		printf("%d ", vetor[i]);
	printf("\n"); 
}

//funcao principal do programa
int main() {
	pthread_t tid_sistema[NTHREADS];
	int t;
	int *arg; //receberá o argumento para a thread
	
	for(t = 0; t < N; t++)
	{
		vet[t]=0;
	}
	imprimeVetor(vet, N);
	
	for(t=0; t<NTHREADS; t++) 
	{
		//printf("--Aloca e preenche argumento com o identificador da thread na aplicacao %d\n", t);
		arg = malloc(sizeof(int));
		if (arg == NULL) 
		{
			printf("--ERRO: malloc()\n"); exit(-1);
		}
		*arg = t; 
		printf("--Argumento alocado para a thread %d no endereço %p:\n", *arg, arg);
		
		printf("--Cria a thread %d\n", t);
		if (pthread_create(&tid_sistema[t], NULL, incrementaConc, (void*) arg)) 
		{
			printf("--ERRO: pthread_create()\n"); exit(-1);
		}
	}
	
	for (t=0; t<NTHREADS; t++) 
	{
		if (pthread_join(tid_sistema[t], NULL)) 
		{
			printf("--ERRO: pthread_join() \n"); exit(-1); 
		} 
	}
	printf("--Thread principal terminou\n");
	imprimeVetor(vet, N);
	pthread_exit(NULL);
}
