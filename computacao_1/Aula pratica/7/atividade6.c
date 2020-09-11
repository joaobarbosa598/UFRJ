/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       20/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#define ALTURA 10
#define LARGURA 10

int MoveEsquerda(int x);
int MoveDireita(int x);
int MoveCima(int y);
int MoveBaixo(int y);

int main(int argc, char **argv)
{
	//px e py é a posica atual
	int px = 0, py = 0;
	char ordem;
	int continua = 1;
	
	while(continua)
	{
		scanf(" %c", &ordem);
		switch(ordem)
		{
			case 'a':
				px = MoveEsquerda(px); 
				break; //ele passa a posicao atual
			case 'd':
				px = MoveDireita(px);
				break;
			case 'w':
				py = MoveCima(py); 
				break;
			case 's':
				py = MoveBaixo(py); 
				break;
			case 'q':
				continua = 0; 
				break;
			default:
				puts("Opcao invalida");
		}
		printf("Estou em %d %d\n", px, py);
	}
	return 0;
}

int MoveEsquerda(int x)
{
	if(x > 0)
		x-=1;
	return x;
}

int MoveDireita(int x)
{
	if(x < LARGURA)
		x+=1;
	return x;
}

int MoveCima(int y)
{
	if(y < 0)
		y+=1;
	return y;
}

int MoveBaixo(int y)
{
	if(-y < ALTURA)
		y-=1;
	return y;
}


