/*
 * exercicio8.c
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
	FILE *po;
	
	char ler[] = "ler.txt";
	char escrever[] = "escrever.txt";
	char o[80];
	int i;
	
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
	while(fscanf(pa ,"%s %d", o, &i) == 2){
	fgetc(pa);
	fprintf(po, "%d %s\n", i, o);
}
	 
	
	return 0;
}

