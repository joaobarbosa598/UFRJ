/*
 * struct.c
 * 
 * Copyright 2017 Unknown <convidado@ANCHIETA01>
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
#include <stdlib.h>

typedef struct _PONTO{
	int x,y;
} PONTO;

typedef struct _CIRCULO{
	PONTO centro;
	int raio;
} CIRCULO;

int main(int argc, char **argv)
{
	CIRCULO c;
	int i;
	
	/*scanf("%d %d %d", &c.centro.x, &c.centro.y, &c.raio);
	printf("X:%d Y:%d RAIO:%d\n", c.centro.x, c.centro.y, c.raio);*/
	
	
	CIRCULO *pc;
	int *pi;
	
	pi = &i;
	//pi = (int *) malloc(sizeof(int)*1);
	
	
	pc = &c;
	//pc = (CIRCULO *) malloc(sizeof(CIRCULO)*1);
	
	
	scanf("%d %d", &i, pi);
	printf("i:%d pi:%d\n", i, *pi);
	
	scanf("%d %d %d", &(pc->raio), &(pc->centro.x), &(pc->centro.y) );
	printf("raio:%d x:%d y:%d\n", pc->raio, pc->centro.x, pc->centro.y);
	
	
	return 0;
}

