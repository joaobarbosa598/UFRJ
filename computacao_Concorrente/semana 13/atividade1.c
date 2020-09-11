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
sem_t em_e, em_l, escr, leit;     //semaforos para sincronizar a ordem de execucao das threads
int in, e , l = 0;

void mostraBuffer()
{
    int t;
    for(t=0;t<5;t++) printf("%d ", buffer[t]);
    printf("\n");
}

//funcao executada pela thread 1
void *leitor (void *threadid) 
{
    int *tid = (int*) threadid;

    while(1)
    {  
        printf("Thread de leitura: %d esta executando...\n", *tid);

        sem_wait(&leit);
        sem_wait(&em_l);
        printf("Inicio da exclusao mutua entre leitores\n");
        l++;
        if(l==1)
        {
            printf("Ninguem mais pode escrever\n");
            sem_wait(&escr);
            printf("Alguem já pode escrever\n");
        }
        sem_post(&em_l);
        sem_post(&leit);
        printf("Final da exclusao mutua entre leitores\n");
        
        for(int i = 0; i < 5; i++)
            printf("%d ", buffer[i]);
        printf("\n");
        
        sem_wait(&em_l);
        l--;
        if(l==0)
            sem_post(&escr);
        sem_post(&em_l);

        printf("Thread  de leitura: %d terminou!\n", *tid);
    }
    pthread_exit(NULL);
}

//funcao executada pela thread 2
void *escritor (void *threadid) 
{
    int *tid = (int*) threadid;

    while(1)
    {
        printf("Thread de escrita: %d esta executando...\n", *tid);
        sem_wait(&em_e);
        e++;
        if(e==1)
        {
            printf("Ninguem mais pode ler\n");
            sem_wait(&leit);
            printf("Alguem ja pode ler\n");
        }
        sem_post(&em_e);
        sem_wait(&escr);

        buffer[in] = *tid;
        in = (in+1)%5;

        sem_post(&escr);
        sem_wait(&em_e);
        e--;
        if(e==0)
            sem_post(&leit);
        sem_post(&em_e);
        printf("Thread de escrita: %d terminou!\n", *tid);
    }
    pthread_exit(NULL);
}

//funcao principal
int main(int argc, char *argv[]) 
{
    pthread_t tid[NTHREADS];
    int *id[4], t;

    for(t = 0; t < 5; t++)
        buffer[t] = -1;

    for (t=0; t<NTHREADS; t++) 
    {
        if ((id[t] = malloc(sizeof(int))) == NULL) 
        {
            pthread_exit(NULL); return 1;
        }
        *id[t] = t+1;
    }

    //inicia os semaforos
    sem_init(&em_e, 0, 1);
    sem_init(&em_l, 0, 1);
    sem_init(&escr, 0, 1);
    sem_init(&leit, 0, 1);

  
    if (pthread_create(&tid[0], NULL, leitor, (void *)id[0])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[1], NULL, leitor, (void *)id[1])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[2], NULL, escritor, (void *)id[2])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[3], NULL, escritor, (void *)id[3])) { printf("--ERRO: pthread_create()\n"); exit(-1); }

    //--espera todas as threads terminarem
    for (t=0; t<NTHREADS; t++) {
        if (pthread_join(tid[t], NULL)) 
        {
            printf("--ERRO: pthread_join() \n"); exit(-1); 
        }
        
        free(id[t]); 
    }
   
    pthread_exit(NULL);
}
