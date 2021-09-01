#include <stdio.h>
#include <stdlib.h>
#include "mpi.h"

int main(int argc, char *argv[]) { 
	/* mpi_bcast.c */
	int valor, meu_ranque, raiz = 0;
	int *vetor;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &meu_ranque);
	vetor = (int*)malloc(sizeof(int)*5);

	/* O valor a ser enviado é lido pelo processo raiz */
	if (meu_ranque == raiz) {
		for(int i = 0; i < 5; i++){
			printf("Entre um valor: \n");
			scanf("%d", vetor+i);
		}
	}
	/* A rotina de difusão é chamada por todos processos, apenas o processo raiz envia, os demais recebem */
	MPI_Bcast(vetor, 5, MPI_INT, raiz, MPI_COMM_WORLD);
	/* O valor agora é o mesmo em todos os processos */
	printf("O processo com ranque %d recebeu os valores: %d %d %d %d %d\n",meu_ranque, *(vetor), *(vetor+1), *vetor+2, *(vetor+3), *(vetor+4) );
	/* Termina a execução */
	MPI_Finalize();
	return 0;
}