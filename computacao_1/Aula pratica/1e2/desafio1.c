/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
//soma dos termos da Progressao aritmetica = (a1+an)*n/2
int main(int argc, char **argv)
{
	int a,b,vrau;
	a = 0;
	scanf("%i", &b);
	vrau = (a+b)*(b+1)/2;
	printf("A soma de todos os numeros de 0 até %d e %d\n", b, vrau);
	
	return 0;
}

