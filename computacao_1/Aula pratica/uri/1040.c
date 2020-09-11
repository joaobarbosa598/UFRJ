/*
Programa :   Begin .c
Autor:      João Vitor Freitas
Data :       00/00/2017
Descricao : Este  programa  faz  algo  muito importante .
*/


#include <stdio.h>

int main(int argc, char **argv)
{
	float N1, N2, N3, N4, media, notaexame;
	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	
	media = (2*N1 + 3*N2 + 4*N3 + 1*N4)/10;
	printf("Media: %1.1f\n", media);
	
	if(media >= 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if(media < 5)
	{
		printf("Aluno reprovado.\n");
	}
	else if(media >= 5 && media <= 6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%f", &notaexame);
		printf("Nota do exame: %1.1f\n", notaexame);
		media = (media + notaexame)/2;
		if(media >= 5)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %1.1f\n", media);
		}
		else if(media <= 4.9)
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %1.1f\n", media);
		}
	}
	
	return 0;
}

