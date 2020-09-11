#include <stdio.h>
#include <stdlib.h> 
#include <stdio.h>
#include <math.h>
#include <pthread.h>
#include "timer.h"
//http://dontpad.com/makepad
//gcc -o atividade4 atividade4.c -lm -lpthread

#define NTHREADS  4

int ehPrimo(long long int n);
void *chamaEhPrimo(void *threadid);

pthread_mutex_t mutex;
int quantidade;

int main(int argc, char **argv)
{
    pthread_t tid[NTHREADS];
    int t, id[NTHREADS];
    int *result, resultadoo;
    result = (int *)malloc(sizeof(int));
	scanf("%lld", &quantidade);

    //--inicilaiza o mutex (lock de exclusao mutua)
    pthread_mutex_init(&mutex, NULL);
    for(t=0; t<NTHREADS; t++) 
    {
        id[t]=t;
        if (pthread_create(&tid[t], NULL, chamaEhPrimo, (void *) &id[t])) 
        {
            printf("--ERRO: pthread_create()\n"); exit(-1);
        }
    }
    //--espera todas as threads terminarem
    for (t=0; t<NTHREADS; t++) 
    {
        if (pthread_join(tid[t], (void*) &result ) 
        {
            printf("--ERRO: pthread_join() \n"); exit(-1); 
        } 
        resultadoo = *result;
    } 

    pthread_mutex_destroy(&mutex);

	//printf("temos %d primos entre 0 e %lld(sem incluir o ultimo)\n", confere, tamanhoVetor);
	return 0;
}

void *chamaEhPrimo(void *threadid)
{
    int i;
    int tid = *(int*) threadid;
    int confere = 0;
    int *retorno;
    retorno = (int *)malloc(sizeof(int));

    printf("Thread : %d esta executando...\n", tid);

    for(i = tid; i < NTHREADS; i+= NTHREADS)
    {
        confere+= ehPrimo(i);
    }
    *retorno = confere;
    pthread_exit( (void * ) retorno );
}

int ehPrimo(long long int n) 
{
	int i;
	if (n<=1) return 0;
	if (n==2) return 1;
	if (n%2==0) return 0;
	for (i=3; i< sqrt(n)+1; i+=2)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
