/*
 * exercicio4.c
 * 
 * Copyright 2017 Unknown <convidado@ANCHIETA02>
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

void Troca (int *a, int *b);

int main(int argc, char **argv)
{
	int x, y;
	int *px, *py;
	
	px = &x;
	py = &y;
	
	scanf("%d %d", px, py); //o scanf pede um endereço, pois é *algo
	
	Troca(px, py); //troca pede um endereço, pois é *a
	printf("Troquei -----> %d %d\n", *px, *py);//o print pede um valor
	
	return 0;
}

void Troca (int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

