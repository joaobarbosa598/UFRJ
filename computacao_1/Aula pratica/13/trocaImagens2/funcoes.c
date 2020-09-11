/*
 * funcoes.c
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
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include "Defs.h"
#include "Globais.h"

//Função de inicialização:

SDL_Surface* loadSurface( char *path ) {
    //The final optimized image
    SDL_Surface* optimizedSurface = NULL;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path );
    if( loadedSurface == NULL ) {
        printf( "Unable to load image %s! SDL_image Error: %s\n", path, IMG_GetError() );
    }
    else {
        //Convert surface to screen format
        optimizedSurface = SDL_ConvertSurface( loadedSurface, gScreenSurface->format, 0 );
        if( optimizedSurface == NULL ) {
            printf( "Unable to optimize image %s! SDL Error: %s\n", path, SDL_GetError() );
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface ); 
    }

    return optimizedSurface;
}



Mix_Chunk* loadSound(char* path) {
    Mix_Chunk* sound = NULL;
    sound = Mix_LoadWAV(path);
    if (!sound) {
        fprintf(stderr, "Erro: nao carregou som: %s\n%s\n",
                        path, Mix_GetError() );
    }
    return sound;
}

int inicia(){

    int success = true;
    printf("Inicializando o inicia.\n");

    if(SDL_Init (SDL_INIT_VIDEO) < 0){
        printf("Deu bug na inicialização! Erro:%s\n", SDL_GetError() );
        success = false;
    }
    else{

        //Criação da janela:
        gWindow = SDL_CreateWindow("Troca Imagens!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );

        if(gWindow == NULL){
            printf("A janela não pode ser criada! Sorry! Erro: %s\n", SDL_GetError());
            success = false;
        }
        else{
            // Inicializa JPG e PNG 
            int imgFlags = IMG_INIT_JPG | IMG_INIT_PNG;
            if( !( IMG_Init( imgFlags ) & imgFlags ) ) {
                printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                success = false;
            }
            else {
                // Pegaremos a superfície:
                gScreenSurface = SDL_GetWindowSurface(gWindow);
                if(gScreenSurface == NULL){
                    printf("Problema ao pegar a superfície. Erro: %s\n", SDL_GetError() );
                    success = false;
                }
                else {
                     if (Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 4096) < 0) {
                        fprintf(stderr, "Erro: SDL_mixer nao conseguiu inicializar: %s\n",
                        Mix_GetError());
                        success = false;
                    }
                    else {
                        Mix_AllocateChannels(8);
                    }
                }
            }
        }
    }
    printf("Terminando a inicialização\n");
    return success;
    //Finalizando a inicialização.
}

int carregaImagem() {
    //Loading success flag
    int success = true;
        
    //Load JPG surface
    gImagem1 = loadSurface( "./lobos.jpg" );
    if( gImagem1 == NULL ) {
        printf( "Failed to load image %s! SDL Error: %s\n", "./lobos.jpg", SDL_GetError() );
        success = false;
    } 
    
    //Load JPG surface
    gImagem2 = loadSurface( "./tigres.jpg" );
    if( gImagem2 == NULL ) {
        printf( "Failed to load image %s! SDL Error: %s\n", "./tigres.jpg", SDL_GetError() );
        success = false;
    }
    return success;
}

int carregaSons() {
     int success = true;
     
    if ( !(som = loadSound("./kaboom.wav")))  {
        success = false;
    }
    else {
        Mix_VolumeChunk(som, 64);
    }
    
    return success;
}


//Função para verificação de onde está o mouse ( a função é chamada quando o butão do mouse é pressionado):
void verificaMouse(SDL_Event* evento, int contador){

    int x, y, dentro;
    SDL_GetMouseState( &x, &y );
    dentro = false;
    if( y <= 225 && x <= 300 ) {
        dentro = true;
    }
    if (y >= 375 && x >= 300){
        dentro = true;
    }

    if (dentro){
        printf("Está dentro das imagens. Trocando-as de lugar.\n");
        if (contador % 2 != 0){
            gScreenSurface = SDL_GetWindowSurface( gWindow );
            SDL_Rect coordenadas1;
            coordenadas1.x = 300;
            coordenadas1.y = 375;
            SDL_Rect coordenadas2;
            coordenadas2.x = 0;
            coordenadas2.y = 0;
            SDL_BlitSurface( gImagem1, NULL, gScreenSurface, &coordenadas1 );
            SDL_BlitSurface( gImagem2, NULL, gScreenSurface, &coordenadas2 );
            SDL_UpdateWindowSurface( gWindow );
           
        }
        if (contador % 2 == 0){
            gScreenSurface = SDL_GetWindowSurface( gWindow );
            SDL_Rect coordenadas1;
            coordenadas1.x = 0;
            coordenadas1.y = 0;
            SDL_Rect coordenadas2;
            coordenadas2.x = 300;
            coordenadas2.y = 375;
            SDL_BlitSurface( gImagem1, NULL, gScreenSurface, &coordenadas1 );
            SDL_BlitSurface( gImagem2, NULL, gScreenSurface, &coordenadas2 );
            SDL_UpdateWindowSurface( gWindow );
        }
         Mix_PlayChannel(-1, som, 0);
    }
}



void fecha(){
    SDL_FreeSurface(gImagem1);
    SDL_FreeSurface(gImagem2);
    SDL_DestroyWindow(gWindow);
    printf("Fechando\n");
    SDL_Quit();
}

