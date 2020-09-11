/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       02/06/2017
Descricao : Este  programa  faz  algo  muito importante .
*/

#include <stdio.h>
#include <math.h>

typedef struct
{
	int x, y;
}PONTO;

typedef struct
{
	float raio;
	PONTO centro;
}CIRCUNFERENCIA;

int main(int argc, char **argv)
{
	CIRCUNFERENCIA c1;
	PONTO p1;
	double dist;
	int dx, dy;

	puts("Entre com o ponto desejado");
	scanf("%d %d", &p1.x, &p1.y);
	puts("Entre com o raio e os pontos do centro do circulo");
	scanf("%f %d %d", &c1.raio, &c1.centro.x, &c1.centro.y);

	dx = p1.x - c1.centro.x;
	if(dx < 0)
		dx*=-1;
	dy = p1.y - c1.centro.y;
	if(dy < 0)
		dy*=-1;

	dist = sqrt(dx*dx+dy*dy);
	if(dist < c1.raio)
		puts("O ponto esta no circulo");
	else if(dist == c1.raio)
		puts("O ponto esta na circunferencia");
	else
		puts("O ponto esta fora da circunferencia");

	return 0;
}
