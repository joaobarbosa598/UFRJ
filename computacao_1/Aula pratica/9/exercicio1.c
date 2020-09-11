/*
 * exercicio 1.c
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

int main(int argc, char **argv)
{
	PONTO p;
	
	printf("Entre com as coordenadas do ponto p\n");
	scanf("%f %f", &p.x, &p.y);
	printf("Dados lidos\n");
	printf("Ponto p: x = %f, y = %f\n", p.x, p.y);
	
	return 0;
}

