/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int seg, minut, hour;
	
	scanf("%d", &seg);
	
	minut = seg/60;
	hour = minut/60;
	while(minut >= 60)
	{
		minut = minut - 60;
	}
	while(seg >= 60)
	{
		seg = seg - 60;
	}
	
	printf("%d:%d:%d\n", hour, minut, seg);
	
	
	return 0;
}

