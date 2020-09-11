/*
 * exercicio6
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
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *pa;
	int i, n;
	char file[32];
	
	fgets(file, 31, stdin);
	file[strcspn(file, "\n")] = '\0';
	
	pa = fopen(file, "a");
	
	if(pa == NULL)
	{
		printf("Arquivo nao pode ser aberto\n");
		return 1;
	}
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		fprintf(pa, "%d\n", n);
	}
	
	return 0;
}

