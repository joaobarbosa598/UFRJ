/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	float A, B, C, temp, perim, area;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if(A > 0 && B > 0 && C > 0)
	{
		//esse while torna A o maior valor entra A,B e C
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
		}
		if(A >= B+C)
		{
			area = (A+B)*C/2;
			printf("Area = %1.1f\n", area);
		}
		else if(A < B+C)
		{
			perim = A+B+C;
			printf("Perimetro = %1.1f\n", perim);
		}
	}
	
	
	return 0;
}

