/*
 * exercicio3
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

int main(int argc, char **argv)
{
	int i = 10, j = 20;
	int temp;
	int *p1, *p2;
	
	p1 = &i; //p1 recebe o endereço de i
	p2 = &j; //p2 recebe o endereco de j
	temp = *p1; // temp recebe o conteudo que p1 aponta
	*p1 = *p2; //p1 recebe o conteudo que p2 aponta
	
	*p2 = temp; //p2 recebe o conteudo de temp
	
	printf("%d %d\n", i, j);
	
	return 0;
}

