/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       07/04/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int month;
	char month2[12][32] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	scanf("%d", &month);
	
	printf("%s\n", month2[month-1]);
	
	return 0;
}

