/*
 * bolha.c
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

void imprime(int v[], int t);
void bolha(int v[], int t);
void troca (int *a, int *b);


int main(int argc, char **argv)
{
    int *p;
    int vetor[] = { 12, 45, -10, 34, 0};
    
    bolha(vetor, 5);
    
    imprime(vetor, 5);

    return 0;
}

void troca(int *a, int *b) {
    int t;
    t = *a; 
    *a = *b;
    *b = t;
}

void bolha(int v[], int t) {
    int i;
    int j;
    
    for (i = 0; i < t -1; i++) {
        for (j = 0; j < t-1-i; j++) {
            if (v[j] > v[j+1]) {
                troca(&v[j], &v[j+1]);
            }
        }
    }
    
}

void imprime(int v[], int t) {
    int i;
    for (i = 0; i < t; i++) {
        printf("%d, ", v[i]);
    }
    printf("\n");
}
