/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	double salary, impost;
	
	scanf("%lf", &salary);
	
	if(salary > 0.00 && salary <= 2000.00)
	{
		impost = salary;
		printf("Isento\n");
	}
	else if(salary >= 2000.01 && salary <= 3000.00)
	{
		while((salary-2000) - 1000 >= 1000)
		{
			salary
		}
	}
	else if(salary >= 3000.01 && salary <= 4500.00)
	{
		impost = (salary - 2000.00)*0.18;
		printf("%1.2f\n", impost);
	}
	else if(salary > 4500.00)
	{
		impost = (salary - 2000.00)*0.28;
		printf("%1.2f\n", impost);
	}
	
	
	return 0;
}

