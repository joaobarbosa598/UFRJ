/*
Programa :   fibonnacci .c
Autor:      João Vitor Freitas
Data :       07/10/2019
Descricao :atividade1 do lab7, Implemente uma aplicacao em C com duas threads: uma que gera e depositan 
́umeros inteiros em um buffer(“produtor”) e outra que consome esses elementos (“con-sumidor”).
*/
//gcc -o fibonnacci fibonnacci.c -lpthread -lm

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <math.h>

#define THREADS 3

int buffer[5];
int produtoraFim = 0;
int quantElementos = 0;
int idInserir = 0, idRetirar = 0;

pthread_mutex_t x_mutex, x_mutex2;
pthread_cond_t x_cond_cons, x_cond_prod;


void *produtora(void *tid);
void *consumidora(void *tid);
int produzElemento();
void insere();
int retira();
void processaElemento(int elemento);
void printaBuffer();
int ehPrimo(long long int n);

int main(int argc, char **argv)
{
	pthread_t tid_sistema[THREADS];
	int i;	


	/* Cria as threads */
 	pthread_create(&tid_sistema[0], NULL, produtora, NULL);
  	pthread_create(&tid_sistema[1], NULL, consumidora, NULL);
  	pthread_create(&tid_sistema[2], NULL, consumidora, NULL);
  	/*pthread_create(&tid_sistema[3], NULL, consumidora, NULL);
  	pthread_create(&tid_sistema[4], NULL, consumidora, NULL);
  	pthread_create(&tid_sistema[5], NULL, consumidora, NULL);*/

  	/* Espera todas as threads completarem */
  	for (i = 0; i < THREADS; i++) 
  	{
    	pthread_join(tid_sistema[i], NULL);
  	}
  	printf ("\nFIM\n");

  	pthread_mutex_destroy(&x_mutex);
  	pthread_mutex_destroy(&x_mutex2);
  	pthread_cond_destroy(&x_cond_prod);
  	pthread_cond_destroy(&x_cond_cons);
  	pthread_exit (NULL);
	return 0;
}

void *produtora(void *tid)
{
	int elemento = 1;
	int i;

	for(i = 1; i < 26; i++)
	{
		elemento = produzElemento(i);
		insere(elemento);
	}
	produtoraFim = 1;
	pthread_exit(NULL);
}

void *consumidora(void *tid)
{
	int elemento;
	int i;

	for(i = 0; i < 13; i++)
	{
		elemento = retira();
		processaElemento(elemento);
	}

	pthread_exit(NULL);
}

int produzElemento(int idFibonnacci)
{
	int i;
	int f1 = 1, f2 = 1, fn = 1;

	for(i = 2; i < idFibonnacci; i++)
	{
		if(idFibonnacci < 3)
			return fn;
		else
		{
			fn = f1+f2;
			f1 = f2;
			f2 = fn;
		}
	}
	return fn;
}

void insere(int elemento)
{	
	pthread_mutex_lock(&x_mutex);
	while( quantElementos > 4 )
	{
		printf("Insere: buffer tem %d elementos, thread 0 vai se bloquear...\n", quantElementos);
     	pthread_cond_wait(&x_cond_prod, &x_mutex);
     	printf("Insere: buffer com espaço, sinal recebido e mutex realocado.\n");
	}
	printf("elemento a ser inserido %d\n", elemento);
	buffer[idInserir] = elemento;
	printf("buffer atual: ");
	printaBuffer();
	idInserir = (idInserir+1)%5;
	quantElementos++;
	pthread_mutex_unlock(&x_mutex);
	pthread_cond_broadcast(&x_cond_cons);
}

int retira()
{
	int elemento;

	pthread_mutex_lock(&x_mutex); 
	while( quantElementos == 0 )
	{
		if( produtoraFim ){
			printf("Produtora ja encerrou as atividades e nao ha como mais fazer a retirada de elementos, portanto, encerrando o programa.\n");
			pthread_exit(NULL);
		}

		printf("Retira: buffer tem %d elementos, thread 1 vai se bloquear...\n", quantElementos);
     	pthread_cond_wait(&x_cond_cons, &x_mutex);
     	printf("Retira: buffer com elementos, sinal recebido e mutex realocado.\n");
	}
	printf("elemento retirado: %d\n", buffer[idRetirar]);
	elemento = buffer[idRetirar];
	buffer[idRetirar] = 0;
	printf("buffer atual: ");
	printaBuffer();
	idRetirar = (idRetirar + 1)%5;
	quantElementos--;
	pthread_mutex_unlock(&x_mutex);
	pthread_cond_signal(&x_cond_prod);
	return elemento;
}

void processaElemento(int elemento)
{
	if(ehPrimo(elemento))
		printf("o elemento retirado %d eh primo\n", elemento);
	else
		printf("o elemento retirado %d nao eh primo\n", elemento);
}

void printaBuffer()
{
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		printf("%d ", buffer[i]);
	}
	printf("\n");
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