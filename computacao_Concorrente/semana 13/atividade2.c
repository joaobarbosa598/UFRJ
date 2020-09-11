/* Disciplina: Computacao Concorrente */
/* Prof.: Silvana Rossetto */
/* Laboratório: 12 */
/* Codigo: Comunicação entre threads usando variável compartilhada e sincronização com semáforos */

#include <stdio.h>
#include <stdlib.h> 
#include <pthread.h>
#include <semaphore.h>

#define NTHREADS 4

void barreira(int id);
void fazLigacao(int id);

// Variaveis globais
int x = 0;      //variavel compartilhada entre as threads
sem_t quantH, quantO;     //semaforos para sincronizar a ordem de execucao das threads
int contH, contO = 0;
int mol[3] = {-1,-1,-1};
int in;

//funcao executada pela thread 1
void *H (void *threadid) 
{
    int *tid = (int*) threadid;
    printf("Thread : %d esta executando...\n", *tid);

    barreira(*tid);
    fazLigacao(*tid);

    printf("Thread : %d terminou!\n", *tid);
    pthread_exit(NULL);
}

//funcao executada pela thread 2
void *O (void *threadid) 
{
    int *tid = (int*) threadid;
    printf("Thread : %d esta executando...\n", *tid);

    barreira(*tid);
    fazLigacao(*tid);

    printf("Thread : %d terminou!\n", *tid);
    pthread_exit(NULL);
}

void barreira(int id)
{
    int myID = id%2;

    if(contH==2 && )
    {
        
    }
    if(myID==0)
    {
        sem_wait(&quantO);
        contO++;
    }
    else
    {
        sem_wait(&quantH);
        contH++;
    }


}

void fazLigacao(int id)
{
    mol[in] = id;
    in = (in+1)%3;
    for(int i = 0; i < 3; i++)
        printf("%d ", mol[i]);
    printf("\n");
}

//funcao principal
int main(int argc, char *argv[]) {
    pthread_t tid[NTHREADS];
    int *id[4], t;

    for (t=0; t<NTHREADS; t++) 
    {
        if ((id[t] = malloc(sizeof(int))) == NULL) 
        {
            pthread_exit(NULL); return 1;
        }
        *id[t] = t;
    }

    //inicia os semaforos
    sem_init(&quantH, 0, 2);
    sem_init(&quantO, 0, 1);

    //cria as tres threads
    if (pthread_create(&tid[0], NULL, O, (void *)id[0])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[1], NULL, H, (void *)id[1])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[2], NULL, O, (void *)id[2])) { printf("--ERRO: pthread_create()\n"); exit(-1); }
    if (pthread_create(&tid[3], NULL, H, (void *)id[3])) { printf("--ERRO: pthread_create()\n"); exit(-1); }

    //--espera todas as threads terminarem
    for (t=0; t<NTHREADS; t++) 
    {
        if (pthread_join(tid[t], NULL)) 
        {
            printf("--ERRO: pthread_join() \n"); exit(-1); 
        } 
        free(id[t]);
    } 
    pthread_exit(NULL);
}
