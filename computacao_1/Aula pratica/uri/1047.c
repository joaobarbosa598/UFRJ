/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       17/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int hour1, min1, time1, hour2, min2, time2, time, rest1, rest2;
	
	scanf("%d %d %d %d", &hour1, &min1, &hour2, &min2);
	
	time1 = hour1*60+min1;
	time2 = hour2*60+min2;
	
	if(time1 >= time2)
	{
		time2 = time2+(24*60);
		time = time2 - time1;
	}
	else if(time1 < time2)
	{
		time = time2 - time1;
	}
	rest1 = (int)time/60;
	rest2 = time - rest1*60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rest1, rest2);
	
	return 0;
}

