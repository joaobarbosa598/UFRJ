/*
 * ProcessingPPM.c
 * 
 * Copyright 2016 Adriano Cruz <adriano@nce.ufrj.br>
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
 * 
 */


#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int r, g, b;
} PIXEL;

int main(int argc, char **argv)
{
    char nomeArquivoIn[81];
    char nomeArquivoOut[81];
    FILE *parqIn;
    FILE *parqOut;
    
    
    
    
    int larguraImagem;  /* X */
    int alturaImagem;   /* Y */
    /* int maiorValorCor; MAX */
    char buffer[81];
    unsigned short int **red;
    unsigned short int **green;
    unsigned short int **blue;
    int i, j;
    
    puts("Nome arquivo entrada?");
    fgets(nomeArquivoIn, 81, stdin);
    nomeArquivoIn[strlen(nomeArquivoIn)-1] = '\0';
    
    
    parqIn = fopen(nomeArquivoIn, "r");
    if (!parqIn) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivoIn);
        return ENOENT;
    }

    puts("Nome arquivo saida?");
    fgets(nomeArquivoOut, 81, stdin);
    nomeArquivoOut[strlen(nomeArquivoOut)-1] = '\0';
    
    
    parqOut = fopen(nomeArquivoOut, "w");
    if (!parqOut) {
        printf("Erro ao abrir o arquivo %s\n", nomeArquivoOut);
        return ENOENT;
    }
    
    /* Ler tipo do arquivo */
    fgets(buffer, 81, parqIn);   
    fputs(buffer, parqOut);

    /* Ler dimensoes da imagem */
    fgets(buffer, 81, parqIn);
    fputs(buffer, parqOut);
    sscanf(buffer, "%d %d ", &larguraImagem, &alturaImagem);
    
    
    /* Ler cor maxima */
    fgets(buffer, 81, parqIn);
    fputs(buffer, parqOut);
    
    red = (unsigned short int **) calloc(alturaImagem, sizeof(unsigned short int *));
    if (!red) {
        puts("Erro ao alocar memoria");
        return ENOMEM;
    }
    for (i = 0; i < alturaImagem; i++) {
        red[i] = (unsigned short int *) calloc(larguraImagem, sizeof(unsigned short int));
        if (!red[i]) {
            puts("Erro ao alocar memoria");
            return ENOMEM;
        }
    }
    
    green = (unsigned short int **) calloc(alturaImagem, sizeof(unsigned short int *));
    if (!green) {
        puts("Erro ao alocar memoria");
        return ENOMEM;
    }
    for (i = 0; i < alturaImagem; i++) {
        green[i] = (unsigned short int *) calloc(larguraImagem, sizeof(unsigned short int));
        if (!green[i]) {
            puts("Erro ao alocar memoria");
            return ENOMEM;
        }
    }
    
    
    blue = (unsigned short int **) calloc(alturaImagem, sizeof(unsigned short int *));
    if (!blue) {
        puts("Erro ao alocar memoria");
        return ENOMEM;
    }
    for (i = 0; i < alturaImagem; i++) {
        blue[i] = (unsigned short int *) calloc(larguraImagem, sizeof(unsigned short int));
        if (!blue[i]) {
            puts("Erro ao alocar memoria");
            return ENOMEM;
        }
    }
    
    for (i = 0; i < alturaImagem; i++) {
        for (j = 0; j < larguraImagem; j++) {
            fscanf(parqIn, "%hu %hu %hu", &red[i][j], &green[i][j], &blue[i][j]);
            fprintf(parqOut, "%hu\n%hu\n%hu\n", 255, green[i][j], blue[i][j]);
            /*printf("%d %d\n", i, j); */
        }
    }
    
    fclose(parqIn);
    fclose(parqOut);
    
    return 0;
}

