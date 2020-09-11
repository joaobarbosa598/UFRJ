/*
 * exercicio10.c
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
#include <string.h>

int main(int argc, char **argv)
{
	FILE *pa;
	FILE *po;
	
	char ler[80];
	char escrever[80];
	char all;
	fgets(ler, 79, stdin);
	ler[strcspn(ler, "\n"])] = '\0';
	fgets(escrever, 79, stdin);
	
	while( !strcmp(ler, escrever) )
	{
		printf("DIGITE NOVAMENTE\n");
		fgets(escrever, 79, stdin);
	}
	
	pa = fopen(ler, "r");
	po = fopen(escrever, "w+");
	
	if(!pa)
	{
		printf("Erro ao abrir %s\n", ler);
		return 1;
	}
	
	if(!po)
	{
		printf("Erro ao abrir %s\n", escrever);
		return 1;
	}
	while(1)
	{
		all = fgetc(pa);
		if(all == EOF)
			break;
		fprintf(po, "%c", all);
	}
	return 0;
}

