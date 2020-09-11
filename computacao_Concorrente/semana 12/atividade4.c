/* Disciplina: Computacao Concorrente */
/* Prof.: Silvana Rossetto */
/* Laboratório: 12 */
/* Codigo: Comunicação entre threads usando variável compartilhada e sincronização com semáforos */

#include <stdio.h>
#include <stdlib.h> 
#include <pthread.h>
#include <semaphore.h>

#define NTHREADS 4

// Variaveis globais
int buffer[5];      //variavel compartilhada entre as threads
sem_t prod, cons;     //semaforos para sincronizar a ordem de execucao das threads
int in, out = 0;

void mostraBuffer()
{
  int t;
  for(t=0;t<5;t++) printf("%d ", buffer[t]);
  printf("\n");
}

//funcao executada pela thread 1
void *produtora (void *threadid) {
  int *tid = (int*) threadid;
  printf("Thread : %d esta executando...\n", *tid);

  sem_wait(&prod);
  buffer[in] = *tid;
  in = (in+1)%5;
  mostraBuffer();
  sem_post(&cons);

  printf("Thread : %d terminou!\n", *tid);
  pthread_exit(NULL);
}

//funcao executada pela thread 2
void *consumidora (void *threadid) {
  int *tid = (int*) threadid;
  printf("Thread : %d esta executando...\n", *tid);

  sem_wait(&cons);
  buffer[out] = -1;
  out = (out+1)%5;
  mostraBuffer();
  sem_post(&prod);

  printf("Thread : %d terminou!\n", *tid);
  pthread_exit(NULL);
}

//funcao principal
int main(int argc, char *argv[]) {
  pthread_t tid[NTHREADS];
  int *id[4], t;

  for(t = 0; t < 5; t++)
    buffer[t] = -1;

  for (t=0; t<NTHREADS; t++) {
    if ((id[t] = malloc(sizeof(int))) == NULL) {
       pthread_exit(NULL); return 1;
    }
    *id[t] = t+1;
  }

  //inicia os semaforos
  sem_init(&prod, 0, 5);
  sem_init(&cons, 0, 0);

  //cria as tres threads
  for(;;)
  {
    if (pthread_create(&tid[0], NULL, consumidora, (void *)id[0])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[1], NULL, produtora, (void *)id[1])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[2], NULL, produtora, (void *)id[2])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[3], NULL, produtora, (void *)id[3])) { printf("--ERRO: pthread_create()\n"); exit(-1); }

    //--espera todas as threads terminarem
    for (t=0; t<NTHREADS; t++) {
      if (pthread_join(tid[t], NULL)) {
          printf("--ERRO: pthread_join() \n"); exit(-1); 
      } 
    }
  } 
      free(id[t]);
  pthread_exit(NULL);
}
