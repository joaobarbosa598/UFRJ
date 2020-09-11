/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double A, B, C, RAIZ1, RAIZ2;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A > 0 && sqrt(B*B - (4*A*C)) >= 0)
	{			
		RAIZ1 = (-B + sqrt(B*B - (4*A*C)))/(2*A);
		RAIZ2 = (-B - sqrt(B*B - (4*A*C)))/(2*A);
		printf("R1 = %1.5f\n", RAIZ1);
		printf("R2 = %1.5f\n", RAIZ2);
	}
	else
	{ 
		printf("Impossivel calcular\n");
	}
	
		
	return 0;
}

