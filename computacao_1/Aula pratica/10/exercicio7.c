/*
 * exercicio7.c
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
	FILE *pa;
	char *file = "texto2.txt";
	char c;
	
	pa = fopen(file, "r");
	if(!pa)
	{
		printf("Erro ao abrir %s\n", file);
		return 1;
	}
	
	while(1)
	{
		c = fgetc(pa);
		if(c == EOF)
			break;
		putchar(c);
	}
	
	fclose(pa);
	return 0;
	
	return 0;
}

