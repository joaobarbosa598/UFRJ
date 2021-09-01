#include "mpi.h"
#include <stdio.h>
#define MAX_FLOAT 5

int main(int argc, char *argv[]) {

    int num_procs, meu_ranque, total_num, etiq = 2, destino = 3;
    float valor = 0.011122;
    MPI_Status estado;

    MPI_Init(&argc, &argv);
    
    MPI_Comm_rank(MPI_COMM_WORLD, &meu_ranque);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);

    if (meu_ranque != 3) {
        MPI_Send(&valor, MAX_FLOAT, MPI_FLOAT, destino, etiq, MPI_COMM_WORLD);
    }
    else {
        MPI_Recv(&valor, MAX_FLOAT, MPI_FLOAT, MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &estado);
    
        MPI_Get_count(&estado, MPI_FLOAT, &total_num);

        // Exibindo as informações pedidas
        printf("O processo que enviou a mensagem foi: %d\n", estado.MPI_SOURCE);
        printf("A etiqueda da mensagem é: %d\n", estado.MPI_TAG);
        printf("Foram recebidos %d elementos\n", total_num);
    }

    MPI_Finalize();
    return 0;
}