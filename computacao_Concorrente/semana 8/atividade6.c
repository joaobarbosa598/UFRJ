/*
Programa :   atividade6 .c
Autor:      João Vitor Freitas
Data :       10/10/2019
Descricao :atividade1 do lab8, Implemente uma aplicacao em C com duas threads: uma que gera e depositan 
́umeros inteiros em um buffer(“produtor”) e outra que consome esses elementos (“con-sumidor”).
*/
//gcc -o atividade6 atividade6.c -lpthread -lm

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <math.h>

#define NTHREADS 2

typedef struct estrutura
{
    int cont;
    int tid;
}t_struct;

t_struct varGlobal;
int threads = 0;
int leit = 0, escr = 0;

pthread_mutex_t x_mutex;
pthread_cond_t x_cond_leit, x_cond_escr, x_cond_bar;

void barreira(int nthreads);
void *escritor(void *arg);
void *leitor(void *arg);
void entraLeitura(void);
void saiLeitura(void);
void entraEscrita(void);
void saiEscrita(void);

int main(int argc, char **argv)
{
	pthread_t tid_sistema[NTHREADS];
	int i, t, id[NTHREADS];	

    varGlobal.cont = 0;
    varGlobal.tid = 0;
     
    for(t=0; t<NTHREADS; t++) 
    {
        id[t]=t;
        if(t%2==0)
        {
            if (pthread_create(&tid_sistema[t], NULL, leitor, (void *) &id[t])) 
            {
                printf("--ERRO: pthread_create()\n"); exit(-1);
            }
        }
        else
        {
            if (pthread_create(&tid_sistema[t], NULL, escritor, (void *) &id[t])) 
            {
                printf("--ERRO: pthread_create()\n"); exit(-1);
            }
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

void *escritor(void *arg)
{    
    int tid = *(int*) arg;
    while(1)
    {
        entraEscrita();
        varGlobal.cont++;
        varGlobal.tid = tid;
        //printf("thread: %d cont:%d\n", varGlobal.tid, varGlobal.cont);
        //barreira(NTHREADS);
        saiEscrita();
    }
   
    pthread_exit(NULL);

}

void *leitor(void *arg)
{
    //int tid = *(int*) arg;
    while(1)
    {
        entraLeitura();
        //barreira(NTHREADS);
        printf("thread: %d cont:%d\n", varGlobal.tid, varGlobal.cont);
        saiLeitura();
    }
  
    pthread_exit(NULL);
}

void entraEscrita(void)
{
    pthread_mutex_lock(&x_mutex);
    while( (leit>0) || (escr>0))
    {
        pthread_cond_wait(&x_cond_escr,&x_mutex);
    }
    escr++;
    pthread_mutex_unlock(&x_mutex);
}

void saiEscrita(void)
{
    pthread_mutex_lock(&x_mutex);
    escr--;
    pthread_cond_signal(&x_cond_escr);
    pthread_cond_broadcast(&x_cond_leit);
    pthread_mutex_unlock(&x_mutex);
}

void entraLeitura(void)
{
    pthread_mutex_lock(&x_mutex);
    while(escr > 0)
    {
        pthread_cond_wait(&x_cond_leit, &x_mutex);
    }
    leit++;
    pthread_mutex_unlock(&x_mutex);
}

void saiLeitura(void)
{
    pthread_mutex_lock(&x_mutex);
    leit--;
    if(leit==0) pthread_cond_signal(&x_cond_escr);
    pthread_mutex_unlock(&x_mutex);
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

