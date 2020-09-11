/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

void Converter (int numeroBase10, int numeroBase2[32]);

int main(int argc, char **argv)
{
	int nb10, nb2[32], i, teste;
	
	teste = 1;
	
	while(1)
	{
		scanf("%d", &nb10);
		if(nb10 < 0)
			break;
			
		Converter(nb10,nb2);
		
		printf("Teste %d\n", teste++);
		printf("%d\n", nb10);
		
		for(i = 32; i >= 0; i--)
		{
			printf("%d", nb2[i]);
		}
		
		printf("\n\n");
	}
	
	return 0;
}

void Converter (int numeroBase10, int numeroBase2[32])
{
	int i;
	
	for(i = 0; i < 32; i++)
	{
		numeroBase2[i] = numeroBase10%2;
		numeroBase10/=2;
	}
	
}



