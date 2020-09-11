/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char number[100];
	char testepos;
	int i, j, cont, timee;
	
	cont = 0;
	//testepos = (char) 0; //nulo nao da erro, pq eu pego um espaco na memoria e preencho com nulo
	testepos = '\0'; //nulo, sem as aspas duplas
	//testepos = ''; //isso é vazio, dá erro pq eu pego um espaco na memoria e nao uso
	// "" é para cadeia de caracter, '' é um caracter simples
	scanf("%d", &timee);
	
	for(j = 0; j < timee; j++)
	{
		scanf("%s", number); // nao precisa do &, pois ja é um ponteiro
		for(i = 0; i < strlen(number); i++)
		{
			testepos = number[i];			
			if(testepos =='0' || testepos =='6' || testepos =='9')
				cont+=6;
			else if(testepos =='1')
				cont+=2;
			else if(testepos =='2' || testepos =='3' || testepos =='5')
				cont+=5;
			else if(testepos =='4')
				cont+=4;
			else if(testepos =='7')
				cont+=3;
			else if(testepos =='8')
				cont+=7;
		}
		printf("%d leds\n", cont);
		cont = 0;
	}
	
	return 0;
}

