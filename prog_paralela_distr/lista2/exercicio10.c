#include <stdio.h>
#include <stdlib.h>
#include "mpi.h"

int main(int argc, char *argv[]) {
    int meu_ranque, total_num, etiq = 0;
    int num_procs = 5;
    int origem = 0;
    int numero = 10;
    
    MPI_Status estado;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &meu_ranque);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
    
    if(meu_ranque == origem){
        MPI_Send(&numero, 1, MPI_INT, (meu_ranque+1) % num_procs, etiq,MPI_COMM_WORLD);
    }
    while(numero > 0){
        MPI_Recv(&numero,1,MPI_INT, (meu_ranque+num_procs-1) % num_procs,etiq,MPI_COMM_WORLD, &estado);
        if (meu_ranque == origem) {
            numero -= 1;     
        }
        printf("Processo %d recebeu %d. Processo de Origem da mensagem = %d, etiqueta = %d\n", meu_ranque,numero ,estado.MPI_SOURCE, estado.MPI_TAG);
        MPI_Send(&numero, 1, MPI_INT, (meu_ranque+1) % num_procs, etiq,MPI_COMM_WORLD);
        printf("Processo %d enviou %d. Processo de Envio da mensagem = %d, etiqueta = %d\n", meu_ranque,numero ,(meu_ranque+1) % num_procs, estado.MPI_TAG);    
    }
    MPI_Finalize();    
    return 0;
}
