/*
 * exercicio2.c
 * 
 * Copyright 2017 Joao Vitor <Joao Vitor@USER-PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

typedef struct _PONTO
{
	float x, y;
}PONTO;

typedef struct _CIRCUNFERENCIA
{
	float RAIO;
	PONTO centro;
}CIRCUNFERENCIA;

int main(int argc, char **argv)
{
	CIRCUNFERENCIA c1;
	
	printf("Entre com o raio do circulo c1\n");
	scanf("%f", &c1.RAIO);
	printf("Entre com as coordenadas do centro do circulo c1\n");
	scanf("%f %f", &c1.centro.x, &c1.centro.y);
	printf("Dados lidos\n");
	printf("Circulo c1: raio = %f, x = %f, y = %f\n", c1.RAIO, c1.centro.x, c1.centro.y);
	
	return 0;
}

