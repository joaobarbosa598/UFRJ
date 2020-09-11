/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

void ordem (int,int);

int main(int argc, char **argv)
{
	int n;
	
	scanf("%d", &n);
	ordem(n, n);
	
	return 0;
}



void ordem (int a, int n)
{
	if (a == 0) return;
	
	printf("%d %d\n", a, n-a+1);
	ordem(a-1, n);
}


