/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       21/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

int ondeEsta (char frase1[], char frase2[]);

int main(int argc, char **argv)
{
	char frase1[100];
	char frase2[20];
	
	gets(frase1);
	gets(frase2);
	
	printf("%d\n", ondeEsta(frase1, frase2));
	
	return 0;
}

int ondeEsta (char frase1[], char frase2[])
{
	int i, j, cont, pos;
	cont=0;
	
	for(i = 0; i < strlen(frase1); i++)
	{
		if(frase2[0] == frase1[i])
		{
			pos = i;
			for(j = 1; j < strlen(frase2); j++)
			{
				if(frase2[j] == frase1[i+j])
					cont=i;
				else
				{
					cont = 0;
					pos = 0;
				}
			}
		}
	}
	return pos;
	
}


