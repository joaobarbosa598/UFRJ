/*
 * binario.c
 * 
 * Copyright 2017 Adriano Cruz <adriano@nce.ufrj.br>
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
    int decimal;
    int binario[64];
    int i;
    
    scanf("%d", &decimal);
    
    for (i = 0; i < 64; i++) {
        binario[i] = 0;
    }
    
    i = 0;
    while (decimal) {
        binario[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    for (--i; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf("\n");
    
    return 0;
}

