/*
Programa :   atividade5 .c
Autor:      João Vitor Freitas
Data :       10/10/2019
Descricao :atividade1 do lab8, Implemente uma aplicacao em C com duas threads: uma que gera e depositan 
́umeros inteiros em um buffer(“produtor”) e outra que consome esses elementos (“con-sumidor”).
*/
//gcc -o atividade5 atividade5.c -lpthread -lm

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <math.h>

#define NTHREADS 5
#define PASSOS 5

int threads = 0;

pthread_mutex_t x_mutex;
pthread_cond_t x_cond_bar;

void barreira(int nthreads);
void *A(void *arg);

int main(int argc, char **argv)
{
	pthread_t tid_sistema[NTHREADS];
	int i, t, id[NTHREADS];	


	/* Cria as threads */
 	for(t=0; t<NTHREADS; t++) 
    {
        id[t]=t;
        if (pthread_create(&tid_sistema[t], NULL, A, (void *) &id[t])) 
        {
            printf("--ERRO: pthread_create()\n"); exit(-1);
        }
    }

  	/* Espera todas as threads completarem */
  	for (i = 0; i < NTHREADS; i++) 
  	{
    	pthread_join(tid_sistema[i], NULL);
  	}
  	printf ("\nFIM\n");
	pthread_exit(NULL);//pthread_exit tambem funciona como um join, pois nao deixa que o return 
						//seja executado antes das threads terminarem

	return 0;
}

void *A(void *arg)
{
    int tid = *(int*) arg;
    int i;
    int cont = 0;
    int boba1, boba2;

    for(i = 0; i < PASSOS; i++)
    {
        cont++;
        printf("Thread %d: cont=%d, passo=%d\n", tid, cont, i);

        //sincronizacao condicional
        barreira(NTHREADS);

        /*faz alguma coisa para gastar tempo...*/
        boba1 = 100; boba2=-100; while(boba2<boba1)boba2++;
    }
    pthread_exit(NULL);

}

void barreira(int nthreads)
{
    pthread_mutex_lock(&x_mutex);
    threads++;

    if(threads < nthreads)
    {
        pthread_cond_wait(&x_cond_bar, &x_mutex);
    }
    else
    {
        threads = 0;
        pthread_cond_broadcast(&x_cond_bar);
    }

    pthread_mutex_unlock(&x_mutex);
}

