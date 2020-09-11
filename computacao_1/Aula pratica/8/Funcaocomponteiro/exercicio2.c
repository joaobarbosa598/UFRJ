/*
 * exercicio2.c
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

void troca (int *a, int *b);

int main(int argc, char **argv)
{
	int x, y;
	
	scanf("%d %d", &x, &y);
	printf("Antes -------> x=%d y=%d\n", x, y);
	troca(&x, &y); //passo o endereço da variavel
	printf("Troquei -------> x=%d y=%d\n", x, y);
	
	return 0;
}

void troca (int *a, int *b) //para o que o endereço aponta
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp; 
}
