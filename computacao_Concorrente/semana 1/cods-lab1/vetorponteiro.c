#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define TAM  10
#define NTHREADS  2

//cria a estrutura de dados para armazenar os argumentos da thread
typedef struct {
   int vetor[TAM/2], threadNum;
} t_Args;

//--funcao executada pelas threads
void *Incrementa (void *arg);

int main (int argc, char **argv)
{
	pthread_t tid_sistema[NTHREADS]; //identificadoes das threads no sistema

	int t; //variavel auxiliar
	int i,j;
	//criando o vetor, alocando espaço para ele e setando todos os elementos para zero
	t_Args *obj;

	/*obj = (t_Args*) malloc(sizeof(t_Args));
	obj->vetor = (int *)malloc(sizeof(int)*TAM);
	if(!obj)
	{
		puts("MEMORIA INSUFICIENTE");
		return 1;
	}

	printf("linha 32\n");
	for(j = 0; j < TAM; j++)
	{
		*( (obj->vetor)+j ) = 0;
	 	printf("%d ", *( (obj->vetor)+j ) );
	}
	
	printf("\n");*/

	//início da bruxaria
	for(t=0; t<NTHREADS; t++) 
	{
		obj = malloc(sizeof(t_Args));
		if(obj == NULL)
		{
			printf("--ERRO: malloc()\n"); exit(-1);
		}
		obj->threadNum = t;
		for(i = 0; i < TAM/2; i++)
		{
			obj->vetor[i] = 0;
		}




		printf("--Cria a thread %d\n", t);
		obj->threadNum = t;
		if (pthread_create(&tid_sistema[t], NULL, Incrementa, (void *)obj ) ) 
		{
		  printf("--ERRO: pthread_create()\n"); exit(-1);
		}
	}

	//--espera todas as threads terminarem
	for (t=0; t<NTHREADS; t++) {
		if (pthread_join(tid_sistema[t], NULL)) {
		     printf("--ERRO: pthread_join() \n"); exit(-1); 
		} 
	}

	printf("--Thread principal terminou\n");

	for(j = 0; j < TAM; j++)
	{
	 	printf("%d ", *( (obj->vetor)+j ) );
	}

	free(obj);

	pthread_exit(NULL);
}

void *Incrementa (void *arg)
{
	int i;
	t_Args *args = (t_Args *) arg;
	printf("args->threadNum %d\n", args->threadNum);

	for(i = 0; i < TAM/2; i++)
	{
		//( (arg->vetor)+i ) = 1;
	}

	for(i = 0; i < TAM/2; i++)
	{
		printf("%d\n", *((arg->vetor)+i) );
	}

	printf("Sou a thread %d de %d threads\n", args->threadNum, NTHREADS);
}
