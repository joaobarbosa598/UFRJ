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

int distanciaCircunferencias(CIRCUNFERENCIA c1, CIRCUNFERENCIA c2);

int main(int argc, char **argv)
{
	CIRCUNFERENCIA c1, c2;
	int result;

	puts("Entre com o raio e coordenadas do centro da primeira circunferencia");
	scanf("%f %d %d", &c1.raio, &c1.centro.x, &c1.centro.y);
	puts("Entre com o raio e coordenadas do centro da segunda circunferencia");
	scanf("%f %d %d", &c2.raio, &c2.centro.x, &c2.centro.y);

	result = distanciaCircunferencias(c1, c2);
	if(result)
	{
		if(result == -2)
			puts("AS CIRCUNFERENCIAS ESTAO CONTIDAS UMA NA OUTRA");
		else if(result == -1)
			puts("AS CIRCUNFERENCIAS SAO TANGENTES EXTERNAMENTE");
		else if(result == 1)
			puts("AS CIRCUNFERENCIAS SAO EXTERNAS UMA A OUTRA");
		else if(result == 2)
			puts("AS CIRCUNFERENCIA SAO SECANTES");
	}
	else
		puts("ERROR");

	return 0;
}

int distanciaCircunferencias(CIRCUNFERENCIA c1, CIRCUNFERENCIA c2)
{
	/*RETORNA -2 SE ESTIVEREM UMA DENTRO DA OUTRA
		RETORNA -1 SE FOREM TANGENTES EXTERNAMENTE
		RETURNA 1 SE FOREM EXTERNAS UMA A OUTRA
		RETURNA 2 SE FOREM SECANTES*/
	int distx, disty;
	double dist;
	/*UMA DENTRO DA OUTRA*/
	if(c1.centro.x == c2.centro.x)
	{
		if(c1.centro.y == c2.centro.y)
			return -2;
	}

	distx = c1.centro.x - c2.centro.x;
	if(distx < 0)
		distx*=-1;
	disty = c1.centro.y - c2.centro.y;
	if(disty < 0)
		disty*=-1;

	dist = sqrt(distx*distx+disty*disty);

	if(dist == c1.raio+c2.raio) /*TANGENTES*/
		return -1;
	else if(dist < c1.raio+c2.raio)/*SECANTES*/
		return 2;
	else if(dist > c1.raio+c2.raio)/*EXTERNAS UMA A OUTRA*/
		return 1;
	else
		return 0;

}
