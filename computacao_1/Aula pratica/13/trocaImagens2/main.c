/*
 * main.c
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
#include "funcoes.h"


int main(int argc, char* args[]){

    SDL_Event evento;
    int quit = false;
    int contador = 1;

    if(!inicia()){
        printf("Problema na inicialização\n");
    }
    else{
        printf("Consegui inicializar.\n");
        if(!carregaImagem()){
            printf("Problema na inicializaçao da imagem.\n");
        }
        else{
            if (!carregaSons()) {
                printf("Problema ao carregar os sons.\n");
            }
            else {
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
        }
    }

    while(!quit){
        while(SDL_PollEvent(&evento)){
            switch(evento.type){
                case SDL_QUIT:
                    quit = true;
                    break;
                case SDL_KEYDOWN:
                    switch(evento.key.keysym.sym) {
                        case SDLK_ESCAPE:
                            quit = 1;
                            break;
                        case SDLK_q:
                            quit = 1;
                            break;
                        default: break;
                    }
                case SDL_MOUSEBUTTONDOWN:
                    switch(evento.button.button){
                        case SDL_BUTTON_LEFT:
                            verificaMouse(&evento, contador);
                            contador++;
                            break;
                    }


                default: break;
            }
        }
    }
    fecha();
    return 0;
}

