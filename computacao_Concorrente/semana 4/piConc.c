/*
 * piConc.c
 * 
*/


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void *calculaPiAuxConc(void * arg);

long long int N;
int threads;

int main(int argc, char **argv)
{
	pthread_t *tid_sistema;
	int *tid;
	int t;
	double pi = 4.0;
	double *result;
	double resultAux = 0.0;
	result = malloc(sizeof(double));
	
	printf("Digite o numero de threads desejadas:");
	scanf("%d", &threads);
	printf("Digite o numero de operacoes desejadas:");
	scanf("%lld", &N);;
	
	tid_sistema = (pthread_t *) malloc(sizeof(pthread_t) * threads);
	if(tid_sistema == NULL)
	{
		printf("--ERRO: malloc()\n");
		exit(-1);
	}
	
	for(t=0; t<threads; t++) 
	{
		tid = malloc(sizeof(int)); 
		if(tid==NULL) 
		{ 
			printf("--ERRO: malloc()\n"); exit(-1); 
		}
		*tid = t;

		if (pthread_create(&tid_sistema[t], NULL, calculaPiAuxConc, (void*) tid))
		{
			printf("--ERRO: pthread_create()\n"); exit(-1);
		}
	}
	//espera todas as threads terminarem e imprime o vetor de saída
	for(t=0; t<threads; t++) 
	{
		if (pthread_join(tid_sistema[t], (void *) &result )) 
		{
			printf("--ERRO: pthread_join()\n"); 
			exit(-1);
		}
		resultAux += *result;
		printf("result %lf\n", *result);
	}
	
	pi = pi*resultAux;
	printf("pi eh %lf\n", pi);
	
	return 0;
}

void *calculaPiAuxConc(void * arg)
{
	int td = *(int *) arg;
	double num = 0.0;
	double aux = 0.0;
	double *numAux;
	numAux = malloc(sizeof(double));
	int i;
	
	for(i = td, aux = (double)td; i < N; i+=threads)
	{
		if( i%2 == 0 )num += 1/(2*aux+1);
		else num -= 1/(2*aux+1);
		
		aux+=threads;
	}
	printf("nummm %lf\n", num);
	*numAux = num;
	free(arg);
	pthread_exit( (void *) numAux);
}

