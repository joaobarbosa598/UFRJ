/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       24/03/2017
Descri ̧c~ao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int vx, vy, vt, distance;
	float time;
	
	vx = 60;
	vy = 90;
	vt = 60/(vy - vx);
	
	
	scanf("%d", &distance);
	
	time = (distance*vt);
	printf("%1.0f minutos\n", time);
	
	
	
	return 0;
}

