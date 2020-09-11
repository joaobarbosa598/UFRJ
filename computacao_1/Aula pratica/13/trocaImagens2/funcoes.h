#ifndef FUNCOES_H
#define FUNCOES_H


#include "Defs.h"
#include "Globais.h"

/* Prototipos */
void verificaMouse(SDL_Event* , int );
int inicia(void);
void fecha(void);
void verificaMouse(SDL_Event* , int );
int carregaImagem(void );
int carregaSons(void );
SDL_Surface* loadSurface( char * );
Mix_Chunk* loadSound(char* );

#endif
