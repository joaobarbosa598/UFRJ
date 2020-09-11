/*
 * exercicio6.c
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
#include <stddef.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, n, *pvetor;
	float media;
	
	scanf("%d", &n);
	pvetor = (int *)malloc(n*sizeof(int));
	if(!pvetor)
	{
		puts("Sem memoria.");
		return 1;
	}
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &pvetor[i]);
	}
	
	media = 0.0;
	for(i = 0; i < n; i++)
	{
		media+= pvetor[i];
	}
	media/=n;
	printf("%1.2f\n", media);
	
	free(pvetor);
	
	return 0;
}

