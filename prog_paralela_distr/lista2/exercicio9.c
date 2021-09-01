#include <stdio.h>
#include "mpi.h"
#include <string.h>

int main(int argc, char *argv[]) {

    int num_procs, meu_ranque, num_procs_original, origem;
    char mensagem[200] = "Minha mensagem sendo enviada atraves do canal.";
    MPI_Status estado;

    MPI_Init(&argc, &argv);

    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs_original);
    MPI_Comm_rank(MPI_COMM_WORLD, &meu_ranque);

    do {
        
        if (meu_ranque != (num_procs - 1)) {
            MPI_Send(&mensagem, strlen(mensagem)+1, MPI_CHAR, num_procs - 1, 1, MPI_COMM_WORLD);
            printf("O processo %d mandou uma mensagem para o processo %d.\n", meu_ranque, num_procs - 1);
        }

        else {
            for (int i = 0; i < (num_procs_original - 1); i++) {
                MPI_Recv(mensagem, strlen(mensagem)+1, MPI_CHAR, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &estado);
                //MPI_Recv(mensagem, strlen(mensagem)+2, MPI_CHAR, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &estado);
                //MPI_Recv(mensagem, strlen(mensagem)+1, MPI_CHAR, MPI_ANY_SOURCE, 1, MPI_COMM_WORLD, &estado);
                printf("O processo %d recebeu uma mensagem do processo %d.\n", num_procs - 1, estado.MPI_SOURCE);
            }
        }

    } while (--num_procs);

    MPI_Finalize();

    return 0;
}