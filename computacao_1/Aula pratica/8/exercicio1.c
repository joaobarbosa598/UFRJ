/*
 * exercicio1.c
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
	int var;
	int *varPtr;
	
	var = 7;
	varPtr = &var;
	
	printf("O endereço de var e %p\n" "O valor de varPtr e %p\n", &var, varPtr);
	
	printf("O valor de var e %d\n" "O valor que varPtr aponta e %d\n", var, *varPtr);
	
	printf("Mostrando que * e & sao complementares\n" "&*varPtr = %p\n" "*&varPtr = %p\n", &*varPtr, *&varPtr);
	
	
	return 0;
}

