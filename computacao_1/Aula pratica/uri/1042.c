/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int A, B, C, temp, A1, B1, C1;
	
	scanf("%d %d %d", &A, &B, &C);
	A1 = A; B1 = B; C1 = C;
	
	while(A > B || B > C || A > C)
	{
		if(A > B)
		{
			temp = A;
			A = B;
			B = temp;
		}
		else if(B > C)
		{
			temp = B;
			B = C;
			C = temp;
		}
		else if(A > C)
		{
			temp = A;
			A = C;
			C = temp;
		}
	}
	
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("\n");
	printf("%d\n", A1);
	printf("%d\n", B1);
	printf("%d\n", C1);
	
	
	return 0;
}

