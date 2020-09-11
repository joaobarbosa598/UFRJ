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
	double A, B, C, 
		   areaTriangle, areaCircle, areaTrapeze, areaSquare, areaRectangle, pi;
	
	pi = 3.14159;
	scanf("%lf %lf %lf", &A, &B, &C);
	
	areaTriangle = (A*C)/2;
	areaCircle = pi*pow(C,2);
	areaTrapeze = ((A+B)/2)*C;
	areaSquare = pow(B,2);
	areaRectangle = A*B;
	
	printf("TRIANGULO: %1.3f\n", areaTriangle);
	printf("CIRCULO: %1.3f\n", areaCircle);
	printf("TRAPEZIO: %1.3f\n", areaTrapeze);
	printf("QUADRADO: %1.3f\n", areaSquare);
	printf("RETANGULO: %1.3f\n", areaRectangle);	
	
	return 0;
}

