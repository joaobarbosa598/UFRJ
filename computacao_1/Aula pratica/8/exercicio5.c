/*
 * exercicio5.c
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

char *acharSobrenome (char nome[]);

int main(int argc, char **argv)
{
	char nomeCompleto[80];
	char *p;
	
	puts("Entre com o seu nome e um sobrenome.");
	gets(nomeCompleto);
	
	p = acharSobrenome(nomeCompleto);
	
	puts(p);
	
	return 0;
}

char *acharSobrenome (char nome[])
{
	char *pnome;
	int i = 0;
	
	while(nome[i] != ' ')
		i++;
	i++;
	pnome = &nome[i];
	return pnome;
}
