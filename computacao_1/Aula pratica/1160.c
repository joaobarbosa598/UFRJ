/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int T, i, PA, PB, cont, f;
	double G1, G2, M1, M2;

	cont = 1;
	M1 = 0;
	M2 = 0;
	f = 1;
	scanf("%d", &T);
	
	for(i = 0; i < T; i++)
	{
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
		G1 = G1/100;
		G2 = G2/100;
		M1 = PA*(1+G1);
		M2 = PB*(1+G2);
		while( (M1 <= M2) && f == 1)
		{
			M1*=(1+G1);
			M2*=(1+G2);
			cont+=1;
			if(cont > 100)
			{
				printf("Mais de 1 seculo.\n");
				f = 0;
			}
		}
		printf("M1: %1.0f M2: %1.0f\n", M1, M2);
		if(f)
			printf("%d anos\n", cont);
		M1 = 0;
		M2 = 0;
		cont = 0;
		f = 1;
	}
	
	return 0;
}


