/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       04/04/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char type1[20], type2[20], type3[20];
	char one[20] = "vertebrado", two[20] = "invertebrado";
	char three[20] = "ave", four[20] = "mamifero", five[20] = "inseto", six[20] = "anelideo";
	char seven[20] = "carnivoro", eight[20] = "onivoro", nine[20] = "herbivoro", ten[20] = "hematofago";
	
	scanf("%s", &type1);
	scanf("%s", &type2);
	scanf("%s", &type3);
	
	if(strcmp(type1,one) == 0)
	{
		if(strcmp(type2,three) == 0)
		{
			if(strcmp(type3,seven) == 0)
			{
				printf("aguia\n");
			}
			else if(strcmp(type3,eight) == 0)
			{
				printf("pomba\n");
			}
		}
		else if(strcmp(type2,four) == 0)
		{
			if(strcmp(type3,eight) == 0)
			{
				printf("homem\n");
			}
			else if(strcmp(type3,nine) == 0)
			{
				printf("vaca\n");
			}
		}
	}
	else if(strcmp(type1,two) == 0)
	{
		if(strcmp(type2,five) == 0)
		{
			if(strcmp(type3,ten) == 0)
			{
				printf("pulga\n");
			}
			else if(strcmp(type3,nine) == 0)
			{
				printf("lagarta\n");
			}
		}
		else if(strcmp(type2,six) == 0)
		{
			if(strcmp(type3,ten) == 0)
			{
				printf("sanguessuga\n");
			}
			else if(strcmp(type3,eight) == 0)
			{
				printf("minhoca\n");
			}
		}
	}
	
	
	return 0;
}

