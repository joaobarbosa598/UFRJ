/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int hour1, hour2, time;
	
	scanf("%d %d", &hour1, &hour2);
	
	if(hour1 >= hour2)
	{
		hour2 = hour2 + 24;
		time = hour2 - hour1;
	}
	else if(hour1 < hour2)
	{
		time = hour2 - hour1;
	}
	printf("O JOGO DUROU %d HORA(S)\n", time);
	
	return 0;
}

