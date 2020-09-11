CC=gcc

#CFLAGS=-g -Wall -D_GNU_SOURCE=1 -D_REENTRANT
CFLAGS=-g -Wall -D_REENTRANT
IMAGE_FLAGS=-lSDL2_image
#GRAPHIC_FLAGS=-lSDL_gfx
MIXER_FLAGS=-lSDL2_mixer
#TEXT_FLAGS=-lSDL_ttf
#LFLAGS=-L/usr/lib/x86_64-linux-gnu/dri -L/usr/lib/x86_64-linux-gnu 
LFLAGS=-L/usr/lib/x86_64-linux-gnu 
IFLAGS=-I/usr/include/SDL2
SFLAGS=-lSDL2
SOURCES=main.c funcoes.c Globais.c
OBJECTS=main.o funcoes.o Globais.o
BINARIES=main

#all: ex0 ex1 ex2 ex3 ex4 ex5 ex6 ex7 grafico texto
all: $(BINARIES)

main: main.o funcoes.o Globais.o
	$(CC) -o main main.o funcoes.o Globais.o $(CFLAGS) $(SFLAGS) $(LFLAGS) $(IFLAGS) $(IMAGE_FLAGS) $(MIXER_FLAGS)
	
main.o: main.c
	$(CC) -c main.c $(CFLAGS) 
	
funcoes.o: funcoes.c
	$(CC) -c funcoes.c $(SFLAGS)

Globais.o: Globais.c
	$(CC) -c Globais.c $(SFLAGS)

clean:
	rm -rf *.o *.exe *.bak *.c~ $(BINARIES) core a.out

limpa:
	del *.o *.exe *.bak *.c~ $(BINARIES) core


#-I/usr/include/SDL -D_GNU_SOURCE=1 -D_REENTRANT
#-L/usr/lib -lSDL
#gcc -o teste5 funcoes.o teste5.o $(CFLAGS) $(IMAGE_FLAGS) `sdl-config --cflags --libs`

#-I/usr/include/SDL2 -D_REENTRANT
#-L/usr/lib/x86_64-linux-gnu -lSDL2
