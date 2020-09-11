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
	double A, B, C, temp;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A > 0 && B > 0 && C > 0)
	{
		while(B > A || C > A)
		{
			if(B > A)
			{
				temp = A;
				A = B;
				B = temp;
				
			}
			else if(C > A)
			{
				temp = A;
				A = C;
				C = temp;
			}
			printf("%f, %f, %f,\n", A, B, C);
		}
		if(A >= B+C)
		{
			printf("NAO FORMA TRIANGULO\n");
		}
		else if(A < B+C)
		{
			if(A*A == B*B + C*C)
			{
				printf("TRIANGULO RETANGULO\n");
			}
			if(A*A > B*B + C*C)
			{
				printf("TRIANGULO OBTUSANGULO\n");
			}
			if(A*A < B*B + C*C)
			{
				printf("TRIANGULO ACUTANGULO\n");
			}
		}
		if( A == B && B == C)
		{
			printf("TRIANGULO EQUILATERO\n");
		}
		if(A == B && B != C)
		{
			printf("TRIANGULO ISOSCELES\n");
		}
		else if(A != B && B == C)
		{
			printf("TRIANGULO ISOSCELES\n");
		}
		else if(A == C && C != B)
		{
			printf("TRIANGULO ISOSCELES\n");
		}
		
	}
	
	return 0;
}

