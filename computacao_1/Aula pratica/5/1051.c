/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       07/04/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double salario, impost;
	
	scanf("%lf", &salario);
	
	if(salario <= 2000.00)
	{
		salario = salario - 2000.00;
		impost = 0;
		printf("Isento\n");
	}
	else if(salario >= 2000.01 && salario <= 3000.00)
	{
		salario = salario - 2000.00;
		impost = salario*0.08;
		printf("R$ %1.2f\n", impost);
	}
	else if(salario >3000.01 && salario <= 4500.00)
	{
		salario = salario - 2000.00;
		impost = 1000.00*0.08;
		salario = salario - 1000.00;
		impost = impost + salario*0.18;
		printf("R$ %1.2f\n", impost);
	}
	else if(salario > 4500.00)
	{
		salario = salario - 2000.00;
		impost = 1000.00*0.08;
		salario = salario - 1000.00;
		impost = impost + 1500.00*0.18;
		salario = salario - 1500.00;
		impost = impost + salario*0.28;
		printf("R$ %1.2f\n", impost);
	}
	
	return 0;
}

