/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       18/05/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int ordem (int a,int b);

int main(int argc, char **argv)
{
	int n, *b, c;
	
	c = -1;
	b = &c;
	
	scanf("%d", &n);
	if(n == 10)
		c*=-1;
	ordem(n,*b);
	
	return 0;
}

int ordem (int a,int b)
{
	if(a == 10 || a == 1)
	{
		printf("\n%d ", a);
		b*=-1;
		a+=b;
		return ordem(a,b);
	}
	else
	{
		printf("%d ", a);
		a+=b;
		return ordem(a,b);
	}
}


