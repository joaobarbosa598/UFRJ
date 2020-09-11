#include <stdio.h>
#include <stdlib.h>

const int gLINHAS = 2;
const int gCOLUNAS = 3;

int main (int argc, char **argv)
{
	int **matriz, i, j;
	matriz = (int **) malloc(sizeof(int *)*gLINHAS);

	if(!matriz)
	{
		puts("MEMORIA INSUFICIENTE");
		return 1;
	}

	for(i = 0; i < gLINHAS; i++)
	{
		*(matriz+i) = (int *) malloc(sizeof(int)*gCOLUNAS);
		if( !(*(matriz+i)) )
		{
		  puts("MEMORIA INSUFICIENTE");
		  return 1;
		}
	}

	for(i = 0; i < gLINHAS; i++)
	{
		for(j = 0; j < gCOLUNAS; j++)
		{
		  scanf("%d", &( *(*(matriz+i)+j) ) );
		}
	}

	for(i = 0; i < gLINHAS; i++)
	{
		for(j = 0; j < gCOLUNAS; j++)
		{
		  printf("%d ", *(*(matriz+i)+j) );
		}
		printf("\n");
	}
	free(matriz);

	return 0;
}
